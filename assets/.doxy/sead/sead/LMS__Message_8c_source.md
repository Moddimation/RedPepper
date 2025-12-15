

# File LMS\_Message.c

[**File List**](files.md) **>** [**addins**](dir_bd2ac9a3d2735b7139b8654d97389ba0.md) **>** [**libms**](dir_1dee988f62a020defef87bef9fc0dca6.md) **>** [**src**](dir_dfc4bbba1eff969fd6af80bc2d747dc5.md) **>** [**LMS\_Message.c**](LMS__Message_8c.md)

[Go to the documentation of this file](LMS__Message_8c.md)


```C++
#include "LMS/LMS_Message.h"

typedef struct TextHeader {
    u32 numMessages;
} TextHeader;

LMS_MessageBinary* LMS_InitMessage(const void* data)
{
    LMS_MessageBinary* msg = LMSi_Malloc(sizeof(LMS_MessageBinary));
    msg->common.data = data;
    LMSi_AnalyzeMessageBinary(&msg->common, "MsgStdBn");
    msg->labelsIndex = LMSi_SearchBlockByName(&msg->common, "LBL1");
    msg->textIndex = LMSi_SearchBlockByName(&msg->common, "TXT2");
    msg->attributesIndex = LMSi_SearchBlockByName(&msg->common, "ATR1");
    msg->styleIndex = LMSi_SearchBlockByName(&msg->common, "TSY1");
    return msg;
}

int LMS_GetTextNum(LMS_MessageBinary* binary)
{
    if (binary->textIndex == -1)
        return -1;
    return ((TextHeader*)binary->common.blocks[binary->textIndex].data)->numMessages;
}

void LMS_CloseMessage(LMS_MessageBinary* binary)
{
    if (binary->common.blocks)
        LMSi_Free(binary->common.blocks);
    LMSi_Free(binary);
}
```


