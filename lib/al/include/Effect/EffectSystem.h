#pragma once

#include <heap/seadHeap.h>

namespace al {

class EffectSystem {
    sead::Heap* _0;

public:
    EffectSystem();

    void init();
    void startScene();
};

}  // namespace al
