#pragma once

#include "System/CourseList.h"
#include "System/GameDataFile.h"
#include "System/SaveDataAccessSequence.h"
#include "System/SaveDataFile.h"

class GameDataHolder {
    GameDataFile* mGameFile;
    SaveDataFile* mSaveFiles;
    int mCurSaveFileIdx;
    SaveDataAccessSequence* mSaveAccess;

public:
    GameDataHolder(CourseList* courseList);
    void createSaveDataAccessSequence(const al::LayoutInitInfo& info);
};
