

# File alFileFunction.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**File**](dir_c7cfebf693984ba2b82db3972b436d51.md) **>** [**alFileFunction.cpp**](alFileFunction_8cpp.md)

[Go to the documentation of this file](alFileFunction_8cpp.md)


```C++
#include <File/alFileFunction.h>
#include <File/alFileLoader.h>
#include <Message/alMessageFunction.h>
#include <System/alSystemKit.h>
#include <Util/alStringUtil.h>

namespace al
{

void loadArchive( const sead::SafeString& archive )
{
        alProjectInterface::getSystemKit()->getFileLoader()->loadArchive(
                StringTmp<256>( "%s.szs", archive.cstr() ), nullptr );
}

void makeLocalizedArchivePath( sead::BufferedSafeString* out, const sead::SafeString& archive )
{
        out->format( "LocalizedData/%s/%s", al::getLanguage(), archive.cstr() );
}

void makeStageDataArchivePath( sead::BufferedSafeString* out, const char* stageName, int scenario, const char* type )
{
        out->format( "StageData/%s%s%d", stageName, type, scenario );
}

} // namespace al
```


