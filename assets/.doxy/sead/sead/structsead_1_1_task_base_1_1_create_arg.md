

# Struct sead::TaskBase::CreateArg



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TaskBase**](classsead_1_1_task_base.md) **>** [**CreateArg**](structsead_1_1_task_base_1_1_create_arg.md)





* `#include <seadTaskBase.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef void(\* | [**SingletonFunc**](#typedef-singletonfunc)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  void \* | [**create\_callback**](#variable-create_callback)  <br> |
|  [**TaskBase**](classsead_1_1_task_base.md) \*\* | [**created\_task**](#variable-created_task)  <br> |
|  [**TaskClassID**](classsead_1_1_task_class_i_d.md) | [**factory**](#variable-factory)  <br> |
|  FaderTaskBase \* | [**fader**](#variable-fader)  <br> |
|  [**HeapPolicies**](structsead_1_1_heap_policies.md) | [**heap\_policies**](#variable-heap_policies)  <br> |
|  [**SingletonFunc**](structsead_1_1_task_base_1_1_create_arg.md#typedef-singletonfunc) | [**instance\_cb**](#variable-instance_cb)  <br> |
|  [**TaskParameter**](classsead_1_1_task_parameter.md) \* | [**parameter**](#variable-parameter)  <br> |
|  [**TaskBase**](classsead_1_1_task_base.md) \* | [**parent**](#variable-parent)  <br> |
|  [**TaskBase**](classsead_1_1_task_base.md) \* | [**src\_task**](#variable-src_task)  <br> |
|  [**Tag**](classsead_1_1_task_base.md#enum-tag) | [**tag**](#variable-tag)  <br> |
|  [**TaskUserID**](classsead_1_1_task_user_i_d.md) | [**user\_id**](#variable-user_id)  <br> |












































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

