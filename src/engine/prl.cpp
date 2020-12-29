#include "engine/prl.hpp"

#include <iostream>
void prl::show_version()
{
  std::cout << "ProtoRl " << ProtoRl_VERSION_MAJOR << "." << ProtoRl_VERSION_MINOR << "." << ProtoRl_VERSION_PATCH << std::endl;

}

int prl::add(int a, int b)
{ 
  return a + b; 
}

void prl::update(entt::registry &registry)
{
  auto view = registry.view<const prl::pos, prl::vel>();
}
