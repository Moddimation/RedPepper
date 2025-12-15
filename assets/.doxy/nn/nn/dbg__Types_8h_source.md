

# File dbg\_Types.h

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**include**](dir_b105e27ad861a359b82da8d20daf787e.md) **>** [**nn**](dir_98edea970dce97b73b2af390faecf17b.md) **>** [**dbg**](dir_3f39488ec870ba853d2bea615ec9dbc1.md) **>** [**dbg\_Types.h**](dbg__Types_8h.md)

[Go to the documentation of this file](dbg__Types_8h.md)


```C++
#pragma once

namespace nn {
namespace dbg {

    enum BreakReason {
        BreakReason_PANIC,
        BreakReason_ASSERT,
        BreakReason_USER,
        BreakReason_LOAD_RO,
        BreakReason_UNLOAD_RO,
    };

} // namespace dbg
} // namespace nn
```


