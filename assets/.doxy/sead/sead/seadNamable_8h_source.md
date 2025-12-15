

# File seadNamable.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadNamable.h**](seadNamable_8h.md)

[Go to the documentation of this file](seadNamable_8h.md)


```C++
#ifndef SEAD_NAMABLE_H_
#define SEAD_NAMABLE_H_

#include <prim/seadSafeString.h>

namespace sead {

class INamable {
public:
    INamable();

    explicit INamable(const SafeString& name) : mINamableName(name) {}

    const SafeString& getName() const { return mINamableName; }

    void setName(const SafeString& name) { mINamableName = name; }

private:
    SafeString mINamableName;
};

}  // namespace sead

#endif  // SEAD_NAMABLE_H_
```


