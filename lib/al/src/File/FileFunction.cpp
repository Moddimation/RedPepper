#include <File/FileFunction.h>
#include <Message/MessageFunction.h>
#include <System/SystemKit.h>
#include <Util/StringUtil.h>

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
