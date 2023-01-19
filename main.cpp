#include <iostream>
#include <vector>
#include <string>
#include <iostream>

#include "./nytools/parser/parser.hpp"

int main(int argc, char **argv)
{
  nytools::Parser parser;

  std::cout << "here\n";
  parser.parseFile("/home/noyan/nyn/nylang/tests/test.nylg");
  std::cout << "here2\n";
  return 0;
}
