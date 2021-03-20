#pragma once
#include <SFML/Graphics.hpp>

class Game
{
public:
                            Game();
    virtual                 ~Game();
    void                    run();

private:
    // methods
    void                    processEvents();
    void                    update(sf::Time deltaTime);
    void                    render(sf::RenderWindow& window);
    // ...

private:
    // variables
    sf::RenderWindow        window;

};
