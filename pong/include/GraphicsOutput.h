//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_GRAPHICSOUTPUT_H
#define HACKEDBETA_GRAPHICSOUTPUT_H

#include <SFML/Graphics.hpp>
#include "BaseOutput.h"

class GraphicsOutput : public BaseOutput {
public:
    GraphicsOutput();
    void Update(std::vector<std::vector<bool>>);
private:
    sf::RenderWindow _window = sf::RenderWindow(sf::VideoMode(80, 80), "Player vs Player");
};

#endif //HACKEDBETA_GRAPHICSOUTPUT_H
