

# Struct sead::TaskBase::CreateArg



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TaskBase**](classsead_1_1TaskBase.md) **>** [**CreateArg**](structsead_1_1TaskBase_1_1CreateArg.md)






















## Public Types

| Type | Name |
| ---: | :--- |
| typedef void(\* | [**SingletonFunc**](#typedef-singletonfunc)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  void \* | [**create\_callback**](#variable-create_callback)  <br> |
|  [**TaskBase**](classsead_1_1TaskBase.md) \*\* | [**created\_task**](#variable-created_task)  <br> |
|  [**TaskClassID**](classsead_1_1TaskClassID.md) | [**factory**](#variable-factory)  <br> |
|  FaderTaskBase \* | [**fader**](#variable-fader)  <br> |
|  [**HeapPolicies**](structsead_1_1HeapPolicies.md) | [**heap\_policies**](#variable-heap_policies)  <br> |
|  SingletonFunc | [**instance\_cb**](#variable-instance_cb)  <br> |
|  [**TaskParameter**](classsead_1_1TaskParameter.md) \* | [**parameter**](#variable-parameter)  <br> |
|  [**TaskBase**](classsead_1_1TaskBase.md) \* | [**parent**](#variable-parent)  <br> |
|  [**TaskBase**](classsead_1_1TaskBase.md) \* | [**src\_task**](#variable-src_task)  <br> |
|  Tag | [**tag**](#variable-tag)  <br> |
|  [**TaskUserID**](classsead_1_1TaskUserID.md) | [**user\_id**](#variable-user_id)  <br> |












































## Public Types Documentation




### typedef SingletonFunc 

```C++
typedef void(* sead::TaskBase::CreateArg::SingletonFunc) (TaskBase *);
```




<hr>
## Public Attributes Documentation




### variable create\_callback 

```C++
void* sead::TaskBase::CreateArg::create_callback;
```




<hr>



### variable created\_task 

```C++
TaskBase** sead::TaskBase::CreateArg::created_task;
```




<hr>



### variable factory 

```C++
TaskClassID sead::TaskBase::CreateArg::factory;
```




<hr>



### variable fader 

```C++
FaderTaskBase* sead::TaskBase::CreateArg::fader;
```




<hr>



### variable heap\_policies 

```C++
HeapPolicies sead::TaskBase::CreateArg::heap_policies;
```




<hr>



### variable instance\_cb 

```C++
SingletonFunc sead::TaskBase::CreateArg::instance_cb;
```




<hr>



### variable parameter 

```C++
TaskParameter* sead::TaskBase::CreateArg::parameter;
```




<hr>



### variable parent 

```C++
TaskBase* sead::TaskBase::CreateArg::parent;
```




<hr>



### variable src\_task 

```C++
TaskBase* sead::TaskBase::CreateArg::src_task;
```




<hr>



### variable tag 

```C++
Tag sead::TaskBase::CreateArg::tag;
```




<hr>



### variable user\_id 

```C++
TaskUserID sead::TaskBase::CreateArg::user_id;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/framework/seadTaskBase.h`

