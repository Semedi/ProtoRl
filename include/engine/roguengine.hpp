#ifndef ROGUENGINE_H_
#define ROGUENGINE_H_

#include <SFML/Graphics.hpp>
#include <entt/entt.hpp>

namespace roguengine
{
  struct pos {
    float x;
    float y;
  };

  struct vel {
    float dx;
    float dy;
  };

  int add(int, int);
  void test();
  void update(entt::registry &registry);
}

#endif  // ROGUENGINE_H_
