

# File alFileFunction.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**File**](dir_cdff0b7659982359c16b244fb1f9ef4f.md) **>** [**alFileFunction.h**](al_file_function_8h.md)

[Go to the documentation of this file](al_file_function_8h.md)


```C++
#pragma once

#include <prim/seadSafeString.h>

namespace al
{

bool isExistArchive( const sead::SafeString& archive );
void loadArchive( const sead::SafeString& archive );

void makeLocalizedArchivePath( sead::BufferedSafeString* out, const sead::SafeString& archive );
void makeStageDataArchivePath( sead::BufferedSafeString* out, const char* stageName, int scenario, const char* type /* Design, Map, Sound */ );

} // namespace al
```


