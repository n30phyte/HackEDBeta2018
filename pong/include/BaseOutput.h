//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_BASEOUTPUT_H
#define HACKEDBETA_BASEOUTPUT_H
#include <vector>

class BaseOutput {
public:
    virtual void Update(std::vector<std::vector<bool>>) = 0;
};

#endif //HACKEDBETA_BASEOUTPUT_H
