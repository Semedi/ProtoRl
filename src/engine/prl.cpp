#include "engine/prl.hpp"


int prl::add(int a, int b)
{ 
  return a + b; 
}

void prl::test()
{ 
    float WIDTH = 700;
    float HEIGHT = 700;
    sf::RenderWindow window(sf::VideoMode(WIDTH,HEIGHT), "Candle - demo");
    window.setVerticalSyncEnabled(true);
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }
}

void prl::update(entt::registry &registry)
{
  auto view = registry.view<const prl::pos, prl::vel>();
}
