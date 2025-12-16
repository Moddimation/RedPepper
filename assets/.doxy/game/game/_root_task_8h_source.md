

# File RootTask.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**System**](dir_c0426a53c0d1b4dc4e9c5ae921c9f2ce.md) **>** [**RootTask.h**](_root_task_8h.md)

[Go to the documentation of this file](_root_task_8h.md)


```C++
#pragma once

class GameSystem;

class RootTask /* : public sead::Task */
{
private:
        u8          super_Task[ 0x1ac ]; // not really in the mood to fix seadDelegate.h
        void*       _1b0;
        GameSystem* mGameSystem;
        void*       _1b4;
        void*       _1b8;
        void*       _1bc;

public:
        GameSystem* getGameSystem() const
        {
                return mGameSystem;
        }
};
```


