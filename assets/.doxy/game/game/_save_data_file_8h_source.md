

# File SaveDataFile.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**System**](dir_c0426a53c0d1b4dc4e9c5ae921c9f2ce.md) **>** [**SaveDataFile.h**](_save_data_file_8h.md)

[Go to the documentation of this file](_save_data_file_8h.md)


```C++
#pragma once

class CourseList;

class SaveDataFile
{
private:
        u8  _0[ 0x3e ];
        u16 mNumLife;
        u16 mNumCoinCollect;
        u8  _42[ 0x1a ];

public:
        void initializeData( CourseList* courseList );

public:
        SaveDataFile();
};
```


