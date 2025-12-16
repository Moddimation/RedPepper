

# Class sead::TTreeNode

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TTreeNode**](classsead_1_1_t_tree_node.md)





* `#include <seadTreeNode.h>`



Inherits the following classes: [sead::TreeNode](classsead_1_1_tree_node.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**TTreeNode**](#function-ttreenode-12) () <br> |
|   | [**TTreeNode**](#function-ttreenode-22) (T data) <br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**child**](#function-child) () const<br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**findRoot**](#function-findroot-12) () <br> |
|  const [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**findRoot**](#function-findroot-22) () const<br> |
|  void | [**insertAfterSelf**](#function-insertafterself) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  void | [**insertBeforeSelf**](#function-insertbeforeself) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**next**](#function-next) () const<br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**parent**](#function-parent) () const<br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**prev**](#function-prev) () const<br> |
|  void | [**pushBackChild**](#function-pushbackchild) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  void | [**pushBackSibling**](#function-pushbacksibling) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  void | [**pushFrontChild**](#function-pushfrontchild) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  T & | [**value**](#function-value-12) () <br> |
|  const T & | [**value**](#function-value-22) () const<br> |


## Public Functions inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1_tree_node.md)

| Type | Name |
| ---: | :--- |
|   | [**TreeNode**](classsead_1_1_tree_node.md#function-treenode) () <br> |
|  void | [**clearLinks**](classsead_1_1_tree_node.md#function-clearlinks) () <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**countChildren**](classsead_1_1_tree_node.md#function-countchildren) () const<br> |
|  void | [**detachAll**](classsead_1_1_tree_node.md#function-detachall) () <br> |
|  void | [**detachSubTree**](classsead_1_1_tree_node.md#function-detachsubtree) () <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**findRoot**](classsead_1_1_tree_node.md#function-findroot-12) () <br> |
|  const [**TreeNode**](classsead_1_1_tree_node.md) \* | [**findRoot**](classsead_1_1_tree_node.md#function-findroot-22) () const<br> |
|  void | [**insertAfterSelf**](classsead_1_1_tree_node.md#function-insertafterself) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**insertBeforeSelf**](classsead_1_1_tree_node.md#function-insertbeforeself) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**pushBackChild**](classsead_1_1_tree_node.md#function-pushbackchild) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**pushBackSibling**](classsead_1_1_tree_node.md#function-pushbacksibling) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**pushFrontChild**](classsead_1_1_tree_node.md#function-pushfrontchild) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |














## Protected Attributes

| Type | Name |
| ---: | :--- |
|  T | [**mData**](#variable-mdata)  <br> |


## Protected Attributes inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1_tree_node.md)

| Type | Name |
| ---: | :--- |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mChild**](classsead_1_1_tree_node.md#variable-mchild)  <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mNext**](classsead_1_1_tree_node.md#variable-mnext)  <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mParent**](classsead_1_1_tree_node.md#variable-mparent)  <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mPrev**](classsead_1_1_tree_node.md#variable-mprev)  <br> |
































## Protected Functions inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1_tree_node.md)

| Type | Name |
| ---: | :--- |
|  void | [**clearChildLinksRecursively\_**](classsead_1_1_tree_node.md#function-clearchildlinksrecursively_) () <br> |






## Public Functions Documentation




### function TTreeNode [1/2]

```C++
inline sead::TTreeNode::TTreeNode () 
```




<hr>



### function TTreeNode [2/2]

```C++
inline explicit sead::TTreeNode::TTreeNode (
    T data
) 
```




<hr>



### function child 

```C++
inline TTreeNode * sead::TTreeNode::child () const
```




<hr>



### function findRoot [1/2]

```C++
inline TTreeNode * sead::TTreeNode::findRoot () 
```




<hr>



### function findRoot [2/2]

```C++
inline const TTreeNode * sead::TTreeNode::findRoot () const
```




<hr>



### function insertAfterSelf 

```C++
inline void sead::TTreeNode::insertAfterSelf (
    TTreeNode * node
) 
```




<hr>



### function insertBeforeSelf 

```C++
inline void sead::TTreeNode::insertBeforeSelf (
    TTreeNode * node
) 
```




<hr>



### function next 

```C++
inline TTreeNode * sead::TTreeNode::next () const
```




<hr>



### function parent 

```C++
inline TTreeNode * sead::TTreeNode::parent () const
```




<hr>



### function prev 

```C++
inline TTreeNode * sead::TTreeNode::prev () const
```




<hr>



### function pushBackChild 

```C++
inline void sead::TTreeNode::pushBackChild (
    TTreeNode * node
) 
```




<hr>



### function pushBackSibling 

```C++
inline void sead::TTreeNode::pushBackSibling (
    TTreeNode * node
) 
```




<hr>



### function pushFrontChild 

```C++
inline void sead::TTreeNode::pushFrontChild (
    TTreeNode * node
) 
```




<hr>



### function value [1/2]

```C++
inline T & sead::TTreeNode::value () 
```




<hr>



### function value [2/2]

```C++
inline const T & sead::TTreeNode::value () const
```




<hr>
## Protected Attributes Documentation




### variable mData 

```C++
T sead::TTreeNode< T >::mData;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadTreeNode.h`

