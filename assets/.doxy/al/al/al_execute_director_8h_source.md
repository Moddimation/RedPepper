

# File alExecuteDirector.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Execute**](dir_7792e00636cd04400185f9ae07410562.md) **>** [**alExecuteDirector.h**](al_execute_director_8h.md)

[Go to the documentation of this file](al_execute_director_8h.md)


```C++
#pragma once

#include <Functor/alFunctorBase.h>

namespace al
{

class ExecuteRequestKeeper;
class ExecuteTableHolderDraw;
class ExecuteTableHolderUpdate;

class IUseExecutor
{
public:
        virtual void execute()
        {
        }

        virtual void draw()
        {
        }
};

class ExecuteDirector
{
        friend class LayoutKit;

private:
        size_t                    _0;
        ExecuteTableHolderUpdate* mUpdateTable;
        int                       mDrawTableAmount;
        ExecuteTableHolderDraw**  mDrawTables;
        ExecuteRequestKeeper*     mRequestKeeper;
        void*                     _14;
        void*                     _18;

public:
        void init();
        void createExecutorListTable();
        void registerUser( al::IUseExecutor* p, const char* str );
        void registerFunctor( const al::FunctorBase& base, const char* str );
        void registerFunctorDraw( const al::FunctorBase& base, const char* str );

public:
        ExecuteDirector( int );
};

} // namespace al
```


