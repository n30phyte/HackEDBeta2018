//
// Created by n30phyte on 17/11/18.
//

#include <KeyboardInput.h>
#include <iostream>
#include <SFML/Window/Event.hpp>

KeyboardInput::KeyboardInput(BaseInput::PlayerSide playerSide) {
    side = playerSide;
}
BaseInput::InputDirection KeyboardInput::Poll() {
    switch (side) {
        case LEFT:
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                // std::cout << " W Pressed" << std::endl;
                return BaseInput::InputDirection::UP;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                // std::cout << " S Pressed" << std::endl;
                return BaseInput::InputDirection::DOWN;
            }
            break;
        case RIGHT:
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                // std::cout << " Up Pressed" << std::endl;
                return BaseInput::InputDirection::UP;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                // std::cout << " Down Pressed" << std::endl;
                return BaseInput::InputDirection::DOWN;
            }
            break;
    }
    return BaseInput::InputDirection::NONE;
}