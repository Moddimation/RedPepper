

# File alLayoutKit.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Layout**](dir_46a925658b0ce4da4c2897114aabc012.md) **>** [**alLayoutKit.cpp**](alLayoutKit_8cpp.md)

[Go to the documentation of this file](alLayoutKit_8cpp.md)


```C++
#include <Execute/alExecuteDirector.h>
#include <Layout/alLayoutKit.h>

namespace al
{

LayoutKit::LayoutKit( FontHolder* fontHolder )
    : _0( nullptr ), mFontHolder( fontHolder ), mExecuteDirector( nullptr ), _C( nullptr ), _10( nullptr ),
      _14( nullptr )
{
}

void LayoutKit::createExecuteDirector( int p )
{
        mExecuteDirector      = new ExecuteDirector( p );
        mExecuteDirector->_18 = _14;
        mExecuteDirector->init();
}

} // namespace al
```


