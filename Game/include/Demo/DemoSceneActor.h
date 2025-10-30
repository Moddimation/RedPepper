#pragma once

#include "al/MapObj/MapObjActor.h"

class DemoSomething {
    int _4;
    int _8;
    void* _C;

public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

class DemoSceneActor : public DemoSomething, public al::MapObjActor {
public:
    DemoSceneActor(const sead::SafeString& name);

    void init(const al::ActorInitInfo& info);
};
