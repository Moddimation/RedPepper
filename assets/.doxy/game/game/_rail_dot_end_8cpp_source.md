

# File RailDotEnd.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Npc**](dir_64a0e2f7a0313c69ba4a60b61c5e9cf0.md) **>** [**RailDotEnd.cpp**](_rail_dot_end_8cpp.md)

[Go to the documentation of this file](_rail_dot_end_8cpp.md)


```C++
#include "MapObj/RailDotEnd.h"

#include <LiveActor/alActorInitUtil.h>
#include <LiveActor/alLiveActorFunction.h>
#include <Nerve/alNerve.h>
#include <Nerve/alNerveFunction.h>

namespace NrvRailDotEnd
{

NERVE_DEF( RailDotEnd, Wait );

} // namespace NrvRailDotEnd

RailDotEnd::RailDotEnd( const sead::SafeString& name ) : MapObjActor( name )
{
}

void RailDotEnd::init( const al::ActorInitInfo& info )
{
        al::initActorWithArchiveName( this, info, "RailDotEnd" );
        al::initNerve( this, &NrvRailDotEnd::Wait );
        makeActorAppeared();
}

void RailDotEnd::exeWait()
{
}
```


