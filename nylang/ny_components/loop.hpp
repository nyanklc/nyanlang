#ifndef NY_LANG_COMPONENT_LOOPS_H
#define NY_LANG_COMPONENT_LOOPS_H

#include "component.hpp"
#include <cstdint>

namespace nylang
{

  class Loop : Component
  {
  public:
    Loop(uint64_t line_num);

    Properties getProperties() override;
  };
}

#endif
