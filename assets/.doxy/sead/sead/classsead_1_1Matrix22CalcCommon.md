

# Class sead::Matrix22CalcCommon

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix22CalcCommon**](classsead_1_1Matrix22CalcCommon.md)






















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Mtx22Base | [**Base**](#typedef-base)  <br> |






















## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**copy**](#function-copy) ([**Base**](structsead_1_1BaseMtx22.md) & o, const [**Base**](structsead_1_1BaseMtx22.md) & n) <br> |
|  void | [**inverse**](#function-inverse) ([**Base**](structsead_1_1BaseMtx22.md) & o, const [**Base**](structsead_1_1BaseMtx22.md) & n) <br> |
|  void | [**inverseTranspose**](#function-inversetranspose) ([**Base**](structsead_1_1BaseMtx22.md) & o, const [**Base**](structsead_1_1BaseMtx22.md) & n) <br> |
|  void | [**makeIdentity**](#function-makeidentity) ([**Base**](structsead_1_1BaseMtx22.md) & o) <br> |
|  void | [**makeZero**](#function-makezero) ([**Base**](structsead_1_1BaseMtx22.md) & o) <br> |
|  void | [**multiply**](#function-multiply) ([**Base**](structsead_1_1BaseMtx22.md) & o, const [**Base**](structsead_1_1BaseMtx22.md) & a, const [**Base**](structsead_1_1BaseMtx22.md) & b) <br> |
|  void | [**transpose**](#function-transpose) ([**Base**](structsead_1_1BaseMtx22.md) & o) <br> |
|  void | [**transposeTo**](#function-transposeto) ([**Base**](structsead_1_1BaseMtx22.md) & o, const [**Base**](structsead_1_1BaseMtx22.md) & n) <br> |


























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

