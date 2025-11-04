#pragma once

#include <Nerve/NerveStateBase.h>

namespace al
{
class LiveActor;

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
