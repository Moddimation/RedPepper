

# File fs\_UserFileSystem.h

[**File List**](files.md) **>** [**CTR**](dir_326ab91d19ff1262b765b91ed129070d.md) **>** [**MPCore**](dir_f1d9d62034d13b7cf33e89f7f4cf1ab1.md) **>** [**detail**](dir_bafffa052eb9ec735dd1b19ec1c9fc0d.md) **>** [**fs\_UserFileSystem.h**](fs___user_file_system_8h.md)

[Go to the documentation of this file](fs___user_file_system_8h.md)


```C++
#pragma once

#include <nn/Handle.h>

namespace nn {
namespace fs {
    namespace CTR {
        namespace MPCore {
            namespace detail {
                class UserFileSystem {
                public:
                    static void Initialize(Handle handle);
                };
            } // namespace detail
        } // namespace MPCore
    } // namespace CTR

    void ForceDisableLatencyEmulation();
} // namespace fs
} // namespace nn
```


