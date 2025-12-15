

# File CourseList.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**System**](dir_c0426a53c0d1b4dc4e9c5ae921c9f2ce.md) **>** [**CourseList.h**](_course_list_8h.md)

[Go to the documentation of this file](_course_list_8h.md)


```C++
#pragma once

namespace al
{
class Resource;
class ByamlIter;
} // namespace al

class CourseList
{
public:
        void init( const al::Resource* gameSystemDataTable );

private:
        struct Course
        {
                enum CourseType
                {
                        CourseType_Normal,
                        CourseType_KoopaCastle,
                        CourseType_KoopaFortress,
                        CourseType_KoopaBattleShip,
                        CourseType_Championship,
                        CourseType_KinopioHousePresent,
                        CourseType_KinopioHouseAlbum,
                        CourseType_MysteryBox,
                        CourseType_Dokan,
                        CourseType_Empty = 10
                };

                int         mCourseType;
                const char* mStageName;
                int         mScenario;
                const char* mMiniatureModelName;
                int         mCoinCollectNum;

                Course( const al::ByamlIter* course );

                static bool isCourseTypeStage( CourseType type );
        };

        struct World
        {
                Course** mCourses;
                int      mNumCourses;
                bool     mIsSpecialWorld;

                World( const al::ByamlIter* world );
        };

        struct List
        {
                World** mWorlds;
                int     mNumWorlds;

                List( const al::ByamlIter& courseListIter );
        };

        List* mCourseList;
        int   mNumStages;

public:
        CourseList();
};

namespace rp
{

CourseList* getCourseList();

} // namespace rp
```


