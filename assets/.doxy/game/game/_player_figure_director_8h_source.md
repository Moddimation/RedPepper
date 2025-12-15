

# File PlayerFigureDirector.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerFigureDirector.h**](_player_figure_director_8h.md)

[Go to the documentation of this file](_player_figure_director_8h.md)


```C++
#pragma once

#include "Player/PlayerAudio.h"

enum EPlayerFigure
{
        EPlayerFigure_Normal,
        EPlayerFigure_Mini,
        EPlayerFigure_Fire,
        EPlayerFigure_RaccoonDog,
        EPlayerFigure_Boomerang,
        EPlayerFigure_RaccoonDogSpecial,
        EPlayerFigure_RaccoonDogWhite
};

// has table of which Figure to switch to when damagaed
class PlayerFigureLoss
{
public:
        virtual void update( EPlayerFigure*, const EPlayerFigure& );
};

class PlayerFigureTransformer
{
};

class PlayerFigureDirector
{
private:
        EPlayerFigure    mLastFigure;
        EPlayerFigure    mFigure;
        void*            _8;
        void*            _C;
        bool             mHasFigureChanged;
        bool             _11;
        IUsePlayerAudio* mAudioUser;

public:
        void change( const EPlayerFigure& );
        void lose();
        void set( const EPlayerFigure& );

        EPlayerFigure getFigure() const
        {
                return mFigure;
        }
};
```


