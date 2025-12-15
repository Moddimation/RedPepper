

# File RailDotEnd.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**RailDotEnd.h**](_rail_dot_end_8h.md)

[Go to the documentation of this file](_rail_dot_end_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class RailDotEnd : public al::MapObjActor
{
public:
        void exeWait();

public:
        virtual void init( const al::ActorInitInfo& info );

public:
        RailDotEnd( const sead::SafeString& name );
};
```


