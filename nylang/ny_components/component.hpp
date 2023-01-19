#ifndef NY_LANG_COMPONENT_H
#define NY_LANG_COMPONENT_H

#include "component_properties.hpp"

namespace nylang
{

  class Component
  {
  public:
    Component();

    virtual Properties getProperties();

    virtual void setProperties();

  protected:
    Properties props;
  };

}

#endif
