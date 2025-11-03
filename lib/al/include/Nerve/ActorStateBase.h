#pragma once

#include <LiveActor/LiveActor.h>
#include <Nerve/NerveStateBase.h>

namespace al
{

class ActorStateBase : public al::NerveStateBase
{
protected:
        LiveActor* const mHost;

public:
        ActorStateBase( const char* name, LiveActor* host ) : NerveStateBase( name ), mHost( host )
        {
        }
};

} // namespace al
