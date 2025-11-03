#pragma once

#include <MapObj/MapObjActor.h>

class AquariumSwimDebris : public al::MapObjActor
{
public:
        void exeAppear();

public:
        virtual void init( const al::ActorInitInfo& info );

public:
        AquariumSwimDebris( const sead::SafeString& name );
};
