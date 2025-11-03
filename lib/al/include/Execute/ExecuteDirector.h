#pragma once

#include <Execute/ExecuteRequestKeeper.h>
#include <Execute/ExecuteTableHolderDraw.h>
#include <Execute/ExecuteTableHolderUpdate.h>
#include <Functor/FunctorBase.h>

namespace al
{

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
        size_t                    _0;
        ExecuteTableHolderUpdate* mUpdateTable;
        int                       mDrawTableAmount;
        ExecuteTableHolderDraw**  mDrawTables;
        ExecuteRequestKeeper*     mRequestKeeper;
        void*                     _14;
        void*                     _18;

public:
        ExecuteDirector( int );

        void init();
        void createExecutorListTable();
        void registerUser( al::IUseExecutor* p, const char* str );
        void registerFunctor( const al::FunctorBase& base, const char* str );
        void registerFunctorDraw( const al::FunctorBase& base, const char* str );

        friend class LayoutKit;
};

} // namespace al
