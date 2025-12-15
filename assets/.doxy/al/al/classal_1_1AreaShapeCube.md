

# Class al::AreaShapeCube



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**AreaShapeCube**](classal_1_1AreaShapeCube.md)








Inherits the following classes: [al::AreaShape](classal_1_1AreaShape.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**AreaShapeCube**](#function-areashapecube) ([**bool**](structal_1_1NameToCreator.md) isCubeBase) <br> |
| virtual [**bool**](structal_1_1NameToCreator.md) | [**isInVolume**](#function-isinvolume) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & trans) const<br> |


## Public Functions inherited from al::AreaShape

See [al::AreaShape](classal_1_1AreaShape.md)

| Type | Name |
| ---: | :--- |
|   | [**AreaShape**](classal_1_1AreaShape.md#function-areashape) () <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**calcLocalPos**](classal_1_1AreaShape.md#function-calclocalpos) (sead::Vector3f \* out, [**const**](structal_1_1NameToCreator.md) sead::Vector3f & trans) const<br> |
| virtual [**bool**](structal_1_1NameToCreator.md) | [**isInVolume**](classal_1_1AreaShape.md#function-isinvolume) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & trans) const = 0<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**setBaseMtxPtr**](classal_1_1AreaShape.md#function-setbasemtxptr) ([**const**](structal_1_1NameToCreator.md) sead::Matrix34f \* baseMtxPtr) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**setScale**](classal_1_1AreaShape.md#function-setscale) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & scale) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v1**](classal_1_1AreaShape.md#function-v1) () = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v2**](classal_1_1AreaShape.md#function-v2) () = 0<br> |






















































## Public Functions Documentation




### function AreaShapeCube 

```C++
al::AreaShapeCube::AreaShapeCube (
    bool isCubeBase
) 
```




<hr>



### function isInVolume 

```C++
virtual bool al::AreaShapeCube::isInVolume (
    const sead::Vector3f & trans
) const
```



Implements [*al::AreaShape::isInVolume*](classal_1_1AreaShape.md#function-isinvolume)


<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/AreaObj/alAreaShapeCube.h`

