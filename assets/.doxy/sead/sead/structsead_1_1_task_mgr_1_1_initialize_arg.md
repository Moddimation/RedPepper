

# Struct sead::TaskMgr::InitializeArg



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TaskMgr**](classsead_1_1_task_mgr.md) **>** [**InitializeArg**](structsead_1_1_task_mgr_1_1_initialize_arg.md)





* `#include <seadTaskMgr.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**create\_queue\_size**](#variable-create_queue_size)  <br> |
|  [**Heap**](classsead_1_1_heap.md) \* | [**heap**](#variable-heap)  <br> |
|  Framework \* | [**parent\_framework**](#variable-parent_framework)  <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**prepare\_priority**](#variable-prepare_priority)  <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**prepare\_stack\_size**](#variable-prepare_stack_size)  <br> |
|  const [**TaskBase::CreateArg**](structsead_1_1_task_base_1_1_create_arg.md) & | [**roottask\_create\_arg**](#variable-roottask_create_arg)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**InitializeArg**](#function-initializearg) (const [**TaskBase::CreateArg**](structsead_1_1_task_base_1_1_create_arg.md) & roottask\_arg) <br> |




























## Public Attributes Documentation




### variable create\_queue\_size 

```C++
u32 sead::TaskMgr::InitializeArg::create_queue_size;
```




<hr>



### variable heap 

```C++
Heap* sead::TaskMgr::InitializeArg::heap;
```




<hr>



### variable parent\_framework 

```C++
Framework* sead::TaskMgr::InitializeArg::parent_framework;
```




<hr>



### variable prepare\_priority 

```C++
s32 sead::TaskMgr::InitializeArg::prepare_priority;
```




<hr>



### variable prepare\_stack\_size 

```C++
u32 sead::TaskMgr::InitializeArg::prepare_stack_size;
```




<hr>



### variable roottask\_create\_arg 

```C++
const TaskBase::CreateArg& sead::TaskMgr::InitializeArg::roottask_create_arg;
```




<hr>
## Public Functions Documentation




### function InitializeArg 

```C++
inline sead::TaskMgr::InitializeArg::InitializeArg (
    const TaskBase::CreateArg & roottask_arg
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/framework/seadTaskMgr.h`

