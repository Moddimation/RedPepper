

# File alSaveDataDirector.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Save**](dir_9c0b9212029f9de285fe876698dcd71c.md) **>** [**alSaveDataDirector.h**](al_save_data_director_8h.md)

[Go to the documentation of this file](al_save_data_director_8h.md)


```C++
#pragma once

namespace al
{
class SaveDataSequenceBase;
class SaveDataSequenceInitDir;
class AsyncFunctorThread;

class SaveDataDirector
{
private:
        void*                     _0;
        SaveDataSequenceBase*     _4;
        SaveDataSequenceBase*     _8;
        SaveDataSequenceInitDir*  mInitDirSequence;
        u8                        _10[ 0x58 ];
        class AsyncFunctorThread* mSaveDataThread;
        void*                     _6C;

public:
        SaveDataDirector( u32, s32 );
};

} // namespace al
```


