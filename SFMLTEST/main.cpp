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
                        // PUT FIRST OPTION ACTION HERE
                        std::cout << "1st button pressed" << std::endl;
                        break;
                    case 1:
                        // PUT SECOND OPTION ACTION HERE
                        std::cout << "2nd button pressed" << std::endl;
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

            case sf::Keyboard::Escape:
                window.close();
            }
        }

        window.clear();

        menu.draw(window);

        window.display();
    }

    return 0;
}