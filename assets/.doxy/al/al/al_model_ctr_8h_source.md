

# File alModelCtr.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Model**](dir_27545de96667afe6b4a4c19cce4980cd.md) **>** [**alModelCtr.h**](al_model_ctr_8h.md)

[Go to the documentation of this file](al_model_ctr_8h.md)


```C++
#pragma once

namespace al
{
class AnimPlayerSkl;
class AnimPlayerSimple;
} // namespace al

class alModelCtr
{
private:
        void*                 _0;
        void*                 _4;
        void*                 _8;
        void*                 _C;
        void*                 _10;
        void*                 _14;
        void*                 _18;
        al::AnimPlayerSkl*    mSklAnimPlayer;
        al::AnimPlayerSimple* mMtpAnimPlayer;
        al::AnimPlayerSimple* mMtsAnimPlayer;
        al::AnimPlayerSimple* mMclAnimPlayer;
        al::AnimPlayerSimple* mVisAnimPlayer;

public:
        al::AnimPlayerSkl* getSklAnimPlayer() const
        {
                return mSklAnimPlayer;
        }

        al::AnimPlayerSimple* getMtpAnimPlayer() const
        {
                return mMtpAnimPlayer;
        }

        al::AnimPlayerSimple* getMtsAnimPlayer() const
        {
                return mMtsAnimPlayer;
        }

        al::AnimPlayerSimple* getMclAnimPlayer() const
        {
                return mMclAnimPlayer;
        }

        al::AnimPlayerSimple* getVisAnimPlayer() const
        {
                return mVisAnimPlayer;
        }
};
```


