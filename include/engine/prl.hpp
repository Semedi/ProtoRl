#ifndef PRL_H_
#define PRL_H_

#include "SFML/Graphics.hpp"
#include <entt/entt.hpp>

namespace prl
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

#endif  // PRL_H_H
