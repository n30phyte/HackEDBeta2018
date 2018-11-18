#include <iostream>

#include "InputManager.h"
#include "OutputManager.h"
#include "BaseGame.h"

int main(int argc, char *argv[]) {

    BaseGame pong;

    if (argc == 1) {
        std::cout << "Running in Graphics mode." << std::endl;


        InputManager<KeyboardInput, KeyboardInput> inputs;

        pong.setInputManager(inputs);

    } else {
        std::cout << "Running in Headless mode." << std::endl;
    }

    pong.Start();

    while (pong.is_running) {
        pong.Loop();
    }
}