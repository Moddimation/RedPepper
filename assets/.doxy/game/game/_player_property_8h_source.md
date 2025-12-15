

# File PlayerProperty.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerProperty.h**](_player_property_8h.md)

[Go to the documentation of this file](_player_property_8h.md)


```C++
#pragma once

#include <math/seadVector.h>

class PlayerProperty
{
private:
        sead::Vector3f mTrans;
        sead::Vector3f mFront;
        sead::Vector3f mUp;
        u8             _C[ 0x54 ];

public:
        void setFrontVec( const sead::Vector3f& front );
        void setUpVec( const sead::Vector3f& up );
};
```


