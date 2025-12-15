

# File alExecuteTableHolderDraw.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Execute**](dir_7792e00636cd04400185f9ae07410562.md) **>** [**alExecuteTableHolderDraw.h**](alExecuteTableHolderDraw_8h.md)

[Go to the documentation of this file](alExecuteTableHolderDraw_8h.md)


```C++
#pragma once

namespace al
{

class ExecuteOrder;
class FunctorBase;

class IUseExecutor;

class ExecuteTableHolderDraw
{
        friend class ExecuteDirector;

private:
        int   _0;
        int   _4;
        int   _8;
        int   _C;
        int   _10;
        int   _14;
        int   _18;
        int   _1C;
        int   _20;
        int   _24;
        int   _28;
        int   _2C;
        int   _30;
        int   _34;
        int   _38;
        int   _3C;
        int   _40;
        int   _44;
        void* _48;
        void* _4C;

public:
        void init( const char*, const ExecuteOrder* order, int );
        void createExecutorListTable();
        void tryRegisterUser( al::IUseExecutor* p, const char* name );
        void tryRegisterFunctor( const al::FunctorBase& base, const char* name );

public:
        ExecuteTableHolderDraw();
};

} // namespace al
```


