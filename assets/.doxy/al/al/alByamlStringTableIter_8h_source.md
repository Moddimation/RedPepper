

# File alByamlStringTableIter.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Yaml**](dir_fa1a77aaae8c446d3aad0478295e7cd6.md) **>** [**alByamlStringTableIter.h**](alByamlStringTableIter_8h.md)

[Go to the documentation of this file](alByamlStringTableIter_8h.md)


```C++
#pragma once

#include <Yaml/alByamlData.h>

namespace al
{

class ByamlStringTableIter
{
private:
        struct Header
        {
                const ByamlDataType type : 8;
                const u32           stringAmount : 24;
        };

        union
        {
                const u8*     mData;
                uintptr_t     mDataPtr;
                const Header* mHeader;
        };

public:
        ByamlStringTableIter( const u8* data ) : mData( data )
        {
        }

        const u32* getAddressTable() const
        {
                return reinterpret_cast<u32*>( mDataPtr + sizeof( mDataPtr ) );
        }

        int findStringIndex( const char* str ) const;
};

} // namespace al
```


