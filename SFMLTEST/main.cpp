#include "SFML/Graphics.hpp"
#include <iostream>
#include "Menu.h"

int main()
{
    // videomode defines size of window
    // second argument is window title
    // can have optional third argument for style
    // can have optional fourth argument defining opengl specific options
    sf::RenderWindow window(sf::VideoMode(500, 500), "ai-pong :3c", sf::Style::Default);
    window.setPosition(sf::Vector2i(10, 50));

    Menu menu(window.getSize().x, window.getSize().y);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::KeyReleased:
                switch (event.key.code)
                {
                case sf::Keyboard::Up:
                    menu.MoveUp();
                    break;
                case sf::Keyboard::Down:
                    menu.MoveDown();
                    break;
                case sf::Keyboard::Return:
                    switch (menu.GetPressedItem())
                    {
                    case 0:
                        std::cout << "Play button pressed" << std::endl;
                        break;
                    case 1:
                        std::cout << "option pressed" << std::endl;
                        break;
                    case 2:
                        window.close();
                        break;
                    }
                    break;
                }

                break;
            case sf::Event::Closed:
                window.close();

                break;

                // if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                // {
                //     // closes window if esc key is pressed
                //     window.close();
            }
        }

        // clear window with green
        window.clear();

        menu.draw(window);

        //window.draw(Menu);

        window.display();
    }

    return 0;
}