//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_GRAPHICSOUTPUT_H
#define HACKEDBETA_GRAPHICSOUTPUT_H

#include <SFML/Graphics.hpp>
#include "BaseOutput.h"

class GraphicsOutput : public BaseOutput {
public:
    void Update(std::vector<std::vector<bool>>);
    sf::Texture getTexture();
private:
    sf::Texture _texture;
};

#endif //HACKEDBETA_GRAPHICSOUTPUT_H
