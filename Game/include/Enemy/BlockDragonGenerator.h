#pragma once

#include <MapObj/MapObjActor.h>

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
