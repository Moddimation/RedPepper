#pragma once

#include "Game/System/CourseList.h"
#include "Game/System/GameDataFile.h"
#include "Game/System/SaveDataAccessSequence.h"
#include "Game/System/SaveDataFile.h"

class GameDataHolder {
    GameDataFile* mGameFile;
    SaveDataFile* mSaveFiles;
    int mCurSaveFileIdx;
    SaveDataAccessSequence* mSaveAccess;

public:
    GameDataHolder(CourseList* courseList);
    void createSaveDataAccessSequence(const al::LayoutInitInfo& info);
};
