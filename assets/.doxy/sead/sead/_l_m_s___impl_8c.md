

# File LMS\_Impl.c



[**FileList**](files.md) **>** [**addins**](dir_bd2ac9a3d2735b7139b8654d97389ba0.md) **>** [**libms**](dir_1dee988f62a020defef87bef9fc0dca6.md) **>** [**src**](dir_dfc4bbba1eff969fd6af80bc2d747dc5.md) **>** [**LMS\_Impl.c**](_l_m_s___impl_8c.md)

[Go to the source code of this file](_l_m_s___impl_8c_source.md)



* `#include "LMS/LMS_Impl.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**LMS\_AllocFuncPtr**](_l_m_s___impl_8h.md#typedef-lms_allocfuncptr) | [**LMSi\_sAllocFuncPtr**](#variable-lmsi_sallocfuncptr)  <br> |
|  [**LMS\_FreeFuncPtr**](_l_m_s___impl_8h.md#typedef-lms_freefuncptr) | [**LMSi\_sFreeFuncPtr**](#variable-lmsi_sfreefuncptr)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**LMS\_SetMemFuncs**](#function-lms_setmemfuncs) ([**LMS\_AllocFuncPtr**](_l_m_s___impl_8h.md#typedef-lms_allocfuncptr) alloc\_ptr, [**LMS\_FreeFuncPtr**](_l_m_s___impl_8h.md#typedef-lms_freefuncptr) free\_ptr) <br> |
|  void | [**LMSi\_Free**](#function-lmsi_free) (void \* ptr) <br> |
|  void \* | [**LMSi\_Malloc**](#function-lmsi_malloc) ([**u32**](_l_m_s___types_8h.md#typedef-u32) size) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**LMSi\_SearchBlockByName**](#function-lmsi_searchblockbyname) ([**LMS\_Binary**](struct_l_m_s___binary.md) \* binary, const char \* blockName) <br> |




























## Public Attributes Documentation




### variable LMSi\_sAllocFuncPtr 

```C++
LMS_AllocFuncPtr LMSi_sAllocFuncPtr;
```




<hr>



### variable LMSi\_sFreeFuncPtr 

```C++
LMS_FreeFuncPtr LMSi_sFreeFuncPtr;
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



### function LMSi\_SearchBlockByName 

```C++
s32 LMSi_SearchBlockByName (
    LMS_Binary * binary,
    const char * blockName
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/addins/libms/src/LMS_Impl.c`

