

# File PlayerAudio.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerAudio.h**](_player_audio_8h.md)

[Go to the documentation of this file](_player_audio_8h.md)


```C++
#pragma once

class IUsePlayerAudio
{
public:
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void tryStartSePowerUp( bool isPowerDown );
        virtual void v5();
        virtual void v6();
        virtual void v7();
        virtual void triggerDead();
        virtual void v9();
        virtual void v10();
};

class PlayerAudio : public IUsePlayerAudio
{
public:
        PlayerAudio();
};
```


