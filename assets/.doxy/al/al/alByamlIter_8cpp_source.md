

# File alByamlIter.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Yaml**](dir_a36cb0e291adf6b691d9e0404ede2903.md) **>** [**alByamlIter.cpp**](alByamlIter_8cpp.md)

[Go to the documentation of this file](alByamlIter_8cpp.md)


```C++
#include <Yaml/alByamlContainerHeader.h>
#include <Yaml/alByamlData.h>
#include <Yaml/alByamlHashIter.h>
#include <Yaml/alByamlHeader.h>
#include <Yaml/alByamlIter.h>
#include <Yaml/alByamlStringTableIter.h>

namespace al
{

ByamlIter::ByamlIter() : mData( nullptr ), mRootNode( nullptr )
{
}

ByamlIter::ByamlIter( const ByamlIter& other ) : mData( other.mData ), mRootNode( other.mRootNode )
{
}

ByamlIter::ByamlIter( const u8* data ) : mData( data ), mRootNode( nullptr )
{
        if ( mData )
        {
                if ( !alByamlLocalUtil::verifiByaml( data ) )
                {
                        mData     = nullptr;
                        mRootNode = nullptr;
                        return;
                }
                int offset = mHeader->getDataOffset();
                if ( offset != 0 )
                        mRootNode = mData + this->mHeader->getDataOffset();
        }
}

bool ByamlIter::isValid() const
{
        return mData != nullptr;
}

int ByamlIter::getSize() const
{
        if ( isTypeContainer() )
                return mContainerHeader->getCount();
        return 0;
}

bool ByamlIter::isTypeArray() const
{
        return mContainerHeader != nullptr && mContainerHeader->getType() == ByamlDataType_Array;
}

bool ByamlIter::isTypeHash() const
{
        return mContainerHeader != nullptr && mContainerHeader->getType() == ByamlDataType_Hash;
}

bool ByamlIter::isTypeContainer() const
{
        return mContainerHeader != nullptr && ( mContainerHeader->getType() == ByamlDataType_Array ||
                                                      mContainerHeader->getType() == ByamlDataType_Hash );
}

int ByamlIter::getKeyIndex( const char* key ) const
{
        ByamlStringTableIter iter( mData + mHeader->getHashKeyTableOffset() );
        return iter.findStringIndex( key );
}

#pragma no_inline

#ifdef NON_MATCHING
bool ByamlIter::getByamlDataByKey( ByamlData* out, const char* key ) const
{
        if ( isTypeHash() )
        {
                int keyIndex = getKeyIndex( key );
                if ( keyIndex > -1 )
                        return ByamlHashIter( mRootNode ).getDataByKey( out, keyIndex );
        }
        return false;
}
#endif

bool ByamlIter::tryGetBoolByKey( bool* out, const char* key ) const
{
        ByamlData data;

        if ( getByamlDataByKey( &data, key ) )
                return tryConvertBool( out, &data );
        return false;
}

bool ByamlIter::tryGetIntByKey( int* out, const char* key ) const
{
        ByamlData data;

        if ( getByamlDataByKey( &data, key ) )
                return tryConvertInt( out, &data );
        return false;
}

bool ByamlIter::tryGetFloatByKey( float* out, const char* key ) const
{
        ByamlData data;

        if ( getByamlDataByKey( &data, key ) )
                return tryConvertFloat( out, &data );
        return false;
}

#pragma inline

bool ByamlIter::tryConvertBool( bool* out, const ByamlData* data ) const
{
        if ( data->getType() == ByamlDataType_Int || data->getType() == ByamlDataType_Bool )
        {
                *out = data->getIntValue();
                return true;
        }
        return false;
}

#pragma inline

bool ByamlIter::tryConvertInt( int* out, const ByamlData* data ) const
{
        if ( data->getType() == ByamlDataType_Int )
        {
                *out = data->getIntValue();
                return true;
        }
        return false;
}

#pragma inline

bool ByamlIter::tryConvertFloat( float* out, const ByamlData* data ) const
{
        if ( data->getType() == ByamlDataType_Float )
        {
                *out = data->getFloatValue();
                return true;
        }
        return false;
}

} // namespace al
```


