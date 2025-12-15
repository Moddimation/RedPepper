

# File CoinRotater.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**CoinRotater.h**](_coin_rotater_8h.md)

[Go to the documentation of this file](_coin_rotater_8h.md)


```C++
#pragma once

#include <LiveActor/alLiveActor.h>
#include <Scene/alISceneObj.h>

class CoinRotater : public al::LiveActor, public al::ISceneObj
{
private:
        float mRotateY;
        u8    _68[ 0x64 ];

public:
        float getRotateY()
        {
                return mRotateY;
        }

public:
        virtual const char* getSceneObjName() const;
        virtual void        initAfterPlacementSceneObj( const al::ActorInitInfo& info );

        virtual void movement();

public:
        CoinRotater();
};

namespace rp
{

void  createCoinRotater();
float getCoinRotateY();

} // namespace rp
```


