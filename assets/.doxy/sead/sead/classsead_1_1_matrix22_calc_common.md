

# Class sead::Matrix22CalcCommon

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix22CalcCommon**](classsead_1_1_matrix22_calc_common.md)





* `#include <seadMatrixCalcCommon.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Mtx22Base | [**Base**](#typedef-base)  <br> |






















## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**copy**](#function-copy) ([**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & n) <br> |
|  void | [**inverse**](#function-inverse) ([**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & n) <br> |
|  void | [**inverseTranspose**](#function-inversetranspose) ([**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & n) <br> |
|  void | [**makeIdentity**](#function-makeidentity) ([**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & o) <br> |
|  void | [**makeZero**](#function-makezero) ([**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & o) <br> |
|  void | [**multiply**](#function-multiply) ([**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & a, const [**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & b) <br> |
|  void | [**transpose**](#function-transpose) ([**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & o) <br> |
|  void | [**transposeTo**](#function-transposeto) ([**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix22_calc_common.md#typedef-base) & n) <br> |


























## Public Types Documentation




### typedef Base 

```C++
typedef Policies<T>::Mtx22Base sead::Matrix22CalcCommon< T >::Base;
```




<hr>
## Public Static Functions Documentation




### function copy 

```C++
static void sead::Matrix22CalcCommon::copy (
    Base & o,
    const Base & n
) 
```




<hr>



### function inverse 

```C++
static void sead::Matrix22CalcCommon::inverse (
    Base & o,
    const Base & n
) 
```




<hr>



### function inverseTranspose 

```C++
static void sead::Matrix22CalcCommon::inverseTranspose (
    Base & o,
    const Base & n
) 
```




<hr>



### function makeIdentity 

```C++
static void sead::Matrix22CalcCommon::makeIdentity (
    Base & o
) 
```




<hr>



### function makeZero 

```C++
static void sead::Matrix22CalcCommon::makeZero (
    Base & o
) 
```




<hr>



### function multiply 

```C++
static void sead::Matrix22CalcCommon::multiply (
    Base & o,
    const Base & a,
    const Base & b
) 
```




<hr>



### function transpose 

```C++
static void sead::Matrix22CalcCommon::transpose (
    Base & o
) 
```




<hr>



### function transposeTo 

```C++
static void sead::Matrix22CalcCommon::transposeTo (
    Base & o,
    const Base & n
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadMatrixCalcCommon.h`

