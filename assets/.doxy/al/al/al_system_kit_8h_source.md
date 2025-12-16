

# File alSystemKit.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**System**](dir_4449175cd25a8cf3d071dc7b0d3fd582.md) **>** [**alSystemKit.h**](al_system_kit_8h.md)

[Go to the documentation of this file](al_system_kit_8h.md)


```C++
#pragma once

#include <heap/seadHeap.h>

namespace al
{
class MemorySystem;
class FileLoader;
class SaveDataDirector;

class SystemKit
{
private:
        MemorySystem*     mMemorySystem;
        FileLoader*       mFileLoader;
        void*             _8;
        SaveDataDirector* mSaveDataDirector;
        void*             _10[ 7 ];

public:
        MemorySystem* getMemorySystem() const
        {
                return mMemorySystem;
        }

        FileLoader* getFileLoader() const
        {
                return mFileLoader;
        }

        SaveDataDirector* getSaveDataDirector() const
        {
                return mSaveDataDirector;
        }

        void createFileLoader( int r1 );
        void createSaveDataSystem( u32 r1, s32 r2 );
};

} // namespace al

namespace alProjectInterface
{

al::SystemKit* getSystemKit();

} // namespace alProjectInterface
```


