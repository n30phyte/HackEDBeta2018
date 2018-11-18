//
// Created by n30phyte on 17/11/18.
//

#include <KeyboardInput.h>

KeyboardInput::KeyboardInput(BaseInput::PlayerSide playerSide) {
    side = playerSide;
}
BaseInput::InputDirection KeyboardInput::Poll() {
    switch (side) {
        case LEFT:
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                return BaseInput::InputDirection::UP;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                return BaseInput::InputDirection::DOWN;
            }
            break;
        case RIGHT:
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                return BaseInput::InputDirection::UP;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                return BaseInput::InputDirection::DOWN;
            }
            break;
    }
    return BaseInput::InputDirection::NONE;
}