#pragma once

#include <prim/seadSafeString.h>
#include <LiveActor/LiveActor.h>

namespace al
{

class MapObjActor : public LiveActor
{
public:
        MapObjActor( const sead::SafeString& name );
};

} // namespace al
