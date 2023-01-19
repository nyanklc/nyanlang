#ifndef NYAN_COMPONENT_PROPERTIES_H
#define NYAN_COMPONENT_PROPERTIES_H

#include "operations.hpp"

#include <inttypes.h>

struct Properties
{
  uint64_t line_number;
  // 0 to 255 indicating the pre-defined operation code (operations.hpp)
  char operation;
};

#endif
