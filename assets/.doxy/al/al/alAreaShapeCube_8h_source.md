

# File alAreaShapeCube.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**AreaObj**](dir_63f86be40c2781ee5be7b71e09922881.md) **>** [**alAreaShapeCube.h**](alAreaShapeCube_8h.md)

[Go to the documentation of this file](alAreaShapeCube_8h.md)


```C++
#pragma once

#include <AreaObj/alAreaShape.h>

namespace al
{

class AreaShapeCube : public AreaShape
{
private:
        bool mIsCubeBase;

public:
        virtual bool isInVolume( const sead::Vector3f& trans ) const;
        // virtual void v2();
public:
        AreaShapeCube( bool isCubeBase );
};

} // namespace al
```


