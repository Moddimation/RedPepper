

# File alAreaObj.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**AreaObj**](dir_63f86be40c2781ee5be7b71e09922881.md) **>** [**alAreaObj.h**](alAreaObj_8h.md)

[Go to the documentation of this file](alAreaObj_8h.md)


```C++
#pragma once

#include <Stage/alStageSwitchKeeper.h>
#include <math/seadMatrix.h>
#include <math/seadVector.h>

namespace al
{
class AreaInitInfo;
class AreaShape;
class StageSwitchKeeper;

class AreaObj : public IUseStageSwitch
{
private:
        const char*        mName;
        AreaShape*         mAreaShape;
        StageSwitchKeeper* mStageSwitchKeeper;
        sead::Matrix34f    _10;
        void*              _40;
        int                _44;
        bool               _48;

public:
        virtual StageSwitchKeeper* getStageSwitchKeeper() const;
        virtual void               initStageSwitchKeeper();
        virtual void               init( const AreaInitInfo& info );
        virtual bool               isInVolume( const sead::Vector3f& trans ) const;

public:
        AreaObj( const char* name );
};

} // namespace al
```


