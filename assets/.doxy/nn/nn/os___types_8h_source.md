

# File os\_Types.h

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**include**](dir_b105e27ad861a359b82da8d20daf787e.md) **>** [**nn**](dir_98edea970dce97b73b2af390faecf17b.md) **>** [**os**](dir_9291becf67c3b0a132c39dad0aa59ab9.md) **>** [**os\_Types.h**](os___types_8h.md)

[Go to the documentation of this file](os___types_8h.md)


```C++
#pragma once

namespace nn {
namespace os {

    enum ArbitrationType {
        ArbitrationType_SIGNAL = 0, 
        ArbitrationType_WAIT_IF_LESS_THAN = 1, 
        ArbitrationType_DECREMENT_AND_WAIT_IF_LESS_THAN = 2, 
        ArbitrationType_WAIT_IF_LESS_THAN_TIMEOUT = 3, 
        ArbitrationType_DECREMENT_AND_WAIT_IF_LESS_THAN_TIMEOUT = 4, 
    };

    enum ResetType {
        ResetType_ONESHOT = 0, 
        ResetType_STICKY = 1, 
        ResetType_PULSE = 2 
    };

} // namespace os
} // namespace nn
```


