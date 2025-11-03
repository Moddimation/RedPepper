#pragma once

#include <MapObj/MapObjActor.h>

class RailDotEnd : public al::MapObjActor
{
public:
        void exeWait();

public:
        virtual void init( const al::ActorInitInfo& info );

public:
        RailDotEnd( const sead::SafeString& name );
};
