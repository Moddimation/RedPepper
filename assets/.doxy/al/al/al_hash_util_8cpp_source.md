

# File alHashUtil.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Math**](dir_57fe581cdd12098952512d9f3630291a.md) **>** [**alHashUtil.cpp**](al_hash_util_8cpp.md)

[Go to the documentation of this file](al_hash_util_8cpp.md)


```C++
#include <Math/alHashUtil.h>

namespace al
{

u32 calcHashCode( const char* str )
{
        u32  result  = 0;
        char curChar = *str;

        while ( ( curChar = *str ) )
        {
                result = result * 31 + curChar;
                str++;
        }

        return result;
}

} // namespace al
```


