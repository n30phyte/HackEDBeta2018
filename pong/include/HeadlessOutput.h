//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_HEADLESSOUTPUT_H
#define HACKEDBETA_HEADLESSOUTPUT_H
#include "BaseOutput.h"

class HeadlessOutput : public BaseOutput {
public:
    explicit HeadlessOutput(int);
    void Update(std::vector<std::vector<bool>>);

private:
    int ID = 0;
};

#endif //HACKEDBETA_HEADLESSOUTPUT_H
