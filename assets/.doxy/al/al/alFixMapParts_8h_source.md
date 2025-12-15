

# File alFixMapParts.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**MapObj**](dir_5a48fe64d9a05f0fc2bfb06a871cd856.md) **>** [**alFixMapParts.h**](alFixMapParts_8h.md)

[Go to the documentation of this file](alFixMapParts_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

namespace al
{

class FixMapParts : public MapObjActor
{
public:
        FixMapParts( const sead::SafeString& name );

        virtual void init( const ActorInitInfo& info );
        virtual void appear();
};

} // namespace al
```


