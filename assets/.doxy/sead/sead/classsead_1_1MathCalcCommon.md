

# Class sead::MathCalcCommon

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**MathCalcCommon**](classsead_1_1MathCalcCommon.md)




















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**AtanSample**](structsead_1_1MathCalcCommon_1_1AtanSample.md) <br> |
| struct | [**ExpSample**](structsead_1_1MathCalcCommon_1_1ExpSample.md) <br> |
| struct | [**LogSample**](structsead_1_1MathCalcCommon_1_1LogSample.md) <br> |
| struct | [**SinCosSample**](structsead_1_1MathCalcCommon_1_1SinCosSample.md) <br> |








## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**AtanSample**](structsead_1_1MathCalcCommon_1_1AtanSample.md) | [**cAtanTbl**](#variable-catantbl-12)  <br> |
|  const [**ExpSample**](structsead_1_1MathCalcCommon_1_1ExpSample.md) | [**cExpTbl**](#variable-cexptbl-12)  <br> |
|  const u32 | [**cHalfRoundIdx**](#variable-chalfroundidx)   = `0x80000000`<br> |
|  const [**LogSample**](structsead_1_1MathCalcCommon_1_1LogSample.md) | [**cLogTbl**](#variable-clogtbl-12)  <br> |
|  const u32 | [**cQuarterRoundIdx**](#variable-cquarterroundidx)   = `0x40000000`<br> |
|  const [**SinCosSample**](structsead_1_1MathCalcCommon_1_1SinCosSample.md) | [**cSinCosTbl**](#variable-csincostbl-12)  <br>_Note: this is only defined for T = float at the moment._  |














## Public Functions

| Type | Name |
| ---: | :--- |
|  s32 | [**abs**](#function-abs-23) (s32 x) <br> |
|  u32 | [**abs**](#function-abs-33) (u32 x) <br> |
|  u32 | [**acosIdx**](#function-acosidx-22) (f32 c) <br> |
|  u32 | [**asinIdx**](#function-asinidx-22) (f32 s) <br> |
|  u32 | [**atan2Idx**](#function-atan2idx-22) (f32 y, f32 x) <br> |
|  u32 | [**atanIdx**](#function-atanidx-22) (f32 t) <br> |
|  const [**MathCalcCommon**](classsead_1_1MathCalcCommon.md)&lt; float &gt;::AtanSample | [**cAtanTbl**](#function-catantbl-22) () <br> |
|  const [**MathCalcCommon**](classsead_1_1MathCalcCommon.md)&lt; float &gt;::ExpSample | [**cExpTbl**](#function-cexptbl-22) () <br> |
|  const [**MathCalcCommon**](classsead_1_1MathCalcCommon.md)&lt; float &gt;::LogSample | [**cLogTbl**](#function-clogtbl-22) () <br> |
|  const [**MathCalcCommon**](classsead_1_1MathCalcCommon.md)&lt; float &gt;::SinCosSample | [**cSinCosTbl**](#function-csincostbl-22) () <br> |
|  s32 | [**ceil**](#function-ceil-22) (s32 val) <br> |
|  f32 | [**cosIdx**](#function-cosidx-22) (u32 idx) <br> |
|  s32 | [**floor**](#function-floor-22) (s32 val) <br> |
|  f32 | [**nan**](#function-nan-23) () <br> |
|  f64 | [**nan**](#function-nan-33) () <br> |
|  s32 | [**roundOff**](#function-roundoff-22) (s32 val) <br> |
|  s32 | [**roundUpPow2**](#function-rounduppow2-23) (u32 val, s32 base) <br> |
|  s32 | [**roundUpPow2**](#function-rounduppow2-33) (s32 val, s32 base) <br> |
|  void | [**sinCosIdx**](#function-sincosidx-22) (f32 \* pSin, f32 \* pCos, u32 idx) <br> |
|  f32 | [**sinIdx**](#function-sinidx-22) (u32 idx) <br> |
|  f32 | [**tanIdx**](#function-tanidx-22) (u32 idx) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  T | [**abs**](#function-abs-13) (T x) <br> |
|  T | [**acos**](#function-acos) (T c) <br> |
|  u32 | [**acosIdx**](#function-acosidx-12) (T c) <br> |
|  T | [**angleDist**](#function-angledist) (T, T) <br> |
|  T | [**asin**](#function-asin) (T s) <br> |
|  u32 | [**asinIdx**](#function-asinidx-12) (T s) <br> |
|  T | [**atan**](#function-atan) (T t) <br> |
|  T | [**atan2**](#function-atan2) (T y, T x) <br> |
|  u32 | [**atan2Idx**](#function-atan2idx-12) (T y, T x) <br> |
|  u32 | [**atanIdx**](#function-atanidx-12) (T t) <br> |
|  s32 | [**ceil**](#function-ceil-12) (T val) <br> |
|  bool | [**chase**](#function-chase) (T \* value, T target, T step) <br> |
|  bool | [**chaseAngle**](#function-chaseangle) (T \*, T, T) <br> |
|  bool | [**chaseAngleIdx**](#function-chaseangleidx) (u32 \*, u32, s64) <br> |
|  T | [**clamp**](#function-clamp) (T value, T low, T high) <br> |
|  T | [**clamp2**](#function-clamp2) (T min\_, T val, T max\_) <br> |
|  T | [**clampMax**](#function-clampmax) (T val, T max\_) <br> |
|  T | [**clampMin**](#function-clampmin) (T val, T min\_) <br> |
|  T | [**cos**](#function-cos) (T t) <br> |
|  T | [**cosIdx**](#function-cosidx-12) (u32 idx) <br> |
|  u32 | [**deg2idx**](#function-deg2idx) (T a) <br> |
|  T | [**deg2rad**](#function-deg2rad) (T deg) <br> |
|  T | [**exp**](#function-exp) (T t) <br> |
|  T | [**expTable**](#function-exptable) (T x) <br> |
|  T | [**fitSign**](#function-fitsign) (T value, T sign\_value) <br> |
|  s32 | [**floor**](#function-floor-12) (T val) <br> |
|  T | [**gcd**](#function-gcd) (T x, T y) <br> |
|  T | [**getRand**](#function-getrand) (T) <br> |
|  T | [**getRandRange**](#function-getrandrange) (T, T) <br> |
|  T | [**getRandSign**](#function-getrandsign) () <br> |
|  T | [**idx2deg**](#function-idx2deg) (u32 a) <br> |
|  T | [**idx2rad**](#function-idx2rad) (u32 a) <br> |
|  T | [**infinity**](#function-infinity) () <br> |
|  T | [**inv**](#function-inv) (T t) <br> |
|  bool | [**isInfinity**](#function-isinfinity) (T) <br> |
|  bool | [**isIntersect1d**](#function-isintersect1d) (T, T, T, T) <br> |
|  bool | [**isMultiplePow2**](#function-ismultiplepow2) (T, T) <br> |
|  bool | [**isNan**](#function-isnan) (T) <br> |
|  bool | [**isPow2**](#function-ispow2) (T) <br> |
|  bool | [**isZero**](#function-iszero) (T, T) <br> |
|  T | [**lcm**](#function-lcm) (T x, T y) <br> |
|  T | [**lerp**](#function-lerp) (T a, T b, f32 ratio) <br> |
|  T | [**ln2**](#function-ln2) () <br> |
|  T | [**ln2Inv**](#function-ln2inv) () <br> |
|  T | [**log**](#function-log) (T t) <br> |
|  T | [**log10**](#function-log10) (T t) <br> |
|  T | [**log2**](#function-log2) (T n) <br> |
|  T | [**logTable**](#function-logtable) (T x) <br> |
|  T | [**max**](#function-max) (T a, T b) <br> |
|  T | [**max3**](#function-max3) (T a, T b, T c) <br> |
|  T | [**maxNumber**](#function-maxnumber) () <br> |
|  T | [**min**](#function-min) (T a, T b) <br> |
|  T | [**min3**](#function-min3) (T a, T b, T c) <br> |
|  T | [**minNumber**](#function-minnumber) () <br> |
|  T | [**nan**](#function-nan-13) () <br> |
|  T | [**neg**](#function-neg) (T t) <br> |
|  T | [**one**](#function-one) () <br> |
|  T | [**pi**](#function-pi) () <br> |
|  T | [**pi2**](#function-pi2) () <br> |
|  T | [**piHalf**](#function-pihalf) () <br> |
|  T | [**pow**](#function-pow) (T x, T y) <br> |
|  T | [**powTable**](#function-powtable) (T, T) <br> |
|  T | [**rad2deg**](#function-rad2deg) (T rad) <br> |
|  u32 | [**rad2idx**](#function-rad2idx) (T a) <br> |
|  T | [**random**](#function-random) () <br> |
|  T | [**roundAngle**](#function-roundangle) (T) <br> |
|  s32 | [**roundDownN**](#function-rounddownn) (T val, s32 multNumber) <br> |
|  s32 | [**roundDownPow2**](#function-rounddownpow2) (T x, s32 y) <br> |
|  s32 | [**roundOff**](#function-roundoff-12) (T val) <br> |
|  T | [**roundUp**](#function-roundup) (T x, s32 multNumber) <br> |
|  s32 | [**roundUpPow2**](#function-rounduppow2-13) (T x, s32 y) <br> |
|  T | [**rsqrt**](#function-rsqrt) (T t) <br> |
|  T | [**sign**](#function-sign) (T value) <br>_Returns -1 for strictly negative values and 1 otherwise._  |
|  T | [**sin**](#function-sin) (T t) <br> |
|  void | [**sinCosIdx**](#function-sincosidx-12) (T \* p\_sin, T \* p\_cos, u32 idx) <br> |
|  T | [**sinIdx**](#function-sinidx-12) (u32 idx) <br> |
|  T | [**sqrt**](#function-sqrt) (T t) <br> |
|  T | [**square**](#function-square) (T t) <br> |
|  T | [**tan**](#function-tan) (T t) <br> |
|  T | [**tanIdx**](#function-tanidx-12) (u32 idx) <br> |
|  T | [**zero**](#function-zero) () <br> |






















## Protected Functions

| Type | Name |
| ---: | :--- |
|  u32 | [**atanIdx\_**](#function-atanidx_-22) (f32 t) <br> |


## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**assertGreaterThanOrEqualToZero\_**](#function-assertgreaterthanorequaltozero_) (T) <br> |
|  u32 | [**atanIdx\_**](#function-atanidx_-12) (T t) <br> |
|  T | [**expLn2\_**](#function-expln2_) (T x) <br> |
|  T | [**log1\_2\_**](#function-log1_2_) (T x) <br> |


## Public Static Attributes Documentation




### variable cAtanTbl [1/2]

```C++
const AtanSample sead::MathCalcCommon< T >::cAtanTbl[128+1];
```




<hr>



### variable cExpTbl [1/2]

```C++
const ExpSample sead::MathCalcCommon< T >::cExpTbl[32+1];
```




<hr>



### variable cHalfRoundIdx 

```C++
const u32 sead::MathCalcCommon< T >::cHalfRoundIdx;
```




<hr>



### variable cLogTbl [1/2]

```C++
const LogSample sead::MathCalcCommon< T >::cLogTbl[256+1];
```




<hr>



### variable cQuarterRoundIdx 

```C++
const u32 sead::MathCalcCommon< T >::cQuarterRoundIdx;
```




<hr>



### variable cSinCosTbl [1/2]

_Note: this is only defined for T = float at the moment._ 
```C++
const SinCosSample sead::MathCalcCommon< T >::cSinCosTbl[256+1];
```




<hr>
## Public Functions Documentation




### function abs [2/3]

```C++
inline s32 sead::MathCalcCommon::abs (
    s32 x
) 
```




<hr>



### function abs [3/3]

```C++
inline u32 sead::MathCalcCommon::abs (
    u32 x
) 
```




<hr>



### function acosIdx [2/2]

```C++
inline u32 sead::MathCalcCommon::acosIdx (
    f32 c
) 
```




<hr>



### function asinIdx [2/2]

```C++
inline u32 sead::MathCalcCommon::asinIdx (
    f32 s
) 
```




<hr>



### function atan2Idx [2/2]

```C++
inline u32 sead::MathCalcCommon::atan2Idx (
    f32 y,
    f32 x
) 
```




<hr>



### function atanIdx [2/2]

```C++
inline u32 sead::MathCalcCommon::atanIdx (
    f32 t
) 
```




<hr>



### function cAtanTbl [2/2]

```C++
const MathCalcCommon < float >::AtanSample sead::MathCalcCommon::cAtanTbl () 
```




<hr>



### function cExpTbl [2/2]

```C++
const MathCalcCommon < float >::ExpSample sead::MathCalcCommon::cExpTbl () 
```




<hr>



### function cLogTbl [2/2]

```C++
const MathCalcCommon < float >::LogSample sead::MathCalcCommon::cLogTbl () 
```




<hr>



### function cSinCosTbl [2/2]

```C++
const MathCalcCommon < float >::SinCosSample sead::MathCalcCommon::cSinCosTbl () 
```




<hr>



### function ceil [2/2]

```C++
inline s32 sead::MathCalcCommon::ceil (
    s32 val
) 
```




<hr>



### function cosIdx [2/2]

```C++
inline f32 sead::MathCalcCommon::cosIdx (
    u32 idx
) 
```




<hr>



### function floor [2/2]

```C++
inline s32 sead::MathCalcCommon::floor (
    s32 val
) 
```




<hr>



### function nan [2/3]

```C++
inline f32 sead::MathCalcCommon::nan () 
```




<hr>



### function nan [3/3]

```C++
inline f64 sead::MathCalcCommon::nan () 
```




<hr>



### function roundOff [2/2]

```C++
inline s32 sead::MathCalcCommon::roundOff (
    s32 val
) 
```




<hr>



### function roundUpPow2 [2/3]

```C++
inline s32 sead::MathCalcCommon::roundUpPow2 (
    u32 val,
    s32 base
) 
```




<hr>



### function roundUpPow2 [3/3]

```C++
inline s32 sead::MathCalcCommon::roundUpPow2 (
    s32 val,
    s32 base
) 
```




<hr>



### function sinCosIdx [2/2]

```C++
inline void sead::MathCalcCommon::sinCosIdx (
    f32 * pSin,
    f32 * pCos,
    u32 idx
) 
```




<hr>



### function sinIdx [2/2]

```C++
inline f32 sead::MathCalcCommon::sinIdx (
    u32 idx
) 
```




<hr>



### function tanIdx [2/2]

```C++
inline f32 sead::MathCalcCommon::tanIdx (
    u32 idx
) 
```




<hr>
## Public Static Functions Documentation




### function abs [1/3]

```C++
static inline T sead::MathCalcCommon::abs (
    T x
) 
```




<hr>



### function acos 

```C++
static T sead::MathCalcCommon::acos (
    T c
) 
```




<hr>



### function acosIdx [1/2]

```C++
static u32 sead::MathCalcCommon::acosIdx (
    T c
) 
```




<hr>



### function angleDist 

```C++
static T sead::MathCalcCommon::angleDist (
    T,
    T
) 
```




<hr>



### function asin 

```C++
static T sead::MathCalcCommon::asin (
    T s
) 
```




<hr>



### function asinIdx [1/2]

```C++
static u32 sead::MathCalcCommon::asinIdx (
    T s
) 
```




<hr>



### function atan 

```C++
static inline T sead::MathCalcCommon::atan (
    T t
) 
```




<hr>



### function atan2 

```C++
static inline T sead::MathCalcCommon::atan2 (
    T y,
    T x
) 
```




<hr>



### function atan2Idx [1/2]

```C++
static u32 sead::MathCalcCommon::atan2Idx (
    T y,
    T x
) 
```




<hr>



### function atanIdx [1/2]

```C++
static u32 sead::MathCalcCommon::atanIdx (
    T t
) 
```




<hr>



### function ceil [1/2]

```C++
static inline s32 sead::MathCalcCommon::ceil (
    T val
) 
```




<hr>



### function chase 

```C++
static inline bool sead::MathCalcCommon::chase (
    T * value,
    T target,
    T step
) 
```



Adds or subtracts `step` from `value` towards `target`. Returns whether the new value is equal to the target. 


        

<hr>



### function chaseAngle 

```C++
static bool sead::MathCalcCommon::chaseAngle (
    T *,
    T,
    T
) 
```




<hr>



### function chaseAngleIdx 

```C++
static bool sead::MathCalcCommon::chaseAngleIdx (
    u32 *,
    u32,
    s64
) 
```




<hr>



### function clamp 

```C++
static inline T sead::MathCalcCommon::clamp (
    T value,
    T low,
    T high
) 
```




<hr>



### function clamp2 

```C++
static T sead::MathCalcCommon::clamp2 (
    T min_,
    T val,
    T max_
) 
```




<hr>



### function clampMax 

```C++
static inline T sead::MathCalcCommon::clampMax (
    T val,
    T max_
) 
```




<hr>



### function clampMin 

```C++
static inline T sead::MathCalcCommon::clampMin (
    T val,
    T min_
) 
```




<hr>



### function cos 

```C++
static T sead::MathCalcCommon::cos (
    T t
) 
```




<hr>



### function cosIdx [1/2]

```C++
static T sead::MathCalcCommon::cosIdx (
    u32 idx
) 
```




<hr>



### function deg2idx 

```C++
static inline u32 sead::MathCalcCommon::deg2idx (
    T a
) 
```




<hr>



### function deg2rad 

```C++
static inline T sead::MathCalcCommon::deg2rad (
    T deg
) 
```




<hr>



### function exp 

```C++
static inline T sead::MathCalcCommon::exp (
    T t
) 
```




<hr>



### function expTable 

```C++
static T sead::MathCalcCommon::expTable (
    T x
) 
```




<hr>



### function fitSign 

```C++
static inline T sead::MathCalcCommon::fitSign (
    T value,
    T sign_value
) 
```




<hr>



### function floor [1/2]

```C++
static inline s32 sead::MathCalcCommon::floor (
    T val
) 
```




<hr>



### function gcd 

```C++
static T sead::MathCalcCommon::gcd (
    T x,
    T y
) 
```




<hr>



### function getRand 

```C++
static T sead::MathCalcCommon::getRand (
    T
) 
```




<hr>



### function getRandRange 

```C++
static T sead::MathCalcCommon::getRandRange (
    T,
    T
) 
```




<hr>



### function getRandSign 

```C++
static T sead::MathCalcCommon::getRandSign () 
```




<hr>



### function idx2deg 

```C++
static inline T sead::MathCalcCommon::idx2deg (
    u32 a
) 
```




<hr>



### function idx2rad 

```C++
static inline T sead::MathCalcCommon::idx2rad (
    u32 a
) 
```




<hr>



### function infinity 

```C++
static T sead::MathCalcCommon::infinity () 
```




<hr>



### function inv 

```C++
static T sead::MathCalcCommon::inv (
    T t
) 
```




<hr>



### function isInfinity 

```C++
static bool sead::MathCalcCommon::isInfinity (
    T
) 
```




<hr>



### function isIntersect1d 

```C++
static bool sead::MathCalcCommon::isIntersect1d (
    T,
    T,
    T,
    T
) 
```




<hr>



### function isMultiplePow2 

```C++
static bool sead::MathCalcCommon::isMultiplePow2 (
    T,
    T
) 
```




<hr>



### function isNan 

```C++
static bool sead::MathCalcCommon::isNan (
    T
) 
```




<hr>



### function isPow2 

```C++
static bool sead::MathCalcCommon::isPow2 (
    T
) 
```




<hr>



### function isZero 

```C++
static bool sead::MathCalcCommon::isZero (
    T,
    T
) 
```




<hr>



### function lcm 

```C++
static T sead::MathCalcCommon::lcm (
    T x,
    T y
) 
```




<hr>



### function lerp 

```C++
static T sead::MathCalcCommon::lerp (
    T a,
    T b,
    f32 ratio
) 
```




<hr>



### function ln2 

```C++
static inline T sead::MathCalcCommon::ln2 () 
```




<hr>



### function ln2Inv 

```C++
static inline T sead::MathCalcCommon::ln2Inv () 
```




<hr>



### function log 

```C++
static inline T sead::MathCalcCommon::log (
    T t
) 
```




<hr>



### function log10 

```C++
static inline T sead::MathCalcCommon::log10 (
    T t
) 
```




<hr>



### function log2 

```C++
static inline T sead::MathCalcCommon::log2 (
    T n
) 
```




<hr>



### function logTable 

```C++
static T sead::MathCalcCommon::logTable (
    T x
) 
```




<hr>



### function max 

```C++
static inline T sead::MathCalcCommon::max (
    T a,
    T b
) 
```




<hr>



### function max3 

```C++
static inline T sead::MathCalcCommon::max3 (
    T a,
    T b,
    T c
) 
```




<hr>



### function maxNumber 

```C++
static T sead::MathCalcCommon::maxNumber () 
```




<hr>



### function min 

```C++
static inline T sead::MathCalcCommon::min (
    T a,
    T b
) 
```




<hr>



### function min3 

```C++
static inline T sead::MathCalcCommon::min3 (
    T a,
    T b,
    T c
) 
```




<hr>



### function minNumber 

```C++
static T sead::MathCalcCommon::minNumber () 
```




<hr>



### function nan [1/3]

```C++
static T sead::MathCalcCommon::nan () 
```




<hr>



### function neg 

```C++
static T sead::MathCalcCommon::neg (
    T t
) 
```




<hr>



### function one 

```C++
static inline T sead::MathCalcCommon::one () 
```




<hr>



### function pi 

```C++
static inline T sead::MathCalcCommon::pi () 
```




<hr>



### function pi2 

```C++
static inline T sead::MathCalcCommon::pi2 () 
```




<hr>



### function piHalf 

```C++
static inline T sead::MathCalcCommon::piHalf () 
```




<hr>



### function pow 

```C++
static inline T sead::MathCalcCommon::pow (
    T x,
    T y
) 
```




<hr>



### function powTable 

```C++
static T sead::MathCalcCommon::powTable (
    T,
    T
) 
```




<hr>



### function rad2deg 

```C++
static inline T sead::MathCalcCommon::rad2deg (
    T rad
) 
```




<hr>



### function rad2idx 

```C++
static inline u32 sead::MathCalcCommon::rad2idx (
    T a
) 
```




<hr>



### function random 

```C++
static T sead::MathCalcCommon::random () 
```




<hr>



### function roundAngle 

```C++
static T sead::MathCalcCommon::roundAngle (
    T
) 
```




<hr>



### function roundDownN 

```C++
static s32 sead::MathCalcCommon::roundDownN (
    T val,
    s32 multNumber
) 
```




<hr>



### function roundDownPow2 

```C++
static s32 sead::MathCalcCommon::roundDownPow2 (
    T x,
    s32 y
) 
```




<hr>



### function roundOff [1/2]

```C++
static inline s32 sead::MathCalcCommon::roundOff (
    T val
) 
```




<hr>



### function roundUp 

```C++
static inline T sead::MathCalcCommon::roundUp (
    T x,
    s32 multNumber
) 
```




<hr>



### function roundUpPow2 [1/3]

```C++
static s32 sead::MathCalcCommon::roundUpPow2 (
    T x,
    s32 y
) 
```




<hr>



### function rsqrt 

```C++
static inline T sead::MathCalcCommon::rsqrt (
    T t
) 
```




<hr>



### function sign 

_Returns -1 for strictly negative values and 1 otherwise._ 
```C++
static inline T sead::MathCalcCommon::sign (
    T value
) 
```




<hr>



### function sin 

```C++
static T sead::MathCalcCommon::sin (
    T t
) 
```




<hr>



### function sinCosIdx [1/2]

```C++
static void sead::MathCalcCommon::sinCosIdx (
    T * p_sin,
    T * p_cos,
    u32 idx
) 
```




<hr>



### function sinIdx [1/2]

```C++
static T sead::MathCalcCommon::sinIdx (
    u32 idx
) 
```




<hr>



### function sqrt 

```C++
static inline T sead::MathCalcCommon::sqrt (
    T t
) 
```




<hr>



### function square 

```C++
static inline T sead::MathCalcCommon::square (
    T t
) 
```




<hr>



### function tan 

```C++
static T sead::MathCalcCommon::tan (
    T t
) 
```




<hr>



### function tanIdx [1/2]

```C++
static T sead::MathCalcCommon::tanIdx (
    u32 idx
) 
```




<hr>



### function zero 

```C++
static inline T sead::MathCalcCommon::zero () 
```




<hr>
## Protected Functions Documentation




### function atanIdx\_ [2/2]

```C++
u32 sead::MathCalcCommon::atanIdx_ (
    f32 t
) 
```




<hr>
## Protected Static Functions Documentation




### function assertGreaterThanOrEqualToZero\_ 

```C++
static void sead::MathCalcCommon::assertGreaterThanOrEqualToZero_ (
    T
) 
```




<hr>



### function atanIdx\_ [1/2]

```C++
static u32 sead::MathCalcCommon::atanIdx_ (
    T t
) 
```




<hr>



### function expLn2\_ 

```C++
static T sead::MathCalcCommon::expLn2_ (
    T x
) 
```




<hr>



### function log1\_2\_ 

```C++
static T sead::MathCalcCommon::log1_2_ (
    T x
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadMathCalcCommon.h`

