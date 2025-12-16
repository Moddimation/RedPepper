

# File BlockRoulette.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**BlockRoulette.h**](_block_roulette_8h.md)

[Go to the documentation of this file](_block_roulette_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class BlockRoulette : public al::MapObjActor
{
private:
        int _60;
        int _64;

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );

public:
        BlockRoulette( const sead::SafeString& name );
};
```


