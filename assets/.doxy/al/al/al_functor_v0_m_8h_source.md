

# File alFunctorV0M.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Functor**](dir_81b531fd1852ed4a74e06f5f9a5996f0.md) **>** [**alFunctorV0M.h**](al_functor_v0_m_8h.md)

[Go to the documentation of this file](al_functor_v0_m_8h.md)


```C++
#pragma once

#include <Functor/alFunctorBase.h>

namespace al
{

template <typename T, typename F>
class FunctorV0M : public FunctorBase
{
private:
        T mParent;
        F mFuncPtr;

public:
        virtual void operator()() const
        {
                ( mParent->*mFuncPtr )();
        }

        virtual FunctorV0M* clone() const
        {
                return new FunctorV0M<T, F>( mParent, mFuncPtr );
        }

public:
        FunctorV0M( T parent, F funcPtr ) : mFuncPtr( funcPtr ), mParent( parent )
        {
        }
};

} // namespace al
```


