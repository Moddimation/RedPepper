

# Class sead::BitFlag

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**BitFlag**](classsead_1_1_bit_flag.md)





* `#include <seadBitFlag.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**BitFlag**](#function-bitflag-12) () <br> |
|   | [**BitFlag**](#function-bitflag-22) (T bits) <br> |
|  void | [**change**](#function-change) (T val, bool on) <br> |
|  void | [**changeBit**](#function-changebit) (int bit, bool on) <br> |
|  int | [**countContinuousOffBitFromRight**](#function-countcontinuousoffbitfromright) () const<br>_Count trailing zeroes._  |
|  int | [**countOnBit**](#function-countonbit) () const<br>_Popcount._  |
|  int | [**countRightOnBit**](#function-countrightonbit) (int bit) const<br> |
|  int | [**findOnBitFromRight**](#function-findonbitfromright) (int num) const<br> |
|  size\_t | [**getByteSize**](#function-getbytesize) () const<br> |
|  T | [**getDirect**](#function-getdirect) () const<br> |
|  T | [**getMask**](#function-getmask) (T v) const<br> |
|  T \* | [**getPtr**](#function-getptr-12) () <br> |
|  const T \* | [**getPtr**](#function-getptr-22) () const<br> |
|  bool | [**isOff**](#function-isoff) (T val) const<br> |
|  bool | [**isOffBit**](#function-isoffbit) (int bit) const<br> |
|  bool | [**isOn**](#function-ison) (T val) const<br>_Checks if (at least) one of the bits are set._  |
|  bool | [**isOnAll**](#function-isonall) (T val) const<br>_Checks if all of the bits are set._  |
|  bool | [**isOnBit**](#function-isonbit) (int bit) const<br> |
|  bool | [**isZero**](#function-iszero) () const<br> |
|  void | [**makeAllOne**](#function-makeallone) () <br> |
|  void | [**makeAllZero**](#function-makeallzero) () <br> |
|   | [**operator T**](#function-operator-t) () const<br> |
|  void | [**reset**](#function-reset) (T val) <br> |
|  void | [**resetBit**](#function-resetbit) (int bit) <br> |
|  void | [**set**](#function-set) (T val) <br> |
|  void | [**setBit**](#function-setbit) (int bit) <br> |
|  void | [**setDirect**](#function-setdirect) (T bits) <br> |
|  bool | [**testAndClear**](#function-testandclear) (T val) <br> |
|  bool | [**testAndClearBit**](#function-testandclearbit) (int bit) <br> |
|  void | [**toggle**](#function-toggle) (T val) <br> |
|  void | [**toggleBit**](#function-togglebit) (int bit) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  T | [**makeMask**](#function-makemask) (int bit) <br> |






## Protected Attributes

| Type | Name |
| ---: | :--- |
|  T | [**mBits**](#variable-mbits)  <br> |




















## Public Functions Documentation




### function BitFlag [1/2]

```C++
inline sead::BitFlag::BitFlag () 
```




<hr>



### function BitFlag [2/2]

```C++
inline sead::BitFlag::BitFlag (
    T bits
) 
```




<hr>



### function change 

```C++
inline void sead::BitFlag::change (
    T val,
    bool on
) 
```




<hr>



### function changeBit 

```C++
inline void sead::BitFlag::changeBit (
    int bit,
    bool on
) 
```




<hr>



### function countContinuousOffBitFromRight 

_Count trailing zeroes._ 
```C++
inline int sead::BitFlag::countContinuousOffBitFromRight () const
```




<hr>



### function countOnBit 

_Popcount._ 
```C++
inline int sead::BitFlag::countOnBit () const
```




<hr>



### function countRightOnBit 

```C++
inline int sead::BitFlag::countRightOnBit (
    int bit
) const
```




<hr>



### function findOnBitFromRight 

```C++
inline int sead::BitFlag::findOnBitFromRight (
    int num
) const
```




<hr>



### function getByteSize 

```C++
inline size_t sead::BitFlag::getByteSize () const
```




<hr>



### function getDirect 

```C++
inline T sead::BitFlag::getDirect () const
```




<hr>



### function getMask 

```C++
T sead::BitFlag::getMask (
    T v
) const
```




<hr>



### function getPtr [1/2]

```C++
inline T * sead::BitFlag::getPtr () 
```




<hr>



### function getPtr [2/2]

```C++
inline const T * sead::BitFlag::getPtr () const
```




<hr>



### function isOff 

```C++
inline bool sead::BitFlag::isOff (
    T val
) const
```




<hr>



### function isOffBit 

```C++
inline bool sead::BitFlag::isOffBit (
    int bit
) const
```




<hr>



### function isOn 

_Checks if (at least) one of the bits are set._ 
```C++
inline bool sead::BitFlag::isOn (
    T val
) const
```




<hr>



### function isOnAll 

_Checks if all of the bits are set._ 
```C++
inline bool sead::BitFlag::isOnAll (
    T val
) const
```




<hr>



### function isOnBit 

```C++
inline bool sead::BitFlag::isOnBit (
    int bit
) const
```




<hr>



### function isZero 

```C++
inline bool sead::BitFlag::isZero () const
```




<hr>



### function makeAllOne 

```C++
inline void sead::BitFlag::makeAllOne () 
```




<hr>



### function makeAllZero 

```C++
inline void sead::BitFlag::makeAllZero () 
```




<hr>



### function operator T 

```C++
inline sead::BitFlag::operator T () const
```




<hr>



### function reset 

```C++
inline void sead::BitFlag::reset (
    T val
) 
```




<hr>



### function resetBit 

```C++
inline void sead::BitFlag::resetBit (
    int bit
) 
```




<hr>



### function set 

```C++
inline void sead::BitFlag::set (
    T val
) 
```




<hr>



### function setBit 

```C++
inline void sead::BitFlag::setBit (
    int bit
) 
```




<hr>



### function setDirect 

```C++
inline void sead::BitFlag::setDirect (
    T bits
) 
```




<hr>



### function testAndClear 

```C++
inline bool sead::BitFlag::testAndClear (
    T val
) 
```




<hr>



### function testAndClearBit 

```C++
inline bool sead::BitFlag::testAndClearBit (
    int bit
) 
```




<hr>



### function toggle 

```C++
inline void sead::BitFlag::toggle (
    T val
) 
```




<hr>



### function toggleBit 

```C++
inline void sead::BitFlag::toggleBit (
    int bit
) 
```




<hr>
## Public Static Functions Documentation




### function makeMask 

```C++
static inline T sead::BitFlag::makeMask (
    int bit
) 
```




<hr>
## Protected Attributes Documentation




### variable mBits 

```C++
T sead::BitFlag< T >::mBits;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadBitFlag.h`

