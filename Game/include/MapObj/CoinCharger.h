#pragma once

#include "Layout/GameCountUp.h"
#include <Audio/AudioKeeper.h>
#include <Layout/LayoutInitInfo.h>
#include <Nerve/NerveExecutor.h>

class CoinCharger : public al::NerveExecutor {
    GameCountUp* mGameCountUp;
    void* _C;
    void* _10;
    al::AudioKeeper* mAudioKeeper;

public:
    CoinCharger(const al::LayoutInitInfo& info);
};
