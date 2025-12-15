

# File alCollider.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Collision**](dir_daad28a749e3ab92bb0c1d2c973a5ea4.md) **>** [**alCollider.h**](alCollider_8h.md)

[Go to the documentation of this file](alCollider_8h.md)


```C++
#pragma once

namespace al
{

class Collider
{
private:
        u8    _0[ 0xc0 ];
        float mGroundDistance;

public:
        float getGroundDistance()
        {
                return mGroundDistance;
        }

        void onInvalidate();
};

} // namespace al
```


