#pragma once

namespace sead {
class Heap;
}

namespace al
{
class FunctorBase;

void createAndStartInitializeThread( sead::Heap* heap, int stackSize, const FunctorBase& func );

} // namespace al
