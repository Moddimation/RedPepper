#pragma once

#include <LiveActor/LiveActor.h>
#include <prim/seadSafeString.h>

namespace al
{

class MapObjActor : public LiveActor
{
public:
        MapObjActor( const sead::SafeString& name );
};

} // namespace al
