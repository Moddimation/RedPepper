

# File alAnimPlayerSimple.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Model**](dir_27545de96667afe6b4a4c19cce4980cd.md) **>** [**alAnimPlayerSimple.h**](al_anim_player_simple_8h.md)

[Go to the documentation of this file](al_anim_player_simple_8h.md)


```C++
#pragma once

namespace al
{
class AnimInfoTable;

class AnimPlayerSimple
{
private:
        void*          _0;
        AnimInfoTable* mAnimInfoTable;
        void*          _8;
        void*          _C;
        void*          _10;
        void*          _14;
        void*          _18;

public:
        bool isAnimExist( const char* animName ) const;
        bool startAnim( const char* animName );
};

} // namespace al
```


