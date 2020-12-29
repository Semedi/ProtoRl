#include "protorlconfig.hpp"
#include "tmp.hpp"
#include "engine/prl.hpp"
#include "engine/game.hpp"
#include <iostream>


int main()
{
  prl::show_version();
  std::cout << tmp::add(1,2) << std::endl;
  std::cout << prl::add(1,2) << std::endl;

  auto game = prl::Game();
  game.run();

  entt::registry registry;

  for (auto i = 0u; i < 10u; ++i){
    const auto entity = registry.create();
    registry.emplace<prl::pos>(entity, i * 1.f, i * 1.f);

    if (i%2 == 0)
      registry.emplace<prl::vel>(entity, i * .1f, i * .1f);
  }

  prl::update(registry);

  return 0;
}
