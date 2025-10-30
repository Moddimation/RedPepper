#pragma once

#include <sead/heap/seadHeap.h>
#include "al/Functor/FunctorBase.h"

namespace al {

void createAndStartInitializeThread(sead::Heap* heap, int stackSize, const FunctorBase& func);

}  // namespace al
