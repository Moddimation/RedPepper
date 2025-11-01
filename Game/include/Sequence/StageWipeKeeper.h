#pragma once

#include <Layout/LayoutInitInfo.h>
#include <Layout/WipeSimpleTopBottom.h>

class StageWipeKeeper {
#ifndef __CC_ARM
public:
#endif
    al::WipeSimpleTopBottom* mWipes[7];
    void* unk;

public:
    StageWipeKeeper(const al::LayoutInitInfo& info);

    bool isAnyWipeCloseEnd() const;
};
