

# File srv\_Api.h

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**include**](dir_b105e27ad861a359b82da8d20daf787e.md) **>** [**nn**](dir_98edea970dce97b73b2af390faecf17b.md) **>** [**srv**](dir_03a11bf737b72dd31d27d795228e685e.md) **>** [**srv\_Api.h**](srv___api_8h.md)

[Go to the documentation of this file](srv___api_8h.md)


```C++
#pragma once

#include <nn/Handle.h>
#include <nn/Result.h>

namespace nn {
namespace srv {

    Result Initialize();
    Result GetServiceHandle(Handle* out, const char* service, s32, u32);

} // namespace srv
} // namespace nn
```


