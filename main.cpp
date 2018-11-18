#include <iostream>

#include "InputManager.h"
#include "OutputManager.h"
#include "BaseGame.h"

int main(int argc, char *argv[]) {

    BaseGame pong;

    if (argc == 1) {
        std::cout << "Running in Graphics mode." << std::endl;

        auto * input0 = new KeyboardInput(0);
        auto * input1 = new KeyboardInput(1);

        InputManager inputs(input0, input1);

        pong.setInputManager(inputs);

    } else {
        std::cout << "Running in Headless mode." << std::endl;
    }

    pong.Start();

    while (pong.is_running) {
        pong.Loop();
    }
}