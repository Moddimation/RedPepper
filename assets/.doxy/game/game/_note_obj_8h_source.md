

# File NoteObj.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**NoteObj.h**](_note_obj_8h.md)

[Go to the documentation of this file](_note_obj_8h.md)


```C++
#pragma once

#include "MapObj/NoteObjGenerator.h"

class NoteObj : public al::MapObjActor
{
private:
        sead::Quatf       mStartQuat;
        bool              _70;
        bool              _71;
        int               _74;
        sead::Vector3f    _78;
        NoteObjGenerator* mGenerator;

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void initAfterPlacement();
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );
        virtual void control();

public:
        NoteObj( const char* name );
        NoteObj( NoteObjGenerator* generator );
};
```


