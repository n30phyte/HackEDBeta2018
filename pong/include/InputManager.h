//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_INPUTMANAGER_H
#define HACKEDBETA_INPUTMANAGER_H

#include <type_traits>

#include "BaseInput.h"

#include "KeyboardInput.h"
#include "AIInput.h"


template<class InputType1, class InputType2>
class InputManager {
public:
    InputManager();
    ~InputManager() = 0;
private:
    InputType1 player1Input;
    InputType2 player2Input;
};

#endif //HACKEDBETA_INPUTMANAGER_H
