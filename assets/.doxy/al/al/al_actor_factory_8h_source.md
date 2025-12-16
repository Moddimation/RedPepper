

# File alActorFactory.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Factory**](dir_5233f6e3fd4ec22e1b239c0654b74c26.md) **>** [**alActorFactory.h**](al_actor_factory_8h.md)

[Go to the documentation of this file](al_actor_factory_8h.md)


```C++
#pragma once

#include <Factory/alFactory.h>
#include <LiveActor/alLiveActor.h>

namespace al
{
class Resource;
class ByamlIter;

typedef CreateFuncPtr<LiveActor>::Type    CreateActorFuncPtr;
typedef NameToCreator<CreateActorFuncPtr> NameToActorCreator;

class ActorFactory
{
private:
        Resource*  mArchive;
        ByamlIter* mConvertNameData;

public:
        const char*        convertName( const char* objectName ) const;
        CreateActorFuncPtr getCreator( const char* objectName ) const;

public:
        ActorFactory();
};

} // namespace al
```


