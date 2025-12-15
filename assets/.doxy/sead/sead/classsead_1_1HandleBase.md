

# Class sead::HandleBase



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**HandleBase**](classsead_1_1HandleBase.md)










Inherited by the following classes: [sead::DirectoryHandle](classsead_1_1DirectoryHandle.md),  [sead::FileHandle](classsead_1_1FileHandle.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**HandleBase**](#function-handlebase) () <br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**getDevice**](#function-getdevice) () const<br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**getOriginalDevice**](#function-getoriginaldevice) () const<br> |
|  bool | [**isOpened**](#function-isopened) () const<br> |
| virtual  | [**~HandleBase**](#function-handlebase) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**mDevice**](#variable-mdevice)  <br> |
|  [**HandleBuffer**](classsead_1_1SafeArray.md) | [**mHandleBuffer**](#variable-mhandlebuffer)  <br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**mOriginalDevice**](#variable-moriginaldevice)  <br> |




















## Public Functions Documentation




### function HandleBase 

```C++
inline sead::HandleBase::HandleBase () 
```




<hr>



### function getDevice 

```C++
inline FileDevice * sead::HandleBase::getDevice () const
```




<hr>



### function getOriginalDevice 

```C++
inline FileDevice * sead::HandleBase::getOriginalDevice () const
```




<hr>



### function isOpened 

```C++
inline bool sead::HandleBase::isOpened () const
```




<hr>



### function ~HandleBase 

```C++
inline virtual sead::HandleBase::~HandleBase () 
```




<hr>
## Protected Attributes Documentation




### variable mDevice 

```C++
FileDevice* sead::HandleBase::mDevice;
```




<hr>



### variable mHandleBuffer 

```C++
HandleBuffer sead::HandleBase::mHandleBuffer;
```




<hr>



### variable mOriginalDevice 

```C++
FileDevice* sead::HandleBase::mOriginalDevice;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/filedevice/seadFileDevice.h`

