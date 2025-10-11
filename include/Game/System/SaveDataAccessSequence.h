#pragma once

#include "al/LiveActor/ActorInitInfo.h"
#include "al/Nerve/NerveExecutor.h"

class GameDataHolder;
class SaveDataAccessSequence : public al::NerveExecutor {
    // ...
public:
    SaveDataAccessSequence(GameDataHolder* holder, const al::LayoutInitInfo& info);
};
