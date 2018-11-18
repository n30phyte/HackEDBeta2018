//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_HEADLESSOUTPUT_H
#define HACKEDBETA_HEADLESSOUTPUT_H
#include "BaseOutput.h"

class HeadlessOutput : public BaseOutput {
public:
    explicit HeadlessOutput();
    void Update(std::vector<std::vector<bool>>);

private:
};

#endif //HACKEDBETA_HEADLESSOUTPUT_H
