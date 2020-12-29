#include <SFML/Graphics.hpp>

namespace prl
{
class Game
{
  public:
    Game();
    void run();
  private:
    sf::RenderWindow _window;
};
}
