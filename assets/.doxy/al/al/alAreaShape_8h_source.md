

# File alAreaShape.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**AreaObj**](dir_63f86be40c2781ee5be7b71e09922881.md) **>** [**alAreaShape.h**](alAreaShape_8h.md)

[Go to the documentation of this file](alAreaShape_8h.md)


```C++
#pragma once

#include <math/seadMatrix.h>
#include <math/seadVector.h>

namespace al
{

class AreaShape
{
private:
        const sead::Matrix34f* mBaseMtxPtr;
        sead::Vector3f         mScale;

public:
        bool calcLocalPos( sead::Vector3f* out, const sead::Vector3f& trans ) const;

        void setBaseMtxPtr( const sead::Matrix34f* baseMtxPtr )
        {
                mBaseMtxPtr = baseMtxPtr;
        }

        void setScale( const sead::Vector3f& scale );

public:
        virtual bool isInVolume( const sead::Vector3f& trans ) const = 0;
        virtual void v1()                                            = 0;
        virtual void v2()                                            = 0;

public:
        AreaShape();
};

} // namespace al
```


