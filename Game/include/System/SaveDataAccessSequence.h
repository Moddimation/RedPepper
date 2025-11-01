#pragma once

#include <LiveActor/ActorInitInfo.h>
#include <Nerve/NerveExecutor.h>

class GameDataHolder;

class SaveDataAccessSequence : public al::NerveExecutor {
    // ...
public:
    SaveDataAccessSequence(GameDataHolder* holder, const al::LayoutInitInfo& info);
};
