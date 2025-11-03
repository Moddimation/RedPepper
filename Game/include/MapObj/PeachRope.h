#pragma once

#include <MapObj/MapObjActor.h>

class PeachRope : public al::MapObjActor
{
public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void kill();

public:
        PeachRope( const sead::SafeString& name );
};
