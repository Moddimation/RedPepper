

# File alStringUtil.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Util**](dir_a16da3fbf3ffcc1f76dacc64c1edcc99.md) **>** [**alStringUtil.h**](alStringUtil_8h.md)

[Go to the documentation of this file](alStringUtil_8h.md)


```C++
#pragma once

// Temporary file because I can't figure out what the folder is (al/A____ or al/B____)
// please replace

#include <prim/seadSafeString.h>

namespace al
{

template <s32 L>
class StringTmp : public sead::FixedSafeString<L>
{
public:
        StringTmp( const char* format, ... ) : sead::FixedSafeString<L>()
        {
                va_list args;
                va_start( args, format );
                this->formatV( format, args );
                va_end( args );
        }
};

const char* getBaseName( const char* name );
const char* createStringIfInStack( const char* str );
bool        isEqualString( const char* s1, const char* s2 );
bool        isEqualString( const sead::SafeString& s1, const sead::SafeString& s2 );
bool        isEqualSubString( const char* str, const char* substr );
bool        isInStack( const void* ptr );

} // namespace al
```


