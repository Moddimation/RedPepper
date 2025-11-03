#pragma once

#include <Layout/LayoutActor.h>

class WindowConfirmSingle : public al::LayoutActor
{
private:
        void* _30;

public:
        virtual void appear();

public:
        WindowConfirmSingle( const char* name, const al::LayoutInitInfo& info );
};
