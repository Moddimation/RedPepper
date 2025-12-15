

# File hid\_HidBase.h

[**File List**](files.md) **>** [**CTR**](dir_fca7fa14950d22fe1751d6c08a725091.md) **>** [**hid\_HidBase.h**](hid__HidBase_8h.md)

[Go to the documentation of this file](hid__HidBase_8h.md)


```C++
#pragma once
#include "nn/os/os_EventBase.h"

namespace nn {
namespace hid {
namespace CTR {

    class HidBase : nn::os::EventBase {
        void *m_pResource;
    };

} // namespace CTR
} // namespace hid
} // namespace nn
```


