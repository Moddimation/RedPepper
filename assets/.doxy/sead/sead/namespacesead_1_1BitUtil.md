

# Namespace sead::BitUtil



[**Namespace List**](namespaces.md) **>** [**sead**](namespacesead.md) **>** [**BitUtil**](namespacesead_1_1BitUtil.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**addOffset**](#function-addoffset) (const void \* ptr, intptr\_t offset) <br> |
|  To | [**bitCast**](#function-bitcast) (From value) <br> |
|  To | [**bitCastPtr**](#function-bitcastptr) (const void \* value, intptr\_t offset=0) <br> |
|  void | [**bitCastWrite**](#function-bitcastwrite) (const From & value, To \* ptr) <br> |




























## Public Functions Documentation




### function addOffset 

```C++
inline void * sead::BitUtil::addOffset (
    const void * ptr,
    intptr_t offset
) 
```




<hr>



### function bitCast 

```C++
template<typename To, typename From>
inline To sead::BitUtil::bitCast (
    From value
) 
```




<hr>



### function bitCastPtr 

```C++
template<typename To>
inline To sead::BitUtil::bitCastPtr (
    const void * value,
    intptr_t offset=0
) 
```




<hr>



### function bitCastWrite 

```C++
template<typename To, typename From>
inline void sead::BitUtil::bitCastWrite (
    const From & value,
    To * ptr
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadBitUtil.h`

