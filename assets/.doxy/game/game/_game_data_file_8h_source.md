

# File GameDataFile.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**System**](dir_c0426a53c0d1b4dc4e9c5ae921c9f2ce.md) **>** [**GameDataFile.h**](_game_data_file_8h.md)

[Go to the documentation of this file](_game_data_file_8h.md)


```C++
#pragma once

class CourseList;

class GameDataFile
{
private:
        u8   _0[ 0x44 ];
        bool mIs3DOn;

public:
        GameDataFile( CourseList* courseList );
};
```


