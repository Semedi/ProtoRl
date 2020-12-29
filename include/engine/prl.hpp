#ifndef PRL_H_
#define PRL_H_

#include <entt/entt.hpp>
#include "SFML/Graphics.hpp"
#include "protorlconfig.hpp"

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
  void show_version();
  void update(entt::registry &registry);

}

#endif  // PRL_H_H
