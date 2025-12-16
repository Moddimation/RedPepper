

# File Handle.h

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**include**](dir_b105e27ad861a359b82da8d20daf787e.md) **>** [**nn**](dir_98edea970dce97b73b2af390faecf17b.md) **>** [**Handle.h**](_handle_8h.md)

[Go to the documentation of this file](_handle_8h.md)


```C++
#pragma once

#include <nn/types.h>

namespace nn {

struct Handle {
    u32 m_Handle;
    Handle()
        : m_Handle(0)
    {
    }
};

} // namespace nn
```


