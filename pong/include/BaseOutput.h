//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_BASEOUTPUT_H
#define HACKEDBETA_BASEOUTPUT_H
#include <vector>

class BaseOutput {
public:
    virtual void Update(std::vector<int> ball_location, std::vector<int> paddle0_location, std::vector<int>paddle1_location) = 0;
};

#endif //HACKEDBETA_BASEOUTPUT_H
