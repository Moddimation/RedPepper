#pragma once

#include <Camera/CameraDashAngleTunerParam.h>
#include <Camera/CameraParamVision.h>
#include <Camera/CameraRotatorParam.h>
#include <System/Byaml/ByamlIter.h>
#include <math/seadVector.h>

namespace al
{

class CameraUnknownParam
{
        u8 _0;

public:
        CameraUnknownParam() : _0( 0 )
        {
        }
};

class Camera
{
        const char* const mName;

#ifdef __CC_ARM
protected:
#else
public:
#endif
        sead::Vector3f             _8;
        sead::Vector3f             mPos;
        sead::Vector3f             mTarget;
        sead::Vector3f             _2C;
        int                        mInterpoleFrame;
        CameraParamVision*         mVisionParam;
        CameraDashAngleTunerParam* mDashAngleTunerParam;
        CameraUnknownParam*        mUnknownParam;
        CameraRotatorParam*        mRotatorParam;

public:
        Camera( const char* name );

        virtual void load( const ByamlIter* ticket );
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void calc();
        virtual void v7();
};

const sead::Vector3f* getCameraPos();

} // namespace al
