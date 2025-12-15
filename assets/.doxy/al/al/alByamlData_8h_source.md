

# File alByamlData.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Yaml**](dir_fa1a77aaae8c446d3aad0478295e7cd6.md) **>** [**alByamlData.h**](alByamlData_8h.md)

[Go to the documentation of this file](alByamlData_8h.md)


```C++
#pragma once

namespace al
{

enum ByamlDataType
{
        ByamlDataType_Invalid     = 0,
        ByamlDataType_String      = 0xA0,
        ByamlDataType_Binary      = 0xA1,
        ByamlDataType_Array       = 0xC0,
        ByamlDataType_Hash        = 0xC1,
        ByamlDataType_StringTable = 0xC2,
        ByamlDataType_Bool        = 0xD0,
        ByamlDataType_Int         = 0xD1,
        ByamlDataType_Float       = 0xD2,
        ByamlDataType_Null        = 0xFF
};

class ByamlData
{
private:
        union Value
        {
                int   vInt;
                float vFloat;
        } mValue;

        ByamlDataType mType;

public:
        ByamlDataType getType() const
        {
                return mType;
        }

        int getIntValue() const
        {
                return mValue.vInt;
        }

        float getFloatValue() const
        {
                return mValue.vFloat;
        }
};

} // namespace al
```


