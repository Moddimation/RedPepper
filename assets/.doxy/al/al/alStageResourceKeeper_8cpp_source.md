

# File alStageResourceKeeper.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Stage**](dir_83103bebc67a29d7d8ce851aa6a5914e.md) **>** [**alStageResourceKeeper.cpp**](alStageResourceKeeper_8cpp.md)

[Go to the documentation of this file](alStageResourceKeeper_8cpp.md)


```C++
#include <Stage/alStageResourceKeeper.h>

namespace al
{

StageResourceKeeper::StageResourceKeeper() : mResources( nullptr )
{
}

al::Resource* StageResourceKeeper::getResourceDesign() const
{
        return mResources[ 1 ];
}

al::Resource* StageResourceKeeper::getResourceMap() const
{
        return mResources[ 0 ];
}

al::Resource* StageResourceKeeper::getResourceSound() const
{
        return mResources[ 2 ];
}

} // namespace al
```


