#include "engine/game.hpp"

namespace prl
{
Game::Game():
_window(sf::VideoMode(700, 700), "test")
{
  _window.setVerticalSyncEnabled(true);
  //_window.set_MouseCursosVisible(false);
}

void Game::run()
{
    while (_window.isOpen())
    {
        sf::Event event;
        while (_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                _window.close();
        }
    }
}
}



