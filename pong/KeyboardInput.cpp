//
// Created by n30phyte on 17/11/18.
//

#include <KeyboardInput.h>

KeyboardInput::KeyboardInput(int PlayerID) {
    playerID = PlayerID;
}
BaseInput::InputDirection KeyboardInput::Poll() {
    if (playerID == 0) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            return BaseInput::InputDirection::UP;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            return BaseInput::InputDirection::DOWN;
        }
    }
    if (playerID == 1) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            return BaseInput::InputDirection::UP;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            return BaseInput::InputDirection::DOWN;
        }
    }
}
KeyboardInput::KeyboardInput() : KeyboardInput(0) {

}
