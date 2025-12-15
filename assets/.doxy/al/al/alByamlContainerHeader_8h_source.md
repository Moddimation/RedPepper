

# File alByamlContainerHeader.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Yaml**](dir_fa1a77aaae8c446d3aad0478295e7cd6.md) **>** [**alByamlContainerHeader.h**](alByamlContainerHeader_8h.md)

[Go to the documentation of this file](alByamlContainerHeader_8h.md)


```C++
#pragma once

#include <Yaml/alByamlData.h>

namespace al
{

class ByamlContainerHeader
{
private:
        // ByamlDataType mType : 1;
        // u32 mSize : 3;
        union
        {
                u32 mSize;
                u8  mType;
        };

public:
        inline ByamlDataType getType() const
        {
                return (ByamlDataType)mType;
        }

        inline u32 getCount() const
        {
                return mSize >> 8;
        } // get last 3 bytes
};

} // namespace al
```


