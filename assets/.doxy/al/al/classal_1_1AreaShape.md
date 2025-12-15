

# Class al::AreaShape



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**AreaShape**](classal_1_1AreaShape.md)










Inherited by the following classes: [al::AreaShapeCube](classal_1_1AreaShapeCube.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**AreaShape**](#function-areashape) () <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**calcLocalPos**](#function-calclocalpos) (sead::Vector3f \* out, [**const**](structal_1_1NameToCreator.md) sead::Vector3f & trans) const<br> |
| virtual [**bool**](structal_1_1NameToCreator.md) | [**isInVolume**](#function-isinvolume) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & trans) const = 0<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**setBaseMtxPtr**](#function-setbasemtxptr) ([**const**](structal_1_1NameToCreator.md) sead::Matrix34f \* baseMtxPtr) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**setScale**](#function-setscale) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & scale) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v1**](#function-v1) () = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v2**](#function-v2) () = 0<br> |




























## Public Functions Documentation




### function AreaShape 

```C++
al::AreaShape::AreaShape () 
```




<hr>



### function calcLocalPos 

```C++
bool al::AreaShape::calcLocalPos (
    sead::Vector3f * out,
    const sead::Vector3f & trans
) const
```




<hr>



### function isInVolume 

```C++
virtual bool al::AreaShape::isInVolume (
    const sead::Vector3f & trans
) const = 0
```




<hr>



### function setBaseMtxPtr 

```C++
inline void al::AreaShape::setBaseMtxPtr (
    const sead::Matrix34f * baseMtxPtr
) 
```




<hr>



### function setScale 

```C++
void al::AreaShape::setScale (
    const sead::Vector3f & scale
) 
```




<hr>



### function v1 

```C++
virtual void al::AreaShape::v1 () = 0
```




<hr>



### function v2 

```C++
virtual void al::AreaShape::v2 () = 0
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/AreaObj/alAreaShape.h`

