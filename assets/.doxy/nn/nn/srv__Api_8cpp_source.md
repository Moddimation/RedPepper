

# File srv\_Api.cpp

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**sources**](dir_a4ee87762c46a7490fc221af34a02561.md) **>** [**srv**](dir_064e8900dd82112c387a64bbbe98e02f.md) **>** [**srv\_Api.cpp**](srv__Api_8cpp.md)

[Go to the documentation of this file](srv__Api_8cpp.md)


```C++
#include <nn/srv/detail/srv_Service.h>
#include <nn/srv/srv_Api.h>

namespace nn {
namespace srv {

    namespace {

        static int s_InitializeCount = 0;

    } // namespace

    #ifdef NON_MATCHING
    Result GetServiceHandle(Handle* out, const char* service, s32 r2, u32 r3)
    {
        if (s_InitializeCount > 0)
            return Result(Result::Level_Permanent, Result::Summary_InvalidState, Result::ModuleType_SRV, Result::Description_NotInitialized);
        if (8 < r2)
            return Result(Result::Level_Permanent, Result::Summary_WrongArgument, Result::ModuleType_SRV, 5);

        return detail::Service::GetServiceHandle(out, service, r2, r3);
    }
    #endif

} // namespace srv
} // namespace nn
```


