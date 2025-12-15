

# File GameSystem.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**System**](dir_c0426a53c0d1b4dc4e9c5ae921c9f2ce.md) **>** [**GameSystem.h**](_game_system_8h.md)

[Go to the documentation of this file](_game_system_8h.md)


```C++
#pragma once

#include <Nerve/alNerveExecutor.h>

namespace al
{
class LayoutKit;
class MessageSystem;
class Sequence;
} // namespace al
class CourseList;

class GameSystem : public al::NerveExecutor
{
        friend class ApplicationFunction;

private:
        al::Sequence*      mCurrentSequence;
        void*              _C;
        void*              _10;
        al::LayoutKit*     mLayoutKit;
        void*              _18;
        al::MessageSystem* mMessageSystem;
        void*              _20;
        void*              _24;
        CourseList*        mCourseList;
        void*              _2C;
        void*              _30;
        void*              _34;

public:
        CourseList* getCourseList() const
        {
                return mCourseList;
        }

public:
        virtual void init() {};
        virtual void movement() {};
        virtual void v6() {};
        virtual void v7() {};
        virtual void v8() {};

public:
        GameSystem();
};
```


