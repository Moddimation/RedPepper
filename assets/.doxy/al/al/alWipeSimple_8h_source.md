

# File alWipeSimple.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Layout**](dir_b78bbbc2187fc6e0db904113ffbfbf98.md) **>** [**alWipeSimple.h**](alWipeSimple_8h.md)

[Go to the documentation of this file](alWipeSimple_8h.md)


```C++
#pragma once

#include <Layout/alLayoutActor.h>

namespace al
{

class WipeSimple : public al::LayoutActor
{
        int _30;

public:
        void exeClose();
        void exeWait();
        void exeOpen();

        bool isCloseEnd() const;

public:
        virtual void appear();

public:
        WipeSimple( const char* name, const char* archive, const LayoutInitInfo& info, const char* suffix = nullptr );
};

} // namespace al
```


