

# File alSystemKit.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**System**](dir_0319031917185fe3b4f59e1fce58c63b.md) **>** [**alSystemKit.cpp**](al_system_kit_8cpp.md)

[Go to the documentation of this file](al_system_kit_8cpp.md)


```C++
#include <File/alFileLoader.h>
#include <Save/alSaveDataDirector.h>
#include <System/Application.h>
#include <System/alSystemKit.h>

namespace al
{

void SystemKit::createFileLoader( int r1 )
{
        mFileLoader = new FileLoader( r1 );
}

void SystemKit::createSaveDataSystem( u32 r1, s32 r2 )
{
        mSaveDataDirector = new SaveDataDirector( r1, r2 );
}

} // namespace al

namespace alProjectInterface
{

al::SystemKit* getSystemKit()
{
        return al::getApplication()->getSystemKit();
}

} // namespace alProjectInterface
```


