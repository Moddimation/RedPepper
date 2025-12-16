

# File LMS\_Message.h

[**File List**](files.md) **>** [**addins**](dir_bd2ac9a3d2735b7139b8654d97389ba0.md) **>** [**libms**](dir_1dee988f62a020defef87bef9fc0dca6.md) **>** [**include**](dir_8e5587206eb2e57f66e587525412fdb5.md) **>** [**LMS**](dir_2f5cb6ddc5adc0b9a4d0247b3147eb99.md) **>** [**LMS\_Message.h**](_l_m_s___message_8h.md)

[Go to the documentation of this file](_l_m_s___message_8h.md)


```C++
#pragma once

#include "LMS/LMS_Impl.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LMS_MessageBinary {
    LMS_Binary common;
    s32 labelsIndex;
    s32 textIndex;
    s32 attributesIndex;
    s32 styleIndex;
} LMS_MessageBinary;

LMS_MessageBinary* LMS_InitMessage(const void* data);
void LMS_CloseMessage(LMS_MessageBinary* binary);

int LMS_GetTextNum(LMS_MessageBinary* binary);
wchar_t* LMS_GetText(LMS_MessageBinary* binary, int index);
int LMS_GetTextIndexByLabel(LMS_MessageBinary* binary, const char* label);
wchar_t* LMS_GetTextByLabel(LMS_MessageBinary* binary, const char* label);

#ifdef __cplusplus
}
#endif
```


