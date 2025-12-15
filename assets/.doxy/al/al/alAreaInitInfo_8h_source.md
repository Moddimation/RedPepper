

# File alAreaInitInfo.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**AreaObj**](dir_63f86be40c2781ee5be7b71e09922881.md) **>** [**alAreaInitInfo.h**](alAreaInitInfo_8h.md)

[Go to the documentation of this file](alAreaInitInfo_8h.md)


```C++
#pragma once

#include <Placement/alPlacementInfo.h>

namespace al
{

class AreaInitInfo
{
private:
        PlacementInfo mPlacementInfo;
        // ?
public:
        PlacementInfo& getPlacementInfo()
        {
                return mPlacementInfo;
        }
};

} // namespace al
```


