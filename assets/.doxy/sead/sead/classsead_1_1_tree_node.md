

# Class sead::TreeNode



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TreeNode**](classsead_1_1_tree_node.md)





* `#include <seadTreeNode.h>`





Inherited by the following classes: [sead::TTreeNode](classsead_1_1_t_tree_node.md),  [sead::TTreeNode](classsead_1_1_t_tree_node.md),  [sead::TTreeNode](classsead_1_1_t_tree_node.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**TreeNode**](#function-treenode) () <br> |
|  void | [**clearLinks**](#function-clearlinks) () <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**countChildren**](#function-countchildren) () const<br> |
|  void | [**detachAll**](#function-detachall) () <br> |
|  void | [**detachSubTree**](#function-detachsubtree) () <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**findRoot**](#function-findroot-12) () <br> |
|  const [**TreeNode**](classsead_1_1_tree_node.md) \* | [**findRoot**](#function-findroot-22) () const<br> |
|  void | [**insertAfterSelf**](#function-insertafterself) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**insertBeforeSelf**](#function-insertbeforeself) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**pushBackChild**](#function-pushbackchild) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**pushBackSibling**](#function-pushbacksibling) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**pushFrontChild**](#function-pushfrontchild) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mChild**](#variable-mchild)  <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mNext**](#variable-mnext)  <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mParent**](#variable-mparent)  <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mPrev**](#variable-mprev)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  void | [**clearChildLinksRecursively\_**](#function-clearchildlinksrecursively_) () <br> |




## Public Functions Documentation




### function TreeNode 

```C++
sead::TreeNode::TreeNode () 
```




<hr>



### function clearLinks 

```C++
void sead::TreeNode::clearLinks () 
```




<hr>



### function countChildren 

```C++
s32 sead::TreeNode::countChildren () const
```




<hr>



### function detachAll 

```C++
void sead::TreeNode::detachAll () 
```




<hr>



### function detachSubTree 

```C++
void sead::TreeNode::detachSubTree () 
```




<hr>



### function findRoot [1/2]

```C++
TreeNode * sead::TreeNode::findRoot () 
```




<hr>



### function findRoot [2/2]

```C++
const TreeNode * sead::TreeNode::findRoot () const
```




<hr>



### function insertAfterSelf 

```C++
void sead::TreeNode::insertAfterSelf (
    TreeNode * node
) 
```




<hr>



### function insertBeforeSelf 

```C++
void sead::TreeNode::insertBeforeSelf (
    TreeNode * node
) 
```




<hr>



### function pushBackChild 

```C++
void sead::TreeNode::pushBackChild (
    TreeNode * node
) 
```




<hr>



### function pushBackSibling 

```C++
void sead::TreeNode::pushBackSibling (
    TreeNode * node
) 
```




<hr>



### function pushFrontChild 

```C++
void sead::TreeNode::pushFrontChild (
    TreeNode * node
) 
```




<hr>
## Protected Attributes Documentation




### variable mChild 

```C++
TreeNode* sead::TreeNode::mChild;
```




<hr>



### variable mNext 

```C++
TreeNode* sead::TreeNode::mNext;
```




<hr>



### variable mParent 

```C++
TreeNode* sead::TreeNode::mParent;
```




<hr>



### variable mPrev 

```C++
TreeNode* sead::TreeNode::mPrev;
```




<hr>
## Protected Functions Documentation




### function clearChildLinksRecursively\_ 

```C++
void sead::TreeNode::clearChildLinksRecursively_ () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadTreeNode.h`

