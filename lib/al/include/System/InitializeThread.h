#pragma once

#include <heap/seadHeap.h>
#include <Functor/FunctorBase.h>

namespace al {

void createAndStartInitializeThread(sead::Heap* heap, int stackSize, const FunctorBase& func);

}  // namespace al
