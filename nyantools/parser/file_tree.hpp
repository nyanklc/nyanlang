#ifndef NYAN_TOOLS_FILETREE_H
#define NYAN_TOOLS_FILETREE_H

#include <fstream>
#include <memory>
#include <string>
#include <vector>

namespace nyantools
{

  class FileNode
  {
  public:
    FileNode(std::string n, std::string p);

    void addDependency(std::string n, std::string p);

    std::string getPath();

    std::string getName();

    std::vector<std::shared_ptr<FileNode>> getDependencies();

  private:
    std::string name;
    std::string path;
    std::vector<std::shared_ptr<FileNode>> dependencies;
  };

  class FileTree
  {
  public:
    FileTree(std::shared_ptr<FileNode> m);

    bool addDependency(std::string file_name, std::string dep_name,
                       std::string dep_path);

    std::shared_ptr<FileNode> getMain();

    // TODO: Method that returns files to be compiled IN ORDER.

  private:
    std::shared_ptr<FileNode> main;
    std::vector<std::shared_ptr<FileNode>> file_list;
  };

} // namespace nyantools

#endif
