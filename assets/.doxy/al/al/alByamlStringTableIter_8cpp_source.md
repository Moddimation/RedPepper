

# File alByamlStringTableIter.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Yaml**](dir_a36cb0e291adf6b691d9e0404ede2903.md) **>** [**alByamlStringTableIter.cpp**](alByamlStringTableIter_8cpp.md)

[Go to the documentation of this file](alByamlStringTableIter_8cpp.md)


```C++
#include <Yaml/alByamlStringTableIter.h>
#include <cstring>

namespace al
{

int ByamlStringTableIter::findStringIndex( const char* str ) const
{
        int        low = 0, index = 0;
        int        high  = mHeader->stringAmount;
        const u32* table = getAddressTable();

        if ( high <= 0 )
                return -1;

        while ( high > low )
        {
                index   = ( low + high ) / 2;
                int res = std::strcmp( str, (const char*)&mData[ table[ index ] ] );
                if ( res < 0 )
                        high = index;
                else if ( res > 0 )
                        low = index + 1;
                if ( res == 0 )
                        return index;
        }

        return -1;
}

} // namespace al
```


