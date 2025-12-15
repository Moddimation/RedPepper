

# File NoteObjGenerator.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**NoteObjGenerator.h**](_note_obj_generator_8h.md)

[Go to the documentation of this file](_note_obj_generator_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

namespace al
{
class LiveActorGroup;
}

class NoteObjGenerator : public al::MapObjActor
{
private:
        al::LiveActorGroup* mNoteObjGroup;
        void*               _64;
        float               _68;
        float               _6C;
        void*               _70;
        int                 _74;
        bool                _78;
        float               _7C;
        void*               _80;
        bool                _84;

public:
        void exeWait();
        void exeMove();
        void exeDisappear();
        void exeSuccess();

public:
        NoteObjGenerator( const sead::SafeString& name );
};
```


