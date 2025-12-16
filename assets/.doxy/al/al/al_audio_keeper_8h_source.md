

# File alAudioKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Audio**](dir_1e7b40f474a90fa15dd03a7bdde46378.md) **>** [**alAudioKeeper.h**](al_audio_keeper_8h.md)

[Go to the documentation of this file](al_audio_keeper_8h.md)


```C++
#pragma once

namespace al
{

class AudioKeeper
{
public:
        void update();
};

class IUseAudioKeeper
{
public:
        virtual void v1();
        virtual void v2();

        virtual AudioKeeper* getAudioKeeper() const = 0;
};

} // namespace al
```


