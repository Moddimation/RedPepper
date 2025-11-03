#pragma once

#include <Layout/LayoutInitInfo.h>
#include <Layout/WipeSimpleTopBottom.h>

class StageWipeKeeper
{
#ifndef __CC_ARM
public:
#else

private:
#endif
        al::WipeSimpleTopBottom* mWipes[ 7 ];
        void*                    unk;

public:
        bool isAnyWipeCloseEnd() const;

public:
        StageWipeKeeper( const al::LayoutInitInfo& info );
};
