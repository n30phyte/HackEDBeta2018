#include <iostream>

#include "WindowManager.h"
#include "BaseGame.h"

int main(int argc, char *argv[]) {

    BaseGame pong;

    if (argc == 1) {
        std::cout << "Running in Graphics mode." << std::endl;

        WindowManager window(pong);
        while(true){
            window.Render();
        }

    } else {
        std::cout << "Running in Headless mode." << std::endl;
    }

    //pong.Start();

    //while (pong.is_running) {
    //    pong.Loop();
    //}
}