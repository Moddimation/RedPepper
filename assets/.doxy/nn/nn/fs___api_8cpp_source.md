

# File fs\_Api.cpp

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**sources**](dir_a4ee87762c46a7490fc221af34a02561.md) **>** [**fs**](dir_8ad7f1893acc282cd451badb401d5f5a.md) **>** [**fs\_Api.cpp**](fs___api_8cpp.md)

[Go to the documentation of this file](fs___api_8cpp.md)


```C++
#include <cstring>
#include <nn/err/CTR/err_Api.h>
#include <nn/fs/CTR/MPCore/detail/fs_UserFileSystem.h>
#include <nn/fs/detail/fs_FileSystemBase.h>
#include <nn/fs/fs_Api.h>
#include <nn/srv/srv_Api.h>

namespace nn {
namespace fs {

    namespace {
        nn::Handle s_FileServerSession;

        int /* ? */ s_FileSystemBaseImpl;
        detail::FileSystemBase s_FileSystemBase;
    } // namespace

} // namespace fs
} // namespace nn
```


