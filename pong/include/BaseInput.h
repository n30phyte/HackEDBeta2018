//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_BASEINPUT_H
#define HACKEDBETA_BASEINPUT_H

class BaseInput {
public:
    enum PlayerSide {
        LEFT,
        RIGHT
    };

    enum InputDirection {
        UP,
        DOWN,
        NONE
    };
    virtual InputDirection Poll() = 0;
};

#endif //HACKEDBETA_BASEINPUT_H
