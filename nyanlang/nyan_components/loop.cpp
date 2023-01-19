#include "loop.hpp"

namespace nyanlang {

  Loop::Loop(uint64_t line_num) {
    props.line_number = line_num;
    props.operation = __OP_LOOP;
  }

  Properties Loop::getProperties() {
    return props;
  }

}
