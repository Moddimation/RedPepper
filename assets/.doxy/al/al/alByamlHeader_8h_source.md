

# File alByamlHeader.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Yaml**](dir_fa1a77aaae8c446d3aad0478295e7cd6.md) **>** [**alByamlHeader.h**](alByamlHeader_8h.md)

[Go to the documentation of this file](alByamlHeader_8h.md)


```C++
#pragma once

namespace al
{

#pragma diag_suppress 368 // struct only for reading data

class ByamlHeader
{
private:
        const u16 mTag;
        const u16 mVersion;
        const int mHashKeyOffset;
        const int mStringTableOffset;
        const int mDataOffset;

public:
        u16 getTag() const
        {
                return mTag;
        }

        u16 getVersion() const
        {
                return mVersion;
        }

        u32 getHashKeyTableOffset() const
        {
                return mHashKeyOffset;
        }

        u32 getStringTableOffset() const
        {
                return mStringTableOffset;
        };

        u32 getDataOffset() const
        {
                return mDataOffset;
        };
};

} // namespace al

namespace alByamlLocalUtil
{

bool verifiByaml( const u8* data );

} // namespace alByamlLocalUtil
```


