

# File alEffectSystem.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Effect**](dir_9fe20ef74c2d37afbe962f7b1baf4566.md) **>** [**alEffectSystem.h**](alEffectSystem_8h.md)

[Go to the documentation of this file](alEffectSystem_8h.md)


```C++
#pragma once

#include <heap/seadHeap.h>

namespace al
{

class EffectSystem
{
private:
        sead::Heap* _0;

public:
        void init();
        void startScene();

public:
        EffectSystem();
};

} // namespace al
```


