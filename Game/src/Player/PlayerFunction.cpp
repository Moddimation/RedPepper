#include "Player/PlayerFunction.h"

#include <Application/Application.h>

namespace rp
{

#pragma no_inline
NON_MATCHING

// linker shenanigans
PlayerActor* getPlayerActor()
{
        return Application::instance()->mPlayerActor;
}

const sead::Vector3f& getPlayerPos()
{
        return al::getTrans( getPlayerActor() );
}

} // namespace rp
