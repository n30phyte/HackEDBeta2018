//
// Created by n30phyte on 17/11/18.
//

#include "InputManager.h"

template<class InputType1, class InputType2>
InputManager<InputType1, InputType2>::InputManager() {
    static_assert(std::is_base_of<BaseInput, InputType1>::value, "Player 2 does not a valid input method");
    static_assert(std::is_base_of<BaseInput, InputType2>::value, "Player 1 does not a valid input method");
}