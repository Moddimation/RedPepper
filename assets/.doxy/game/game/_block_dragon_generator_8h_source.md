

# File BlockDragonGenerator.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**BlockDragonGenerator.h**](_block_dragon_generator_8h.md)

[Go to the documentation of this file](_block_dragon_generator_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class BlockDragonGenerator : public al::MapObjActor
{
private:
        u8 _60[ 0x60 ];

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void startClipped();
        virtual void endClipped();

public:
        BlockDragonGenerator( const sead::SafeString& name );
};
```


