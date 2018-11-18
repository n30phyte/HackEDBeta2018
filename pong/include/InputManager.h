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
    InputManager(BaseInput *input0, BaseInput *input1) {
        Input0 = input0;
        Input1 = input1;
    }
    BaseInput::InputDirection GetInput1() {
        return Input0->Poll();
    }
    BaseInput::InputDirection GetInput2() {
        return Input1->Poll();

    }
private:
    BaseInput *Input0;
    BaseInput *Input1;
};
#endif //HACKEDBETA_INPUTMANAGER_H
