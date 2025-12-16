

# File alLayoutKit.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Layout**](dir_b78bbbc2187fc6e0db904113ffbfbf98.md) **>** [**alLayoutKit.h**](al_layout_kit_8h.md)

[Go to the documentation of this file](al_layout_kit_8h.md)


```C++
#pragma once

namespace al
{
class ExecuteDirector;
class FontHolder;

class LayoutKit
{
private:
        void*            _0;
        FontHolder*      mFontHolder;
        ExecuteDirector* mExecuteDirector;
        void*            _C;
        void*            _10;
        void*            _14;

public:
        void createExecuteDirector( int p );
        void createEffectSystem();
        void update();

public:
        LayoutKit( FontHolder* fontHolder );
};

} // namespace al
```


