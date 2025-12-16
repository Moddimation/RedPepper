

# Struct sead::FileDevice::LoadArg



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**FileDevice**](classsead_1_1_file_device.md) **>** [**LoadArg**](structsead_1_1_file_device_1_1_load_arg.md)





* `#include <seadFileDevice.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**alignment**](#variable-alignment)  <br> |
|  bool | [**assert\_on\_alloc\_fail**](#variable-assert_on_alloc_fail)  <br> |
|  [**u8**](_l_m_s___types_8h.md#typedef-u8) \* | [**buffer**](#variable-buffer)  <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**buffer\_size**](#variable-buffer_size)  <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**buffer\_size\_alignment**](#variable-buffer_size_alignment)  <br> |
|  bool | [**check\_read\_entire\_file**](#variable-check_read_entire_file)  <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**div\_size**](#variable-div_size)  <br>_Read chunk size._  |
|  [**Heap**](classsead_1_1_heap.md) \* | [**heap**](#variable-heap)  <br> |
|  bool | [**need\_unload**](#variable-need_unload)  <br> |
|  [**SafeString**](namespacesead.md#typedef-safestring) | [**path**](#variable-path)  <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**read\_size**](#variable-read_size)  <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**roundup\_size**](#variable-roundup_size)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**LoadArg**](#function-loadarg) () <br> |




























## Public Attributes Documentation




### variable alignment 

```C++
s32 sead::FileDevice::LoadArg::alignment;
```




<hr>



### variable assert\_on\_alloc\_fail 

```C++
bool sead::FileDevice::LoadArg::assert_on_alloc_fail;
```




<hr>



### variable buffer 

```C++
u8* sead::FileDevice::LoadArg::buffer;
```




<hr>



### variable buffer\_size 

```C++
u32 sead::FileDevice::LoadArg::buffer_size;
```




<hr>



### variable buffer\_size\_alignment 

```C++
s32 sead::FileDevice::LoadArg::buffer_size_alignment;
```




<hr>



### variable check\_read\_entire\_file 

```C++
bool sead::FileDevice::LoadArg::check_read_entire_file;
```




<hr>



### variable div\_size 

_Read chunk size._ 
```C++
u32 sead::FileDevice::LoadArg::div_size;
```




<hr>



### variable heap 

```C++
Heap* sead::FileDevice::LoadArg::heap;
```




<hr>



### variable need\_unload 

```C++
bool sead::FileDevice::LoadArg::need_unload;
```




<hr>



### variable path 

```C++
SafeString sead::FileDevice::LoadArg::path;
```




<hr>



### variable read\_size 

```C++
u32 sead::FileDevice::LoadArg::read_size;
```




<hr>



### variable roundup\_size 

```C++
u32 sead::FileDevice::LoadArg::roundup_size;
```




<hr>
## Public Functions Documentation




### function LoadArg 

```C++
inline sead::FileDevice::LoadArg::LoadArg () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/filedevice/seadFileDevice.h`

