

# File alSceneObjHolder.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Scene**](dir_bb660b31e377772c5b006ae07071e5bd.md) **>** [**alSceneObjHolder.cpp**](al_scene_obj_holder_8cpp.md)

[Go to the documentation of this file](al_scene_obj_holder_8cpp.md)


```C++
#include <LiveActor/alActorInitInfo.h>
#include <Scene/alISceneObj.h>
#include <Scene/alSceneObjHolder.h>
#include <System/Application.h>

namespace al
{

#pragma no_inline // probably belongs in another file

SceneObjHolder* getSceneObjHolder()
{
        return al::getApplication()->getSceneObjHolder();
}

ISceneObj* SceneObjHolder::getObj( int id ) const
{
        return mObjs[ id ];
}

bool SceneObjHolder::isExist( int id ) const
{
        return mObjs[ id ] != nullptr;
}

void SceneObjHolder::setObj( ISceneObj* obj, int id )
{
        mObjs[ id ] = obj;
}

ISceneObj* SceneObjHolder::create( int id )
{
        if ( mObjs[ id ] == nullptr )
        {
                ISceneObj* newObj = mCreateFunc( id );
                mObjs[ id ]       = newObj;
                newObj->initSceneObj();
        }
        return mObjs[ id ];
}

void SceneObjHolder::initAfterPlacementSceneObj( const ActorInitInfo& info )
{
        for ( int i = 0; i < mSize; i++ )
                if ( mObjs[ i ] )
                        mObjs[ i ]->initAfterPlacementSceneObj( info );
}

ISceneObj* createSceneObj( int id )
{
        return getSceneObjHolder()->create( id );
}

ISceneObj* getSceneObj( int id )
{
        return getSceneObjHolder()->getObj( id );
}

bool isExistSceneObj( int id )
{
        return getSceneObjHolder()->isExist( id );
}

void setSceneObj( ISceneObj* obj, int id )
{
        return getSceneObjHolder()->setObj( obj, id );
}

} // namespace al
```


