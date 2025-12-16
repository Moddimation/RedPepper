

# File alAsyncFunctorThread.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**System**](dir_4449175cd25a8cf3d071dc7b0d3fd582.md) **>** [**alAsyncFunctorThread.h**](al_async_functor_thread_8h.md)

[Go to the documentation of this file](al_async_functor_thread_8h.md)


```C++
#pragma once

#include <prim/seadSafeString.h>

namespace sead
{
class DelegateThread;
} // namespace sead

namespace al
{
class FunctorBase;

class AsyncFunctorThread
{
private:
        sead::DelegateThread* mSeadThread;
        const FunctorBase*    mFunctor;
        bool                  mIsDone;

public:
        void start();

        bool isDone() const
        {
                return mIsDone;
        }

public:
        virtual ~AsyncFunctorThread();

public:
        AsyncFunctorThread( const sead::SafeString& name, const FunctorBase& functor, int );
};

} // namespace al
```


