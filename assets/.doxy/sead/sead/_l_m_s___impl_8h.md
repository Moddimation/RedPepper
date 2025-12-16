

# File LMS\_Impl.h



[**FileList**](files.md) **>** [**addins**](dir_bd2ac9a3d2735b7139b8654d97389ba0.md) **>** [**libms**](dir_1dee988f62a020defef87bef9fc0dca6.md) **>** [**include**](dir_8e5587206eb2e57f66e587525412fdb5.md) **>** [**LMS**](dir_2f5cb6ddc5adc0b9a4d0247b3147eb99.md) **>** [**LMS\_Impl.h**](_l_m_s___impl_8h.md)

[Go to the source code of this file](_l_m_s___impl_8h_source.md)



* `#include "LMS/LMS_Types.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**LMS\_Binary**](struct_l_m_s___binary.md) <br> |
| struct | [**LMS\_BinaryBlock**](struct_l_m_s___binary_block.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef void \*(\* | [**LMS\_AllocFuncPtr**](#typedef-lms_allocfuncptr)  <br> |
| typedef struct [**LMS\_Binary**](struct_l_m_s___binary.md) | [**LMS\_Binary**](#typedef-lms_binary)  <br> |
| typedef struct [**LMS\_BinaryBlock**](struct_l_m_s___binary_block.md) | [**LMS\_BinaryBlock**](#typedef-lms_binaryblock)  <br> |
| typedef void(\* | [**LMS\_FreeFuncPtr**](#typedef-lms_freefuncptr)  <br> |
| enum  | [**LMS\_MessageEncoding**](#enum-lms_messageencoding)  <br> |
| typedef enum [**LMS\_MessageEncoding**](_l_m_s___impl_8h.md#enum-lms_messageencoding) | [**LMS\_MessageEncoding**](#typedef-lms_messageencoding)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**LMS\_SetMemFuncs**](#function-lms_setmemfuncs) ([**LMS\_AllocFuncPtr**](_l_m_s___impl_8h.md#typedef-lms_allocfuncptr) alloc\_ptr, [**LMS\_FreeFuncPtr**](_l_m_s___impl_8h.md#typedef-lms_freefuncptr) free\_ptr) <br> |
|  void | [**LMSi\_AnalyzeMessageBinary**](#function-lmsi_analyzemessagebinary) ([**LMS\_Binary**](struct_l_m_s___binary.md) \* binary, const char \* magic) <br> |
|  void | [**LMSi\_Free**](#function-lmsi_free) (void \* ptr) <br> |
|  void \* | [**LMSi\_Malloc**](#function-lmsi_malloc) ([**u32**](_l_m_s___types_8h.md#typedef-u32) size) <br> |
|  \_Bool | [**LMSi\_MemCmp**](#function-lmsi_memcmp) (const void \*, const void \*, [**u32**](_l_m_s___types_8h.md#typedef-u32) size) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**LMSi\_SearchBlockByName**](#function-lmsi_searchblockbyname) ([**LMS\_Binary**](struct_l_m_s___binary.md) \* binary, const char \* blockName) <br> |




























## Public Types Documentation




### typedef LMS\_AllocFuncPtr 

```C++
typedef void *(* LMS_AllocFuncPtr) (u32 size);
```




<hr>



### typedef LMS\_Binary 

```C++
typedef struct LMS_Binary LMS_Binary;
```




<hr>



### typedef LMS\_BinaryBlock 

```C++
typedef struct LMS_BinaryBlock LMS_BinaryBlock;
```




<hr>



### typedef LMS\_FreeFuncPtr 

```C++
typedef void(* LMS_FreeFuncPtr) (void *ptr);
```




<hr>



### enum LMS\_MessageEncoding 

```C++
enum LMS_MessageEncoding {
    LMS_MessageEncoding_UTF8,
    LMS_MessageEncoding_UTF16,
    LMS_MessageEncoding_UTF32
};
```




<hr>



### typedef LMS\_MessageEncoding 

```C++
typedef enum LMS_MessageEncoding LMS_MessageEncoding;
```




<hr>
## Public Functions Documentation




### function LMS\_SetMemFuncs 

```C++
void LMS_SetMemFuncs (
    LMS_AllocFuncPtr alloc_ptr,
    LMS_FreeFuncPtr free_ptr
) 
```




<hr>



### function LMSi\_AnalyzeMessageBinary 

```C++
void LMSi_AnalyzeMessageBinary (
    LMS_Binary * binary,
    const char * magic
) 
```




<hr>



### function LMSi\_Free 

```C++
void LMSi_Free (
    void * ptr
) 
```




<hr>



### function LMSi\_Malloc 

```C++
void * LMSi_Malloc (
    u32 size
) 
```




<hr>



### function LMSi\_MemCmp 

```C++
_Bool LMSi_MemCmp (
    const void *,
    const void *,
    u32 size
) 
```




<hr>



### function LMSi\_SearchBlockByName 

```C++
s32 LMSi_SearchBlockByName (
    LMS_Binary * binary,
    const char * blockName
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/addins/libms/include/LMS/LMS_Impl.h`

