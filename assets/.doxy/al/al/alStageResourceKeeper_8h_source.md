

# File alStageResourceKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Stage**](dir_c5a1413f15ee14dcd95f457cd353067b.md) **>** [**alStageResourceKeeper.h**](alStageResourceKeeper_8h.md)

[Go to the documentation of this file](alStageResourceKeeper_8h.md)


```C++
#pragma once

#include <heap/seadHeap.h>

namespace al
{
class Resource;

class StageResourceKeeper
{
private:
        al::Resource** mResources;

public:
        void initAndLoadResource( const char* stageName, int scenario, sead::Heap* heap );

        al::Resource* getResourceDesign() const;
        al::Resource* getResourceMap() const;
        al::Resource* getResourceSound() const;

public:
        StageResourceKeeper();
};

} // namespace al
```


