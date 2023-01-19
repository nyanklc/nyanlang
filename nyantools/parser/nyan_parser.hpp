#ifndef NYAN_PARSER_H
#define NYAN_PARSER_H

#include "../../nyanlang/nyan_components/component.hpp"

#include <fstream>
#include <string>
#include <vector>

namespace nyantools
{
  class NyanParser
  {
  public:
    NyanParser(std::string main_file_path);

    void loadFile(std::string filepath);

    std::vector<nyanlang::Component> parseFile();

  private:
    std::vector<std::FILE> file;
  };
}

#endif
