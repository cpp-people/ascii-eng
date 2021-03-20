#include "Game.h"

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