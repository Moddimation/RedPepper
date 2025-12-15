

# File alWipeSimpleTopBottom.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Layout**](dir_b78bbbc2187fc6e0db904113ffbfbf98.md) **>** [**alWipeSimpleTopBottom.h**](alWipeSimpleTopBottom_8h.md)

[Go to the documentation of this file](alWipeSimpleTopBottom_8h.md)


```C++
#pragma once

namespace al
{

class WipeSimple;

class WipeSimpleTopBottom
{
private:
        WipeSimple* mTop;
        WipeSimple* mBottom;

public:
        inline WipeSimple* getTop() const
        {
                return mTop;
        }

        inline WipeSimple* getBottom() const
        {
                return mBottom;
        }

        bool isCloseEnd() const;

public:
        WipeSimpleTopBottom( const char* name, const char* archive, const char*, const LayoutInitInfo& info, const char* subArchive );
};

} // namespace al
```


