

# File alClippingActorInfoList.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Clipping**](dir_3c3a2accc795922a76b28cad841041ad.md) **>** [**alClippingActorInfoList.h**](al_clipping_actor_info_list_8h.md)

[Go to the documentation of this file](al_clipping_actor_info_list_8h.md)


```C++
#pragma once

#include <container/seadPtrArray.h>

namespace al
{

class ClippingActorInfo;

class ClippingActorInfoList
{
private:
        sead::PtrArray<ClippingActorInfo> mInfos;

public:
        ClippingActorInfoList( int );
};

} // namespace al
```


