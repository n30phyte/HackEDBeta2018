//
// Created by n30phyte on 17/11/18.
//

#include <InputManager.h>

#include "InputManager.h"

InputManager::InputManager(BaseInput *input1, BaseInput *input2) {
    Input1 = input1;
    Input2 = input2;
}
BaseInput::InputDirection InputManager::GetInput2() {
    return Input2->Poll();
}
BaseInput::InputDirection InputManager::GetInput1() {
    return Input2->Poll();
}
