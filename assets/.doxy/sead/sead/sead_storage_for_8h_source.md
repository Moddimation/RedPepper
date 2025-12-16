

# File seadStorageFor.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadStorageFor.h**](sead_storage_for_8h.md)

[Go to the documentation of this file](sead_storage_for_8h.md)


```C++
#pragma once

#include <utility>
#include <basis/seadTypes.h>

namespace sead {
struct InitializeTag {};

struct ZeroInitializeTag {};

template <typename T, bool AutoDestruct = false>
class StorageFor {
public:
    StorageFor();
};
}  // namespace sead
```


