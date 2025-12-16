

# Namespace sead::system



[**Namespace List**](namespaces.md) **>** [**sead**](namespacesead.md) **>** [**system**](namespacesead_1_1system.md)


















## Namespaces

| Type | Name |
| ---: | :--- |
| namespace | [**detail**](namespacesead_1_1system_1_1detail.md) <br> |
























## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**DebugBreak**](#function-debugbreak) () <br> |
|  void | [**Halt**](#function-halt) () <br> |
|  void | [**HaltWithDetail**](#function-haltwithdetail) (const char \* file, int line, const char \* msg, ...) <br> |
|  void | [**HaltWithDetailNoFormat**](#function-haltwithdetailnoformat) (const char \* file, int line, const char \* msg) <br> |
|  void | [**Print**](#function-print) (const char \* format, ...) <br> |
|  void | [**PrintString**](#function-printstring) (const char \* format, [**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
|  void | [**PrintV**](#function-printv) (const char \* format, va\_list) <br> |
|  void | [**SetWarningEnable**](#function-setwarningenable) (bool enable) <br> |
|  void | [**Warning**](#function-warning) (const char \* file, int line, const char \* msg, ...) <br> |




























## Public Functions Documentation




### function DebugBreak 

```C++
void sead::system::DebugBreak () 
```




<hr>



### function Halt 

```C++
void sead::system::Halt () 
```




<hr>



### function HaltWithDetail 

```C++
void sead::system::HaltWithDetail (
    const char * file,
    int line,
    const char * msg,
    ...
) 
```




<hr>



### function HaltWithDetailNoFormat 

```C++
void sead::system::HaltWithDetailNoFormat (
    const char * file,
    int line,
    const char * msg
) 
```




<hr>



### function Print 

```C++
void sead::system::Print (
    const char * format,
    ...
) 
```




<hr>



### function PrintString 

```C++
void sead::system::PrintString (
    const char * format,
    s32
) 
```




<hr>



### function PrintV 

```C++
void sead::system::PrintV (
    const char * format,
    va_list
) 
```




<hr>



### function SetWarningEnable 

```C++
void sead::system::SetWarningEnable (
    bool enable
) 
```




<hr>



### function Warning 

```C++
void sead::system::Warning (
    const char * file,
    int line,
    const char * msg,
    ...
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/basis/seadRawPrint.h`

