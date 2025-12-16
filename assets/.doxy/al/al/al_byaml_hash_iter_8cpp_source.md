

# File alByamlHashIter.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Yaml**](dir_a36cb0e291adf6b691d9e0404ede2903.md) **>** [**alByamlHashIter.cpp**](al_byaml_hash_iter_8cpp.md)

[Go to the documentation of this file](al_byaml_hash_iter_8cpp.md)


```C++
#include <Yaml/alByamlHashIter.h>

namespace al
{

const ByamlHashPair* ByamlHashIter::findPair( int keyIdx ) const
{
        const ByamlHashPair* table = getPairTable();
        int                  low   = 0;

        if ( mData )
        {
                int high = getSize();
                if ( high > 0 )
                {
                        const ByamlHashPair* pair;
                        int                  idx;
                        while ( true )
                        {
                                idx           = ( low + high ) / 2;
                                pair          = &table[ idx ];
                                const int res = keyIdx - ( pair->getKeyIndex() );
                                if ( res < 0 )
                                        high = idx;
                                if ( res > 0 )
                                        low = idx + 1;
                                if ( res == 0 )
                                        return &table[ idx ];
                                if ( high <= low )
                                        break;
                        }
                }
        }

        return nullptr;
}

} // namespace al
```


