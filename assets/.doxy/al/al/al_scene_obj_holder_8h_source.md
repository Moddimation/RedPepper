

# File alSceneObjHolder.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Scene**](dir_1fcd59825b290dcdc71fa0d6dd430206.md) **>** [**alSceneObjHolder.h**](al_scene_obj_holder_8h.md)

[Go to the documentation of this file](al_scene_obj_holder_8h.md)


```C++
#pragma once

namespace al
{
class ActorInitInfo;
class ISceneObj;

class SceneObjHolder
{
private:
        typedef ISceneObj* ( *CreateFunc )( int id );

        CreateFunc  mCreateFunc;
        ISceneObj** mObjs;
        int         mSize;

public:
        ISceneObj* create( int id );
        ISceneObj* getObj( int id ) const;
        bool       isExist( int id ) const;
        void       setObj( ISceneObj* obj, int id );

        void initAfterPlacementSceneObj( const ActorInitInfo& info );

public:
        SceneObjHolder( CreateFunc func, int size );
};

SceneObjHolder* getSceneObjHolder();
ISceneObj*      createSceneObj( int id );
ISceneObj*      getSceneObj( int id );
bool            isExistSceneObj( int id );
void            setSceneObj( ISceneObj* obj, int id );

} // namespace al
```


