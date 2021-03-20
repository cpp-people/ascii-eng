#include "headers.h"
#include "Interpreter.h"
#include "Game.h"

#include <cstdio>

Game::Game() 
    : window(sf::VideoMode(800, 600), "teste")
{

}

void Game::run()
{
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;

            default:
                printf("%d\n",eval(""));
                break;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			    window.close();
        }
    }
}

Game::~Game()
{

}
