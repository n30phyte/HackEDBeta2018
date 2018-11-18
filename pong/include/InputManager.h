//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_INPUTMANAGER_H
#define HACKEDBETA_INPUTMANAGER_H

#include <type_traits>

#include "BaseInput.h"

#include "KeyboardInput.h"
#include "AIInput.h"

template<typename InputType1, typename InputType2>
class InputManager {
public:
    InputManager();
    BaseInput::InputDirection GetInput1();
    BaseInput::InputDirection GetInput2();
private:
    InputType1 Input1;
    InputType2 Input2;
};

template<typename InputType1, typename InputType2>
BaseInput::InputDirection InputManager<InputType1, InputType2>::GetInput1() {
    return Input1.Poll();
}

template<typename InputType1, typename InputType2>
BaseInput::InputDirection InputManager<InputType1, InputType2>::GetInput2() {
    return Input2.Poll();
}

template<typename InputType1, typename InputType2>
InputManager<InputType1, InputType2>::InputManager() {
    static_assert(
            std::is_base_of<BaseInput, InputType1>::value,
            "Input1 must be a base of BaseInput"
    );

    static_assert(
            std::is_base_of<BaseInput, InputType2>::value,
            "Input2 must be a base of BaseInput"
    );

}

#endif //HACKEDBETA_INPUTMANAGER_H
