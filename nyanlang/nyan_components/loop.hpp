#ifndef NYAN_COMPONENT_LOOPS_H
#define NYAN_COMPONENT_LOOPS_H

#include "component.hpp"
#include <cstdint>

namespace nyanlang
{

  class Loop : Component
  {
  public:
    Loop(uint64_t line_num);

    Properties getProperties() override;
  };
}

#endif
