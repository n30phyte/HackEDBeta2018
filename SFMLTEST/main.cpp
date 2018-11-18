#include "SFML/Graphics.hpp"
#include <iostream>
#include "Menu.h"

void pong()
{
    sf::RenderWindow window(sf::VideoMode(160, 160, 8), "pong", sf::Style::Default);
    sf::Vector2f paddleSize(4, 16);
    sf::Vector2f ballSize(2, 4);

    sf::RectangleShape leftPaddle;
    leftPaddle.setSize(paddleSize);
    leftPaddle.setFillColor(sf::Color::White);
    leftPaddle.setPosition(8, 80);

    sf::RectangleShape rightPaddle;
    rightPaddle.setSize(paddleSize);
    rightPaddle.setFillColor(sf::Color::White);
    rightPaddle.setPosition(152, 80);

    sf::RectangleShape ball;
    ball.setSize(ballSize);
    ball.setFillColor(sf::Color::White);
    ball.setPosition(80, 80);
    sf::Vector2f ballVelocity(2, 1.6);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        ball.setPosition(ball.getPosition() + ballVelocity);

        if (ball.getPosition().y > 156)
        {
            ballVelocity.y *= -1;
        }
        if (ball.getPosition().y < 0)
        {
            ballVelocity.y *= -1;
        }
        if (ball.getPosition().x > 158)
        {
            ballVelocity.x *= -1;
        }
        if (ball.getPosition().x < 0)
        {
            ballVelocity.x *= -1;
        }

        window.clear();
        window.draw(leftPaddle);
        window.draw(rightPaddle);
        window.draw(ball);
        window.display();
        window.setFramerateLimit(60);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.close();
        }
    }
}

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
                        std::cout << "PvP button pressed" << std::endl;
                        pong();

                        break;
                    case 1:
                        // PUT SECOND OPTION ACTION HERE
                        std::cout << "PvA button pressed" << std::endl;
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
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                //if pong window is closed, 
                window.close();
            }
        }

        window.clear();

        menu.draw(window);

        window.display();
    }

    return 0;
}