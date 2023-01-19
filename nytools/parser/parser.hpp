#ifndef NY_TOOLS_PARSER_H
#define NY_TOOLS_PARSER_H

#include "file_tree.hpp"

#include <string>
#include <vector>

namespace nytools
{
  class Parser
  {
  public:
    void parseFile(std::string file_path);

    std::pair<std::string, std::string> getIncludes(std::vector<std::string> lines);

    std::vector<std::string> getLines(std::string file_path);

    FileTree *generateFileTree(std::pair<std::string, std::string> includes);
  };
}

#endif
