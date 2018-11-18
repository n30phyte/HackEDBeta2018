//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_AIINPUT_H
#define HACKEDBETA_AIINPUT_H

#include "BaseInput.h"
class AIInput : public BaseInput {
public:
    InputDirection Poll() override;
};

#endif //HACKEDBETA_AIINPUT_H
