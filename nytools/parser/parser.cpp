#include "parser.hpp"

#include <fstream>
#include <string>
#include <iostream>

namespace nytools
{
  void Parser::parseFile(std::string file_path)
  {
    std::vector<std::string> lines = getLines(file_path);
    
    // debug
    for (auto s : lines)
    {
      std::cout << s << "\n";
    }

    std::pair<std::string, std::string> includes = getIncludes(lines);

    FileTree *file_tree = generateFileTree(includes);

    return;
  }

  std::pair<std::string, std::string> Parser::getIncludes(std::vector<std::string> lines)
  {
    // TODO:
    std::pair<std::string, std::string> ret;
    return ret;
  }

  FileTree *Parser::generateFileTree(std::pair<std::string, std::string> includes)
  {
    // TODO:
    FileTree *ft;
    return ft;
  }

  std::vector<std::string> Parser::getLines(std::string main_file_path)
  {
    std::ifstream f(main_file_path);
    if (!f)
      std::cout << "failed to open file\n";

    std::vector<std::string> lines;
    std::string s;

    while (std::getline(f, s))
    {
      lines.push_back(s);
    }

    f.close();

    return lines;
  }
}
