#pragma once

#include <Clipping/ClippingActorHolder.h>
#include <Execute/ExecuteDirector.h>

namespace al {

class ClippingDirector : public IUseExecutor {
    int _4;
    ClippingActorHolder* mClippingActorHolder;
    void* _C;
    void* _10;

public:
    ClippingDirector(int);

    virtual void execute();

    void endInit();

    ClippingActorHolder* getClippingActorHolder() { return mClippingActorHolder; }
};

}  // namespace al
