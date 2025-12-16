

# File alSequence.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Sequence**](dir_87e22e3c667fd0caa7a1ca4d857b0cbc.md) **>** [**alSequence.h**](al_sequence_8h.md)

[Go to the documentation of this file](al_sequence_8h.md)


```C++
#pragma once

#include <Nerve/alNerveExecutor.h>
#include <prim/seadSafeString.h>

namespace al
{
class Scene;

class Sequence : public NerveExecutor
{
private:
        sead::FixedSafeString<64> mName;
        Scene*                    mCurrentScene;
        u8                        unk[ 0xf0 ];

public:
        virtual void init( /*SequenceInitInfo& ?*/ );
        virtual void update();
        virtual void unk1();
        virtual void unk2();
        virtual void unk3();
        virtual bool isDisposable() const;
        virtual bool unk4();
        virtual int  unk5();
        virtual int  unk6();

public:
        Sequence( const char* name );
};

} // namespace al
```


