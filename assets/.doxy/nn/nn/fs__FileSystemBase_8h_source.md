

# File fs\_FileSystemBase.h

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**include**](dir_b105e27ad861a359b82da8d20daf787e.md) **>** [**nn**](dir_98edea970dce97b73b2af390faecf17b.md) **>** [**fs**](dir_641ee920e1f278459f6df0731315112f.md) **>** [**detail**](dir_9553d956b96ba52109baabb59e98035f.md) **>** [**fs\_FileSystemBase.h**](fs__FileSystemBase_8h.md)

[Go to the documentation of this file](fs__FileSystemBase_8h.md)


```C++
#pragma once

namespace nn {
namespace fs {
    namespace detail {

        class FileSystemBase {
            int* _0;

        public:
            FileSystemBase() { }
            FileSystemBase(int* a)
                : _0(a)
            {
            }
        };

        void RegisterGlobalFileSystemBase(FileSystemBase&);

    } // namespace detail
} // namespace fs
} // namespace nn
```


