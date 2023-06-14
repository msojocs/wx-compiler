

## std::string

v
| 操作 | 数据 | 备注 |
|---|---|---- |
| v + 0 | data | 字符串内容 |
| *(_DWORD *)(v + 4) | size() | 字符串长度 |

## std::deque

| 操作 | 数据 | 备注 |
|---|---|---- |
| (_DWORD *)(a1 + 8) | data | 内容 |
| (_DWORD *)(a1 + 16) | begin() | 起始 |
| (_DWORD *)(a1 + 32) | end() | 结束 |


## stringstream

osstream::sentry var

var + 16 < 