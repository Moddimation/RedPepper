

# File alJMapInfo.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Util**](dir_a16da3fbf3ffcc1f76dacc64c1edcc99.md) **>** [**alJMapInfo.h**](al_j_map_info_8h.md)

[Go to the documentation of this file](al_j_map_info_8h.md)


```C++
#pragma once

struct JMapItem
{
        enum Type
        {
                Long,
                String,
                Float,
                Long2,
                Short,
                Byte,
                StringPtr,
                Null
        };

        u32  mHash;
        u32  mMask;
        u16  mDataOffset;
        u8   mShift;
        Type mType;
};

struct JMapData
{
        int _0;
        int mNumData;
        int mDataOffset;
        int _C;

        const JMapItem* getItems()
        {
                return reinterpret_cast<const JMapItem*>( reinterpret_cast<const u8*>( this ) +
                                                          sizeof( JMapData ) );
        }

        const JMapItem* getItem( s32 index )
        {
                return &getItems()[ index ];
        }

        static const JMapData* fromData( const void* data )
        {
                return static_cast<const JMapData*>( data );
        }
};

class JMapInfo
{
private:
        const JMapData* mData;
        const char*     mName;

public:
        bool attach( const void* data );

        int  searchItemInfo( const char* );
        bool getValueFast( int, int index, u64* out );

public:
        JMapInfo();
};
```


