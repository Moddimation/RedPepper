#pragma once

#include <Layout/LayoutActor.h>
#include <Layout/LayoutInitInfo.h>

class GameCountUp : public al::LayoutActor
{
private:
        sead::Vector3f _30;
        bool           _3C;

public:
        GameCountUp( const al::LayoutInitInfo& info );
};
