#pragma once

#include <MapObj/MapObjActor.h>

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
