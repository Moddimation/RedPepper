

# File alEffectKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Effect**](dir_9fe20ef74c2d37afbe962f7b1baf4566.md) **>** [**alEffectKeeper.h**](alEffectKeeper_8h.md)

[Go to the documentation of this file](alEffectKeeper_8h.md)


```C++
#pragma once

#include <math/seadVector.h>

namespace al
{

class EffectKeeper
{
public:
        void update();
        void deleteAndClearEffectAll();
};

class IUseEffectKeeper
{
public:
        virtual EffectKeeper* getEffectKeeper() const = 0;
};

void emitEffect( IUseEffectKeeper* p, const char* name, const sead::Vector3f* at = nullptr );
bool tryEmitEffect( IUseEffectKeeper* p, const char* name );

} // namespace al
```


