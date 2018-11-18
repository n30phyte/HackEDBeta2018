//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_KEYBOARDINPUT_H
#define HACKEDBETA_KEYBOARDINPUT_H

#include <SFML/Window/Keyboard.hpp>
#include "BaseInput.h"

class KeyboardInput : public BaseInput {
public:
    KeyboardInput();
    explicit KeyboardInput(int);
    InputDirection Poll();
private:
    int playerID;
};

#endif //HACKEDBETA_KEYBOARDINPUT_H
