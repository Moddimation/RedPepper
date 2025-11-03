#pragma once

#include <Functor/FunctorBase.h>
#include <heap/seadHeap.h>

namespace al
{

void createAndStartInitializeThread( sead::Heap* heap, int stackSize, const FunctorBase& func );

} // namespace al
