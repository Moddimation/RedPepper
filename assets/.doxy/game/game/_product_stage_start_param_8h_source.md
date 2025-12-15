

# File ProductStageStartParam.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Sequence**](dir_05d1ac0873095376e1506e0ab9e4748f.md) **>** [**ProductStageStartParam.h**](_product_stage_start_param_8h.md)

[Go to the documentation of this file](_product_stage_start_param_8h.md)


```C++
#pragma once

class StageStartParamBase
{
public:
        virtual const char* getStageDataName();
        virtual int         getScenario();
        virtual void*       getUnk2();
        virtual void*       getUnk3();
        virtual void*       getUnk4();

private:
        virtual void gap();
        virtual void gap2();

public:
        virtual int getUnk5();
};

class ProductStageStartParam : public StageStartParamBase
{
private:
        void* unk[ 2 ];
        int   mScenario;

public:
        virtual const char* getStageDataName();

        virtual int getScenario()
        {
                return mScenario;
        }

        virtual void* getUnk2();
        virtual void* getUnk3();
        virtual void* getUnk4();

        const char* getDemoStageName() const;
};
```


