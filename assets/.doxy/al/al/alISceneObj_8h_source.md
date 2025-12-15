

# File alISceneObj.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Scene**](dir_1fcd59825b290dcdc71fa0d6dd430206.md) **>** [**alISceneObj.h**](alISceneObj_8h.md)

[Go to the documentation of this file](alISceneObj_8h.md)


```C++
#pragma once

namespace al
{
class ActorInitInfo;

class ISceneObj
{
public:
        virtual const char* getSceneObjName() const = 0;

        virtual void initAfterPlacementSceneObj( const ActorInitInfo& info )
        {
        }

        virtual void initSceneObj()
        {
        }
};

} // namespace al
```


