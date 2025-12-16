

# File alLayoutInitInfo.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Layout**](dir_b78bbbc2187fc6e0db904113ffbfbf98.md) **>** [**alLayoutInitInfo.h**](al_layout_init_info_8h.md)

[Go to the documentation of this file](al_layout_init_info_8h.md)


```C++
#pragma once

namespace al
{

class LiveActorKit;
class ExecuteDirector;

class LayoutInitInfo
{
public:
        ExecuteDirector* mExecuteDirector;
        void*            unk[ 2 ];

        LayoutInitInfo();
};

void initLayoutInitInfo( LayoutInitInfo* info, LiveActorKit* ); // why LiveActorKit ?

} // namespace al
```


