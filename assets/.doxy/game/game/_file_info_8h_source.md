

# File FileInfo.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Layout**](dir_2f80a5ab660f553eed8f75571fa5fcce.md) **>** [**FileInfo.h**](_file_info_8h.md)

[Go to the documentation of this file](_file_info_8h.md)


```C++
#pragma once

#include <Layout/alLayoutActor.h>

class FileInfo : public al::LayoutActor
{
private:
        class FileSelect* mFileSelect;
        int               _34;
        int               _38;
        int               _3C;
        bool              _40;
        void*             _44;
        bool              _48;

public:
        virtual void appear();

public:
        FileInfo( const al::LayoutInitInfo& info, FileSelect* fileSelect );
};
```


