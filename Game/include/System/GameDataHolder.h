#pragma once

#include "System/CourseList.h"
#include "System/GameDataFile.h"
#include "System/SaveDataAccessSequence.h"
#include "System/SaveDataFile.h"

class GameDataHolder
{
private:
        GameDataFile*           mGameFile;
        SaveDataFile*           mSaveFiles;
        int                     mCurSaveFileIdx;
        SaveDataAccessSequence* mSaveAccess;

public:
        void createSaveDataAccessSequence( const al::LayoutInitInfo& info );

public:
        GameDataHolder( CourseList* courseList );
};
