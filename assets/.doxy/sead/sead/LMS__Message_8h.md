

# File LMS\_Message.h



[**FileList**](files.md) **>** [**addins**](dir_bd2ac9a3d2735b7139b8654d97389ba0.md) **>** [**libms**](dir_1dee988f62a020defef87bef9fc0dca6.md) **>** [**include**](dir_8e5587206eb2e57f66e587525412fdb5.md) **>** [**LMS**](dir_2f5cb6ddc5adc0b9a4d0247b3147eb99.md) **>** [**LMS\_Message.h**](LMS__Message_8h.md)

[Go to the source code of this file](LMS__Message_8h_source.md)



* `#include "LMS/LMS_Impl.h"`
* `#include <stddef.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**LMS\_MessageBinary**](structLMS__MessageBinary.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**LMS\_MessageBinary**](structLMS__MessageBinary.md) | [**LMS\_MessageBinary**](#typedef-lms_messagebinary)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**LMS\_CloseMessage**](#function-lms_closemessage) ([**LMS\_MessageBinary**](structLMS__MessageBinary.md) \* binary) <br> |
|  wchar\_t \* | [**LMS\_GetText**](#function-lms_gettext) ([**LMS\_MessageBinary**](structLMS__MessageBinary.md) \* binary, int index) <br> |
|  wchar\_t \* | [**LMS\_GetTextByLabel**](#function-lms_gettextbylabel) ([**LMS\_MessageBinary**](structLMS__MessageBinary.md) \* binary, const char \* label) <br> |
|  int | [**LMS\_GetTextIndexByLabel**](#function-lms_gettextindexbylabel) ([**LMS\_MessageBinary**](structLMS__MessageBinary.md) \* binary, const char \* label) <br> |
|  int | [**LMS\_GetTextNum**](#function-lms_gettextnum) ([**LMS\_MessageBinary**](structLMS__MessageBinary.md) \* binary) <br> |
|  [**LMS\_MessageBinary**](structLMS__MessageBinary.md) \* | [**LMS\_InitMessage**](#function-lms_initmessage) (const void \* data) <br> |




























## Public Types Documentation




### typedef LMS\_MessageBinary 

```C++
typedef struct LMS_MessageBinary LMS_MessageBinary;
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



### function LMS\_GetText 

```C++
wchar_t * LMS_GetText (
    LMS_MessageBinary * binary,
    int index
) 
```




<hr>



### function LMS\_GetTextByLabel 

```C++
wchar_t * LMS_GetTextByLabel (
    LMS_MessageBinary * binary,
    const char * label
) 
```




<hr>



### function LMS\_GetTextIndexByLabel 

```C++
int LMS_GetTextIndexByLabel (
    LMS_MessageBinary * binary,
    const char * label
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
The documentation for this class was generated from the following file `lib/sead/addins/libms/include/LMS/LMS_Message.h`

