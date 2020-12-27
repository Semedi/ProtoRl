#include <iostream>
#include "tmp.hpp"
#include "engine/roguengine.hpp"
#include <cross.hpp>

int main()
{
  std::cout << tmp::add(1,2) << std::endl;
  std::cout << roguengine::add(1,2) << std::endl;
  std::cout << cross::mul(2, 3) << std::endl;


  entt::registry registry;

  for (auto i = 0u; i < 10u; ++i){
    const auto entity = registry.create();
    registry.emplace<roguengine::pos>(entity, i * 1.f, i * 1.f);

    if (i%2 == 0)
      registry.emplace<roguengine::vel>(entity, i * .1f, i * .1f);
  }

  roguengine::update(registry);
  roguengine::test();


  return 0;
}
