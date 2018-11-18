//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_INPUTMANAGER_H
#define HACKEDBETA_INPUTMANAGER_H

#include <type_traits>

#include "BaseInput.h"

#include "KeyboardInput.h"
#include "AIInput.h"

class InputManager {
public:
    InputManager(BaseInput *, BaseInput *);
    BaseInput::InputDirection GetInput1();
    BaseInput::InputDirection GetInput2();
private:
    BaseInput *Input1;
    BaseInput *Input2;
};

#endif //HACKEDBETA_INPUTMANAGER_H
