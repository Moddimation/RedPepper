

# File fs\_UserFileSystem.cpp

[**File List**](files.md) **>** [**CTR**](dir_4f5b717d40ecb82aa4424ef129f85a63.md) **>** [**MPCore**](dir_6f3e86808a369618d73a68c61616566f.md) **>** [**detail**](dir_2a9c53a18c177b8e3b38f4d03138598c.md) **>** [**fs\_UserFileSystem.cpp**](fs___user_file_system_8cpp.md)

[Go to the documentation of this file](fs___user_file_system_8cpp.md)


```C++
#include <nn/fs/CTR/MPCore/detail/fs_UserFileSystem.h>

namespace nn {
namespace fs {
    namespace CTR {
        namespace MPCore {
            namespace detail {
                namespace {
                    Handle g_FileServerHandle;
                } // namespace

                static bool s_Something = true;
                static bool s_IsLatencyEmulationEnable = false;
            } // namespace detail
        } // namespace MPCore
    } // namespace CTR

    void ForceDisableLatencyEmulation()
    {
        CTR::MPCore::detail::s_IsLatencyEmulationEnable = false;
    }

} // namespace fs
} // namespace nn
```


