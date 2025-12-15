

# Class al::Scene



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**Scene**](classal_1_1Scene.md)








Inherits the following classes: [al::NerveExecutor](classal_1_1NerveExecutor.md),  [al::IUseAudioKeeper](classal_1_1IUseAudioKeeper.md)






























































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Scene**](#function-scene) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**appear**](#function-appear) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**control**](#function-control) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**draw3D**](#function-draw3d) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**drawEffect**](#function-draweffect) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**drawMainBottom**](#function-drawmainbottom) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**drawMainTop**](#function-drawmaintop) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**drawSubButtom**](#function-drawsubbuttom) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**drawSubTop**](#function-drawsubtop) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**endInit**](#function-endinit) ([**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & info) <br> |
|  [**ActorFactory**](classal_1_1ActorFactory.md) \* | [**getActorFactory**](#function-getactorfactory) () const<br> |
| virtual [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**getAudioKeeper**](#function-getaudiokeeper) () const<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**init**](#function-init) () = 0<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initActorFactory**](#function-initactorfactory) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initAndLoadStageResource**](#function-initandloadstageresource) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* stageName, [**int**](structal_1_1NameToCreator.md) scenario, sead::Heap \* heap) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initCameraDirector**](#function-initcameradirector) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initLayoutKit**](#function-initlayoutkit) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initLiveActorKit**](#function-initliveactorkit) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initSceneAudio**](#function-initsceneaudio) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* stageName, [**int**](structal_1_1NameToCreator.md) scenario, [**int**](structal_1_1NameToCreator.md), [**const**](structal_1_1NameToCreator.md) sead::SafeString &, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* userName) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initSceneObjHolder**](#function-initsceneobjholder) () <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isAlive**](#function-isalive) () const<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**kill**](#function-kill) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**movement**](#function-movement) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**unk5**](#function-unk5) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**unk6**](#function-unk6) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**unk7**](#function-unk7) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**unk8**](#function-unk8) () <br> |


## Public Functions inherited from al::NerveExecutor

See [al::NerveExecutor](classal_1_1NerveExecutor.md)

| Type | Name |
| ---: | :--- |
|   | [**NerveExecutor**](classal_1_1NerveExecutor.md#function-nerveexecutor) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](classal_1_1NerveExecutor.md#function-getnervekeeper) () const<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initNerve**](classal_1_1NerveExecutor.md#function-initnerve) ([**const**](structal_1_1NameToCreator.md) [**Nerve**](structal_1_1Nerve.md) \* nrv, [**int**](structal_1_1NameToCreator.md) step=0) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**updateNerve**](classal_1_1NerveExecutor.md#function-updatenerve) () <br> |
| virtual  | [**~NerveExecutor**](classal_1_1NerveExecutor.md#function-nerveexecutor) () <br> |


## Public Functions inherited from al::IUseNerve

See [al::IUseNerve](classal_1_1IUseNerve.md)

| Type | Name |
| ---: | :--- |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](classal_1_1IUseNerve.md#function-getnervekeeper) () const = 0<br> |


## Public Functions inherited from al::IUseAudioKeeper

See [al::IUseAudioKeeper](classal_1_1IUseAudioKeeper.md)

| Type | Name |
| ---: | :--- |
| virtual [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**getAudioKeeper**](classal_1_1IUseAudioKeeper.md#function-getaudiokeeper) () const = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v1**](classal_1_1IUseAudioKeeper.md#function-v1) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v2**](classal_1_1IUseAudioKeeper.md#function-v2) () <br> |










































































































## Public Functions Documentation




### function Scene 

```C++
al::Scene::Scene (
    const  char * name
) 
```




<hr>



### function appear 

```C++
virtual void al::Scene::appear () 
```




<hr>



### function control 

```C++
virtual void al::Scene::control () 
```




<hr>



### function draw3D 

```C++
inline virtual void al::Scene::draw3D () 
```




<hr>



### function drawEffect 

```C++
inline virtual void al::Scene::drawEffect () 
```




<hr>



### function drawMainBottom 

```C++
inline virtual void al::Scene::drawMainBottom () 
```




<hr>



### function drawMainTop 

```C++
inline virtual void al::Scene::drawMainTop () 
```




<hr>



### function drawSubButtom 

```C++
inline virtual void al::Scene::drawSubButtom () 
```




<hr>



### function drawSubTop 

```C++
inline virtual void al::Scene::drawSubTop () 
```




<hr>



### function endInit 

```C++
void al::Scene::endInit (
    const  ActorInitInfo & info
) 
```




<hr>



### function getActorFactory 

```C++
inline ActorFactory * al::Scene::getActorFactory () const
```




<hr>



### function getAudioKeeper 

```C++
virtual AudioKeeper * al::Scene::getAudioKeeper () const
```



Implements [*al::IUseAudioKeeper::getAudioKeeper*](classal_1_1IUseAudioKeeper.md#function-getaudiokeeper)


<hr>



### function init 

```C++
virtual void al::Scene::init () = 0
```




<hr>



### function initActorFactory 

```C++
void al::Scene::initActorFactory () 
```




<hr>



### function initAndLoadStageResource 

```C++
void al::Scene::initAndLoadStageResource (
    const  char * stageName,
    int scenario,
    sead::Heap * heap
) 
```




<hr>



### function initCameraDirector 

```C++
void al::Scene::initCameraDirector () 
```




<hr>



### function initLayoutKit 

```C++
void al::Scene::initLayoutKit () 
```




<hr>



### function initLiveActorKit 

```C++
void al::Scene::initLiveActorKit () 
```




<hr>



### function initSceneAudio 

```C++
void al::Scene::initSceneAudio (
    const  char * stageName,
    int scenario,
    int,
    const sead::SafeString &,
    const  char * userName
) 
```




<hr>



### function initSceneObjHolder 

```C++
void al::Scene::initSceneObjHolder () 
```




<hr>



### function isAlive 

```C++
inline bool al::Scene::isAlive () const
```




<hr>



### function kill 

```C++
virtual void al::Scene::kill () 
```




<hr>



### function movement 

```C++
virtual void al::Scene::movement () 
```




<hr>



### function unk5 

```C++
inline virtual void al::Scene::unk5 () 
```




<hr>



### function unk6 

```C++
inline virtual void al::Scene::unk6 () 
```




<hr>



### function unk7 

```C++
inline virtual void al::Scene::unk7 () 
```




<hr>



### function unk8 

```C++
inline virtual void al::Scene::unk8 () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Scene/alScene.h`

