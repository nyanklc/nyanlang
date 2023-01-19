#ifndef NYAN_COMPONENT_H
#define NYAN_COMPONENT_H

#include "component_properties.hpp"

namespace nyanlang {

  class Component {
  public:
    Component();

    virtual Properties getProperties();

    virtual void setProperties();

  protected:
    Properties props;
  };

}

#endif
