//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_AIINPUT_H
#define HACKEDBETA_AIINPUT_H

#include "BaseInput.h"
#include <zmq.hpp>
#include <iostream>
#include <sstream>


class AIInput : public BaseInput {
public:
    AIInput();
    InputDirection Poll();
private:
    zmq::context_t context = zmq::context_t(2);
    zmq::socket_t subscriber = zmq::socket_t(context, ZMQ_SUB);

};

#endif //HACKEDBETA_AIINPUT_H
