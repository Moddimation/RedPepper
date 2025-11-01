#pragma once

#include <container/seadPtrArray.h>
#include <LiveActor/LiveActor.h>

namespace al {

class LiveActorGroup {
    const char* const mName;
    sead::PtrArray<LiveActor> mActors;

public:
    LiveActorGroup(const char* name, int bufSize);

    virtual void registerActor(LiveActor* actor);

    void killAll();
    void makeActorDeadAll();

    template <typename T>
    sead::PtrArray<T>& getArray() {
        return reinterpret_cast<sead::PtrArray<T>&>(mActors);
    }
};

}  // namespace al
