

# Namespace nn::os



[**Namespace List**](namespaces.md) **>** [**nn**](namespacenn.md) **>** [**os**](namespacenn_1_1os.md)




















## Classes

| Type | Name |
| ---: | :--- |
| class | [**EventBase**](classnn_1_1os_1_1EventBase.md) <br> |
| struct | [**HandleObject**](structnn_1_1os_1_1HandleObject.md) <br> |
| class | [**InterruptEvent**](classnn_1_1os_1_1InterruptEvent.md) <br> |
| struct | [**KConfigMemory**](structnn_1_1os_1_1KConfigMemory.md) <br> |
| class | [**WaitObject**](classnn_1_1os_1_1WaitObject.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**ArbitrationType**](#enum-arbitrationtype)  <br>_Arbitration modes._  |
| enum  | [**ResetType**](#enum-resettype)  <br>_Reset Types._  |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  u32 | [**GetAppMemorySize**](#function-getappmemorysize) () <br> |
|  const [**KConfigMemory**](structnn_1_1os_1_1KConfigMemory.md) \* | [**GetKConfigMemory**](#function-getkconfigmemory) () <br> |




























## Public Types Documentation




### enum ArbitrationType 

_Arbitration modes._ 
```C++
enum nn::os::ArbitrationType {
    ArbitrationType_SIGNAL = 0,
    ArbitrationType_WAIT_IF_LESS_THAN = 1,
    ArbitrationType_DECREMENT_AND_WAIT_IF_LESS_THAN = 2,
    ArbitrationType_WAIT_IF_LESS_THAN_TIMEOUT = 3,
    ArbitrationType_DECREMENT_AND_WAIT_IF_LESS_THAN_TIMEOUT = 4
};
```




<hr>



### enum ResetType 

_Reset Types._ 
```C++
enum nn::os::ResetType {
    ResetType_ONESHOT = 0,
    ResetType_STICKY = 1,
    ResetType_PULSE = 2
};
```




<hr>
## Public Functions Documentation




### function GetAppMemorySize 

```C++
u32 nn::os::GetAppMemorySize () 
```




<hr>



### function GetKConfigMemory 

```C++
inline const KConfigMemory * nn::os::GetKConfigMemory () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/CTRSDK/include/nn/os/os_EventBase.h`

