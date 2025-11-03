#pragma once

#include <Execute/ExecuteDirector.h>
#include <LiveActor/LiveActor.h>
#include <LiveActor/LiveActorKit.h>

namespace al
{

void registerExecutorUser( IUseExecutor* p, const char* name );
void registerExecutorFunctor( const FunctorBase& base, const char* name );
void registerExecutorFunctorDraw( const FunctorBase& base, const char* name );

} // namespace al

namespace alActorSystemFunction
{

void addToExecutorMovement( al::LiveActor* actor );
void removeFromExecutorDraw( al::LiveActor* actor );

} // namespace alActorSystemFunction
