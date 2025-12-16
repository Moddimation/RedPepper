

# Class sead::BitFlagUtil



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**BitFlagUtil**](classsead_1_1_bit_flag_util.md)





* `#include <seadBitFlag.h>`







































## Public Static Functions

| Type | Name |
| ---: | :--- |
|  int | [**countContinuousOffBitFromRight**](#function-countcontinuousoffbitfromright) ([**u32**](_l_m_s___types_8h.md#typedef-u32) x) <br>_Count trailing zeroes (ctz)._  |
|  int | [**countOnBit**](#function-countonbit) ([**u32**](_l_m_s___types_8h.md#typedef-u32) x) <br>_Popcount._  |
|  int | [**countRightOnBit**](#function-countrightonbit) ([**u32**](_l_m_s___types_8h.md#typedef-u32) x, int bit) <br> |
|  int | [**findOnBitFromRight**](#function-findonbitfromright) ([**u32**](_l_m_s___types_8h.md#typedef-u32) x, int num) <br> |


























## Public Static Functions Documentation




### function countContinuousOffBitFromRight 

_Count trailing zeroes (ctz)._ 
```C++
static inline int sead::BitFlagUtil::countContinuousOffBitFromRight (
    u32 x
) 
```




<hr>



### function countOnBit 

_Popcount._ 
```C++
static int sead::BitFlagUtil::countOnBit (
    u32 x
) 
```




<hr>



### function countRightOnBit 

```C++
static int sead::BitFlagUtil::countRightOnBit (
    u32 x,
    int bit
) 
```




<hr>



### function findOnBitFromRight 

```C++
static int sead::BitFlagUtil::findOnBitFromRight (
    u32 x,
    int num
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadBitFlag.h`

