#include "SFML/Graphics.hpp"
#include <iostream>
#include "Menu.h"

void pong()
{
    sf::RenderWindow window(sf::VideoMode(80, 80, 8), "pong");
    sf::Vector2f paddleSize(2, 8);
    sf::Vector2f ballSize(1, 2);

    sf::RectangleShape leftPaddle;
    leftPaddle.setSize(paddleSize);
    leftPaddle.setFillColor(sf::Color::White);
    leftPaddle.setPosition(4, 36);

    sf::RectangleShape rightPaddle;
    rightPaddle.setSize(paddleSize);
    rightPaddle.setFillColor(sf::Color::White);
    rightPaddle.setPosition(74, 36);

    sf::RectangleShape ball;
    ball.setSize(ballSize);
    ball.setFillColor(sf::Color::White);
    ball.setPosition(38, 39);

    sf::Vector2f ballVelocity(1, .8);

    while (window.isOpen())
    {
        sf::Event event;

        ball.move(ballVelocity);

        // Perfect AI
        // rightPaddle.setPosition(rightPaddle.getPosition().x, ball.getPosition().y-4);
        // leftPaddle.setPosition(leftPaddle.getPosition().x, ball.getPosition().y-4);

        if ((ball.getPosition().y > leftPaddle.getPosition().y) && (ball.getPosition().y < leftPaddle.getPosition().y + 8) && (ball.getPosition().x == 5))
        {
            ballVelocity.x *= -1;
        }

        if ((ball.getPosition().y > rightPaddle.getPosition().y) && (ball.getPosition().y < rightPaddle.getPosition().y + 8) && (ball.getPosition().x == 73))
        {
            ballVelocity.x *= -1;
        }

        if (ball.getPosition().y > 78)
        {
            ballVelocity.y *= -1;
        }
        if (ball.getPosition().y < 0)
        {
            ballVelocity.y *= -1;
        }

        if (ball.getPosition().x > 79 || ball.getPosition().x < 0)
        {
            ball.setPosition(38, 39);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::KeyPressed:
                switch (event.key.code)
                {
                case sf::Keyboard::W:
                    if (leftPaddle.getPosition().y > 0)
                    {
                        leftPaddle.move(0, -4);
                    }
                    break;
                case sf::Keyboard::S:
                    if (leftPaddle.getPosition().y < 72)
                    {
                        leftPaddle.move(0, 4);
                    }
                    break;
                case sf::Keyboard::Up:
                    if (rightPaddle.getPosition().y > 0)
                    {
                        rightPaddle.move(0, -4);
                    }
                    break;
                case sf::Keyboard::Down:
                    if (rightPaddle.getPosition().y < 72)
                    {
                        rightPaddle.move(0, 4);
                    }
                    break;
                }
                break;
            case sf::Event::Closed:
                window.close();
                break;
            }
        }
          if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                //if pong window is closed,
                window.close();
            }

        window.clear();
        window.draw(leftPaddle);
        window.draw(rightPaddle);
        window.draw(ball);
        window.display();
        window.setFramerateLimit(60);
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