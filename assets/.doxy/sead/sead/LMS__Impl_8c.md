

# File LMS\_Impl.c



[**FileList**](files.md) **>** [**addins**](dir_bd2ac9a3d2735b7139b8654d97389ba0.md) **>** [**libms**](dir_1dee988f62a020defef87bef9fc0dca6.md) **>** [**src**](dir_dfc4bbba1eff969fd6af80bc2d747dc5.md) **>** [**LMS\_Impl.c**](LMS__Impl_8c.md)

[Go to the source code of this file](LMS__Impl_8c_source.md)



* `#include "LMS/LMS_Impl.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  LMS\_AllocFuncPtr | [**LMSi\_sAllocFuncPtr**](#variable-lmsi_sallocfuncptr)  <br> |
|  LMS\_FreeFuncPtr | [**LMSi\_sFreeFuncPtr**](#variable-lmsi_sfreefuncptr)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**LMS\_SetMemFuncs**](#function-lms_setmemfuncs) (LMS\_AllocFuncPtr alloc\_ptr, LMS\_FreeFuncPtr free\_ptr) <br> |
|  void | [**LMSi\_Free**](#function-lmsi_free) (void \* ptr) <br> |
|  void \* | [**LMSi\_Malloc**](#function-lmsi_malloc) (u32 size) <br> |




























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

------------------------------
The documentation for this class was generated from the following file `lib/sead/addins/libms/src/LMS_Impl.c`

