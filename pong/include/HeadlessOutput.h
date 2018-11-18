//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_HEADLESSOUTPUT_H
#define HACKEDBETA_HEADLESSOUTPUT_H
#include "BaseOutput.h"
#include <vector>
#include "pipe.pb.h"

class HeadlessOutput : public BaseOutput {
public:
    explicit HeadlessOutput();
    void Update(std::vector<int>, std::vector<int>, std::vector<int>);

private:
};

#endif //HACKEDBETA_HEADLESSOUTPUT_H
