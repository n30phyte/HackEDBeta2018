//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_AIINPUT_H
#define HACKEDBETA_AIINPUT_H

#include "BaseInput.h"
class AIInput : public BaseInput {
public:
    AIInput();
    InputDirection Poll();
};

#endif //HACKEDBETA_AIINPUT_H
