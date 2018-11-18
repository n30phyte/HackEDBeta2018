//
// Created by n30phyte on 17/11/18.
//

#include <AIInput.h>

BaseInput::InputDirection AIInput::Poll() {
    zmq::message_t input;
    subscriber.recv(&input);
    std::istringstream iss(static_cast<char *>(input.data()));
    std::string filter;
    std::string command;
    iss >> filter >> command;
    if (command == "UP"){
        return BaseInput::InputDirection::UP;
    }
    else if (command == "DOWN"){
        return BaseInput::InputDirection::DOWN;
    }
    else
    {
        return BaseInput::InputDirection::NONE;
    }


}
AIInput::AIInput() {
    subscriber.connect("tcp://localhost:5556");
    subscriber.setsockopt(ZMQ_SUBSCRIBE, "gameinput", strlen("gameinput"));
}
