#pragma once

#include "System/CourseList.h"

class GameDataFile {
    u8 _0[0x44];
    bool mIs3DOn;

public:
    GameDataFile(CourseList* courseList);
};
