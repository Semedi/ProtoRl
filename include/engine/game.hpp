#include <SFML/Graphics.hpp>
#include "engine/prl.hpp"
#include <assert.h>

namespace prl
{
class Game
{
  public:
    Game();
    void run();
  private:
    TileMap map;
    sf::RenderWindow _window;
};
}
