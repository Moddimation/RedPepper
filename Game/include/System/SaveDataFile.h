#pragma once

#include "System/CourseList.h"

class SaveDataFile {
    u8 _0[0x3e];
    u16 mNumLife;
    u16 mNumCoinCollect;
    u8 _42[0x1a];

public:
    SaveDataFile();

    void initializeData(CourseList* courseList);
};
