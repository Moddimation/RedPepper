

# File ProductSequence.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Sequence**](dir_05d1ac0873095376e1506e0ab9e4748f.md) **>** [**ProductSequence.h**](_product_sequence_8h.md)

[Go to the documentation of this file](_product_sequence_8h.md)


```C++
#pragma once

#include <Sequence/alSequence.h>

class ProductStageStartParam;
class StageWipeKeeper;
class ProductStateStage;
class ProductStateTitle;
class ProductStateOpening;
class ProductStateKinopioHouse;
class ProductStateMysteryBox;
class ProductStateEnding;
class ProductStateGameOverRoom;

class ProductSequence : public al::Sequence
{
private:
        ProductStageStartParam* mStageStartParam;
        void*                   _14C;
        void*                   _150;

        StageWipeKeeper*          mWipeKeeper;
        void*                     _158;
        void*                     _15C;
        ProductStateTitle*        mStateTitle;
        ProductStateOpening*      mStateOpening;
        ProductStateTitle*        mStateCourseSelect;
        ProductStateStage*        mStateStage;
        ProductStateKinopioHouse* mStateKinopioHouse;
        ProductStateMysteryBox*   mStateMysteryBox;
        ProductStateEnding*       mStateEnding;
        ProductStateGameOverRoom* mStateGameOverRoom;
        int                       _180;
        void*                     _184;
        void*                     _188;
        void*                     _18C;
        void*                     _190;

public:
        void exeTitle();
        void exeOpening();
        void exeCourseSelect();
        void exeStage();
        void exeKinopioHouse();
        void exeMysteryBox();
        void exeEnding();
        void exeGameOverRoom();
        void exeUnk1();

public:
        virtual void init();
        virtual void update();
        virtual bool isDisposable() const;

public:
        ProductSequence( const char* name );
};
```


