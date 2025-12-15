

# Class sead::TListNode

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TListNode**](classsead_1_1TListNode.md)








Inherits the following classes: [sead::ListNode](classsead_1_1ListNode.md)






















## Public Attributes

| Type | Name |
| ---: | :--- |
|  T | [**mData**](#variable-mdata)  <br> |
|  [**TList**](classsead_1_1TList.md)&lt; T &gt; \* | [**mList**](#variable-mlist)  <br> |
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**TListNode**](#function-tlistnode-12) () <br> |
|   | [**TListNode**](#function-tlistnode-22) (T data) <br> |
|  void | [**erase**](#function-erase) () <br> |


## Public Functions inherited from sead::ListNode

See [sead::ListNode](classsead_1_1ListNode.md)

| Type | Name |
| ---: | :--- |
|   | [**ListNode**](classsead_1_1ListNode.md#function-listnode) () <br> |
|  bool | [**isLinked**](classsead_1_1ListNode.md#function-islinked) () const<br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**next**](classsead_1_1ListNode.md#function-next) () const<br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**prev**](classsead_1_1ListNode.md#function-prev) () const<br> |






















































## Public Attributes Documentation




### variable mData 

```C++
T sead::TListNode< T >::mData;
```




<hr>



### variable mList 

```C++
TList<T>* sead::TListNode< T >::mList;
```




<hr>
## Public Functions Documentation




### function TListNode [1/2]

```C++
inline sead::TListNode::TListNode () 
```




<hr>



### function TListNode [2/2]

```C++
inline sead::TListNode::TListNode (
    T data
) 
```




<hr>



### function erase 

```C++
inline void sead::TListNode::erase () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadTList.h`

