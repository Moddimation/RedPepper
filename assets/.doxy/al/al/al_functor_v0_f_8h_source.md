

# File alFunctorV0F.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Functor**](dir_81b531fd1852ed4a74e06f5f9a5996f0.md) **>** [**alFunctorV0F.h**](al_functor_v0_f_8h.md)

[Go to the documentation of this file](al_functor_v0_f_8h.md)


```C++
#pragma once

#include <Functor/alFunctorBase.h>

namespace al
{

class FunctorV0F : public FunctorBase
{
private:
        typedef void ( *FuncType )();
        FuncType mFuncPtr;

public:
        virtual void operator()() const
        {
                mFuncPtr();
        }

        virtual FunctorBase* clone() const
        {
                return new FunctorV0F( mFuncPtr );
        }

public:
        FunctorV0F( FuncType func ) : mFuncPtr( func )
        {
        }
};

} // namespace al
```


