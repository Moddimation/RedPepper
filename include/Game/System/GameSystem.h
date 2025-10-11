#pragma once

#include "Game/System/CourseList.h"
#include "al/Layout/LayoutKit.h"
#include "al/Message/MessageSystem.h"
#include "al/Nerve/NerveExecutor.h"
#include "al/Sequence/Sequence.h"

class GameSystem : public al::NerveExecutor {
    al::Sequence* mCurrentSequence;
    void* _C;
    void* _10;
    al::LayoutKit* mLayoutKit;
    void* _18;
    al::MessageSystem* mMessageSystem;
    void* _20;
    void* _24;
    CourseList* mCourseList;
    void* _2C;
    void* _30;
    void* _34;

public:
    GameSystem();

    virtual void init() {};
    virtual void movement() {};
    virtual void v6() {};
    virtual void v7() {};
    virtual void v8() {};

    CourseList* getCourseList() const { return mCourseList; }
};
