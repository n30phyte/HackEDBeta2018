//
// Created by n30phyte on 17/11/18.
//

#include <AIInput.h>

BaseInput::InputDirection AIInput::Poll() {
    std::string command;
    zmq::message_t input(0);
    if (subscriber.recv(&input, ZMQ_DONTWAIT)) {
        std::istringstream iss(static_cast<char *>(input.data()));
        std::string filter;
        iss >> filter >> command;
        std::cout << command << std::endl;

        if (command == "UP") {
            std::cout << "UP" << std::endl;
            return BaseInput::InputDirection::UP;
        } else if (command == "DOWN") {
            return BaseInput::InputDirection::DOWN;
        } else {
            return BaseInput::InputDirection::NONE;
        }
    } else {
        return BaseInput::InputDirection::NONE;
    }
}

AIInput::AIInput() {
    subscriber.connect("tcp://127.0.0.1:5566");
    subscriber.setsockopt(ZMQ_SUBSCRIBE, "gameinput");
}
