

# File AppearStep.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**AppearStep.h**](_appear_step_8h.md)

[Go to the documentation of this file](_appear_step_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class AppearStep : public al::MapObjActor
{
public:
        void exeAppear();
        void exeWait();
        void exeDisappear();
        void exeEnd();

public:
        virtual void init( const al::ActorInitInfo& info );

private:
        void startAppear();
        void startDisappear();

public:
        AppearStep( const sead::SafeString& name );
};
```


