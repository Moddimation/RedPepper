

# File alHostStateBase.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Nerve**](dir_ce5a5d5b959d6ee5ba2a9f5882112a88.md) **>** [**alHostStateBase.h**](al_host_state_base_8h.md)

[Go to the documentation of this file](al_host_state_base_8h.md)


```C++
#pragma once

#include <Nerve/alNerveStateBase.h>

namespace al
{

template <typename T>
class HostStateBase : public NerveStateBase
{
protected:
        T* const mHost;

public:
        HostStateBase( T* host, const char* name ) : NerveStateBase( name ), mHost( host )
        {
        }
};

} // namespace al
```


