#include "Player/PlayerFunction.h"

#include <Application/Application.h>

#include "Player/PlayerActor.h"

namespace rp
{

#pragma no_inline
NON_MATCHING

// linker shenanigans
PlayerActor* getPlayerActor()
{
        return (PlayerActor*)Application::instance()->mPlayerActor;
}

const sead::Vector3f& getPlayerPos()
{
        return al::getTrans( getPlayerActor() );
}

} // namespace rp
