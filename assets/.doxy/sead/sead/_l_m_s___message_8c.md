

# File LMS\_Message.c



[**FileList**](files.md) **>** [**addins**](dir_bd2ac9a3d2735b7139b8654d97389ba0.md) **>** [**libms**](dir_1dee988f62a020defef87bef9fc0dca6.md) **>** [**src**](dir_dfc4bbba1eff969fd6af80bc2d747dc5.md) **>** [**LMS\_Message.c**](_l_m_s___message_8c.md)

[Go to the source code of this file](_l_m_s___message_8c_source.md)



* `#include "LMS/LMS_Message.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**TextHeader**](struct_text_header.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**TextHeader**](struct_text_header.md) | [**TextHeader**](#typedef-textheader)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**LMS\_CloseMessage**](#function-lms_closemessage) ([**LMS\_MessageBinary**](struct_l_m_s___message_binary.md) \* binary) <br> |
|  int | [**LMS\_GetTextNum**](#function-lms_gettextnum) ([**LMS\_MessageBinary**](struct_l_m_s___message_binary.md) \* binary) <br> |
|  [**LMS\_MessageBinary**](struct_l_m_s___message_binary.md) \* | [**LMS\_InitMessage**](#function-lms_initmessage) (const void \* data) <br> |




























## Public Types Documentation




### typedef TextHeader 

```C++
typedef struct TextHeader TextHeader;
```




<hr>
## Public Functions Documentation




### function LMS\_CloseMessage 

```C++
void LMS_CloseMessage (
    LMS_MessageBinary * binary
) 
```




<hr>



### function LMS\_GetTextNum 

```C++
int LMS_GetTextNum (
    LMS_MessageBinary * binary
) 
```




<hr>



### function LMS\_InitMessage 

```C++
LMS_MessageBinary * LMS_InitMessage (
    const void * data
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/addins/libms/src/LMS_Message.c`

