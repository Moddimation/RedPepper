

# File alSceneFunction.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Scene**](dir_1fcd59825b290dcdc71fa0d6dd430206.md) **>** [**alSceneFunction.h**](al_scene_function_8h.md)

[Go to the documentation of this file](al_scene_function_8h.md)


```C++
#pragma once

#include <Placement/alPlacementInfo.h>
#include <Resource/alResource.h>
#include <Scene/alScene.h>

namespace al
{
class Resource;
class Scene;

void initPlacementMap( Scene* scene, const Resource* stageArchive, const ActorInitInfo& infoTemplate, const char* infoIterName );

bool tryGetPlacementInfo( PlacementInfo* out, const Resource* stageArchive, const char* infoIterName );

} // namespace al
```


