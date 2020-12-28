#include "protorlconfig.hpp"
#include <iostream>
#include "tmp.hpp"
#include "engine/roguengine.hpp"

void show_version()
{
  std::cout << "ProtoRl " << ProtoRl_VERSION_MAJOR << "." << ProtoRl_VERSION_MINOR << "." << ProtoRl_VERSION_PATCH << std::endl;

}

int main()
{
  show_version();
  std::cout << tmp::add(1,2) << std::endl;
  std::cout << roguengine::add(1,2) << std::endl;

  roguengine::test();

  entt::registry registry;

  for (auto i = 0u; i < 10u; ++i){
    const auto entity = registry.create();
    registry.emplace<roguengine::pos>(entity, i * 1.f, i * 1.f);

    if (i%2 == 0)
      registry.emplace<roguengine::vel>(entity, i * .1f, i * .1f);
  }

  roguengine::update(registry);

  return 0;
}
