

# File alResource.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Resource**](dir_3098dd6d939962fae2ec654039250f1a.md) **>** [**alResource.h**](al_resource_8h.md)

[Go to the documentation of this file](al_resource_8h.md)


```C++
#pragma once

#include <prim/seadSafeString.h>

namespace al
{

class Resource
{
public:
        const u8* getByml( const sead::SafeString& name ) const;
        u8*       getPa( const sead::SafeString& name ) const;
};

Resource* findOrCreateResource( const sead::SafeString& archive );

} // namespace al
```


