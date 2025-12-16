

# File alFileLoader.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**File**](dir_cdff0b7659982359c16b244fb1f9ef4f.md) **>** [**alFileLoader.h**](al_file_loader_8h.md)

[Go to the documentation of this file](al_file_loader_8h.md)


```C++
#pragma once

#include <prim/seadSafeString.h>

namespace sead
{
class FileDevice;
}

namespace al
{

class FileLoader
{
private:
        u8 _0[ 0x30 ];

public:
        void loadArchive( const sead::SafeString& archive, sead::FileDevice* );

public:
        FileLoader( int );
};

} // namespace al
```


