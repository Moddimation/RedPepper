

# File svc\_Api.h

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**include**](dir_b105e27ad861a359b82da8d20daf787e.md) **>** [**nn**](dir_98edea970dce97b73b2af390faecf17b.md) **>** [**svc**](dir_b35d2e76648bb67c54723d7f8ee92489.md) **>** [**svc\_Api.h**](svc__Api_8h.md)

[Go to the documentation of this file](svc__Api_8h.md)


```C++
#pragma once

#include <nn/Handle.h>
#include <nn/Result.h>
#include <nn/dbg/dbg_Types.h>
#include <nn/os/os_Types.h>

namespace nn {
namespace svc {
    __asm nn::Result ControlMemory(u32* addr, u32 addr0, u32 addr1, u32 size, u32 op, u32 perms);
    __asm void ExitProcess();
    __asm void SleepThread(u64 nanos);
    __asm nn::Result GetThreadPriority(s32* prio, nn::Handle thread);
    __asm nn::Result CreateMutex(nn::Handle* mutex, bool initialLocked);
    __asm nn::Result CreateEvent(nn::Handle* event, nn::os::ResetType type);
    __asm nn::Result CreateMemoryBlock(nn::Handle* memblock, u32 addr, u32 size, u32 myperms, u32 otherperms);
    __asm nn::Result CreateAddressArbiter(nn::Handle* arbiter);
    __asm nn::Result ArbitrateAddress(nn::Handle arbiter, uintptr_t addr, nn::os::ArbitrationType type, s32 value, s64 ns);
    __asm nn::Result CloseHandle(nn::Handle handle);
    __asm nn::Result WaitSynchronizationN(int* out, const nn::Handle* handles, s32 handleCount, bool waitAll, s64 timeout_ns);
    __asm nn::Result DuplicateHandle(nn::Handle* out, nn::Handle original);
    __asm nn::Result ConnectToPort(nn::Handle* port, const char* portName);
    __asm nn::Result GetProcessId(unsigned int* id, nn::Handle handle);
    __asm nn::Result GetThreadId(unsigned int* id, nn::Handle handle);
    __asm nn::Result GetResourceLimit(Handle* resourceLimit, nn::Handle handle);

    // Debug
    __asm nn::Result Break(nn::dbg::BreakReason reason);

} // namespace svc
} // namespace nn
```


