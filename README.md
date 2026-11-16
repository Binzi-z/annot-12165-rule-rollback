# 规则引擎：热更新、自动回滚、告警可解释

风控引擎曾误杀正常大额用户。本版本把硬编码阈值替换为**人类可读的文本规则**，
支持热更新、加载失败自动回滚到上一版（并保留原因），每条告警带触发时的
窗口快照与规则版本。

```
data/events.jsonl     3014 条交易事件（格式未改动，引擎只读不写）
labels.json           两类欺诈的标注
rules/rules.txt       规则书（可读文本，改它即可热更新，无需发版）
rules/state/          运行期状态：last_good.txt / load_log.json / seq.txt（gitignore）
engine.py             引擎：DSL 解析校验、版本管理、滑动窗口检测、watch 热更新
demo_rollback.py      手动回滚演示：改坏规则 → 自动回滚 → 告警恢复
tests/                18 个测试（含原骨架契约测试）
```

## 规则文本长什么样

```text
rule: burst_small_pay        # 60s 滑动窗口内 12 笔 pay，且来自账户未见过的地区
window: 60
count: 12
action: pay
region: unseen

rule: new_device_big_withdraw  # 新设备 login 后 300s 内出现 >=40000 的 withdraw
require_new_device: true
follow_window: 300
action: withdraw
amount: 40000
```

解析器对每条规则做严格校验：未知规则名、未知键、缺失必填键、非正整数窗口、
非法 action/布尔值等都会失败，错误信息带行号。

## 运行

```bash
python -m pytest tests -q
python engine.py data/events.jsonl alerts.json
python -I demo_rollback.py
```

watch 模式（轮询规则文件，改动后自动热加载；改坏则自动回滚，引擎不中断）：

```bash
python engine.py data/events.jsonl alerts.json --watch --interval 0.5
```

## 热更新与回滚语义

| 场景 | 行为 |
|---|---|
| 新规则校验通过 | 原子写入 `state/last_good.txt`，版本号 `v<seq>-<内容哈希>`，立即生效 |
| 规则内容未变 | 状态记为 `unchanged`，不产生新版本 |
| 进程内热加载到坏规则 | 保持内存中上一版继续运行，原因写入 `load_log.json` |
| 新进程启动且磁盘规则已坏 | 从 `last_good.txt` 恢复上次良好版本（seq 递增、内容哈希不变） |
| 首次加载就坏且无历史版本 | fail-closed：拒绝启动，退出码 2 |

## 检测效果（3014 条事件）

- 告警数 **2**，与 `labels.json` 精确匹配，正常流水**零误报**
- `u9001` burst_small_pay：12 笔 pay 全部落在 34s 窗口内，地区 `999999`
  在窗口开始前对该账户不可见；良性账户任意 60s 内最多 2 笔 pay
- `u9002` new_device_big_withdraw：新设备 `d777-new` login 后 40s 发生
  48000 提现；良性流量里 254 次新设备登录均无大额后续（全流仅此 1 笔 withdraw）

## 告警可解释字段

每条告警包含：

- `rule_version` + `rule_text`：命中时所用规则的完整版本与文本
- `trigger_event` / `trigger_line`：触发事件及其在事件文件中的行号
- `window_snapshot.event_count`：窗口内事件条数
- `window_snapshot.time_range`：窗口起止时间与实际跨度（秒）
- `window_snapshot.aggregate`：聚合值（动作、计数、金额合计、地区；
  或新设备、login 行号、提现金额与阈值）
