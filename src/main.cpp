#include <iostream>
#include "tmp.hpp"
#include "engine/roguengine.hpp"

int main()
{
  std::cout << tmp::add(1,2) << std::endl;
  std::cout << roguengine::add(1,2) << std::endl;

  return 0;
}
