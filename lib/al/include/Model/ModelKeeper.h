#pragma once

#include <math/seadMatrix.h>
#include <Model/alModelCtr.h>

namespace al {

class ModelKeeper {
    alModelCtr* mModel;

public:
    alModelCtr* getModel() const { return mModel; }

    void hide();
};

const sead::Matrix34f* getJointMtxPtr(ModelKeeper* keeper, const char* jointName);

}  // namespace al
