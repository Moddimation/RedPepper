

# File PlayerProperty.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Player**](dir_22eda9069a5c1f5b62d1a32d3636cd4c.md) **>** [**PlayerProperty.cpp**](_player_property_8cpp.md)

[Go to the documentation of this file](_player_property_8cpp.md)


```C++
#include "Player/PlayerProperty.h"

#ifdef NON_MATCHING
void PlayerProperty::setFrontVec( const sead::Vector3f& front )
{
        mFront = front;
}
#endif

#ifdef NON_MATCHING
void PlayerProperty::setUpVec( const sead::Vector3f& up )
{
        mUp = up;
}
#endif
```


