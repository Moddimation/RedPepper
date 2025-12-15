

# File alSequence.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Sequence**](dir_bdc1f88f4a8d3bfe295a5d35dc3e8b6f.md) **>** [**alSequence.cpp**](alSequence_8cpp.md)

[Go to the documentation of this file](alSequence_8cpp.md)


```C++
#include <Scene/alScene.h>
#include <Sequence/alSequence.h>

namespace al
{

void Sequence::init()
{
}

void Sequence::unk1()
{
        if ( mCurrentScene )
                mCurrentScene->drawMainTop();
}

void Sequence::unk2()
{
        if ( mCurrentScene )
                mCurrentScene->drawSubTop();
}

void Sequence::unk3()
{
        if ( mCurrentScene )
                mCurrentScene->drawMainBottom();
}

bool Sequence::isDisposable() const
{
        return true;
}

bool Sequence::unk4()
{
        return false;
}

int Sequence::unk5()
{
        return unk6() ^ 1;
}

} // namespace al
```


