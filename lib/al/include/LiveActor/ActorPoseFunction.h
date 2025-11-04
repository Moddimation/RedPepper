#pragma once

#include <math/seadMatrix.h>
#include <LiveActor/LiveActor.h>
#include <LiveActor/ActorPoseKeeper.h>

class alActorPoseFunction
{
public:
        static void calcBaseMtx( sead::Matrix34f* out, const al::LiveActor* actor )
        {
                actor->mActorPoseKeeper->calcBaseMtx( out );
        }
};
