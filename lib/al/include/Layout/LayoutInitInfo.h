#pragma once

#include <Execute/ExecuteDirector.h>
#include <LiveActor/LiveActorKit.h>

namespace al
{

class LayoutInitInfo
{
public:
        ExecuteDirector* mExecuteDirector;
        void*            unk[ 2 ];

        LayoutInitInfo();
};

void initLayoutInitInfo( LayoutInitInfo* info, LiveActorKit* ); // why LiveActorKit ?

} // namespace al
