#include "engine/game.hpp"

namespace prl
{
Game::Game():
_window(sf::VideoMode(
      700,700, 
      sf::VideoMode::getDesktopMode().bitsPerPixel), 
    "test", 
    sf::Style::Default)
{
  _window.setVerticalSyncEnabled(true);
  //_window.setMouseCursorVisible(false);
  //
  const int level[] =
  {
      0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
      0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0,
      1, 1, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3,
      0, 1, 0, 0, 2, 0, 3, 3, 3, 0, 1, 1, 1, 0, 0, 0,
      0, 1, 1, 0, 3, 3, 3, 0, 0, 0, 1, 1, 1, 2, 0, 0,
      0, 0, 1, 0, 3, 0, 2, 2, 0, 0, 1, 1, 1, 1, 2, 0,
      2, 0, 1, 0, 3, 0, 2, 2, 2, 0, 1, 1, 1, 1, 1, 1,
      0, 0, 1, 0, 3, 2, 2, 2, 0, 0, 0, 0, 1, 1, 1, 1,
  };

  map.load("tileset.png", sf::Vector2u(32, 32), level, 16, 8);
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

        // draw the map
        _window.clear();
        _window.draw(map);
        _window.display();
    }
}
}



