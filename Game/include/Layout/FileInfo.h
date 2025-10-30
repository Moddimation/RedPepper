#pragma once

#include "al/Layout/LayoutActor.h"

class FileInfo : public al::LayoutActor {
    class FileSelect* mFileSelect;
    int _34;
    int _38;
    int _3C;
    bool _40;
    void* _44;
    bool _48;

public:
    FileInfo(const al::LayoutInitInfo& info, FileSelect* fileSelect);

    virtual void appear();
};
