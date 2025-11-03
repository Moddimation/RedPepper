#pragma once

#include <Audio/AudioKeeper.h>
#include <Layout/LayoutInitInfo.h>
#include <Nerve/NerveExecutor.h>

#include "Layout/GameCountUp.h"

class CoinCharger : public al::NerveExecutor
{
private:
        GameCountUp*     mGameCountUp;
        void*            _C;
        void*            _10;
        al::AudioKeeper* mAudioKeeper;

public:
        CoinCharger( const al::LayoutInitInfo& info );
};
