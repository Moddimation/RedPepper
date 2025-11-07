#pragma once

#include <LiveActor/ActorPoseKeeper.h>
#include <LiveActor/LiveActor.h>
#include <math/seadMatrix.h>

class alActorPoseFunction
{
public:
        static void calcBaseMtx( sead::Matrix34f* out, const al::LiveActor* actor )
        {
                actor->mActorPoseKeeper->calcBaseMtx( out );
        }
};
