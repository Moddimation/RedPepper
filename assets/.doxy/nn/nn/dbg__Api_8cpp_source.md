

# File dbg\_Api.cpp

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**sources**](dir_a4ee87762c46a7490fc221af34a02561.md) **>** [**dbg**](dir_9bc1cafc29c0f8141af375bc8e40d22b.md) **>** [**dbg\_Api.cpp**](dbg__Api_8cpp.md)

[Go to the documentation of this file](dbg__Api_8cpp.md)


```C++
#include <nn/dbg/dbg_Api.h>
#include <nn/svc/svc_Api.h>

namespace nn {
namespace dbg {

    void Break(BreakReason reason)
    {
        nn::svc::Break(reason);
    }

} // namespace dbg
} // namespace nn
```


