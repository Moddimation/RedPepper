#include "MapObj/CoinRotater.h"

#include <Scene/SceneObjHolder.h>

#include "Scene/SceneObjFactory.h"

NON_MATCHING // need to find out what all the space at 0x68 is used for
CoinRotater::CoinRotater()
    : LiveActor( "コイン回転管理" )
{
}

const char* CoinRotater::getSceneObjName() const
{
        return "コインローテータ";
}

extern "C" void FUN_00277de0( al::LiveActor*, const al::ActorInitInfo& );

void CoinRotater::initAfterPlacementSceneObj( const al::ActorInitInfo& info )
{
        FUN_00277de0( this, info );
        makeActorAppeared();
}

namespace rp
{

void createCoinRotater()
{
        al::createSceneObj( SceneObjType_CoinRotater );
}

float getCoinRotateY()
{
        CoinRotater* rotater = static_cast<CoinRotater*>( al::getSceneObj( SceneObjType_CoinRotater ) );
        return rotater->getRotateY();
}

} // namespace rp
