#include "file_tree.hpp"

namespace nyantools
{

  FileNode::FileNode(std::string n, std::string p)
  {

    name = n;
    path = p;
  }

  void FileNode::addDependency(std::string n, std::string p)
  {

    std::shared_ptr<FileNode> newfn = std::make_shared<FileNode>(n, p);
    dependencies.push_back(newfn);
    return;
  }

  std::string FileNode::getPath() { return path; }

  std::string FileNode::getName() { return name; }

  std::vector<std::shared_ptr<FileNode>> FileNode::getDependencies()
  {

    return dependencies;
  }

  FileTree::FileTree(std::shared_ptr<FileNode> m)
  {

    main = m;
    file_list.push_back(m);
  }

  std::shared_ptr<FileNode> FileTree::getMain() { return main; }

  bool FileTree::addDependency(std::string file_name, std::string dep_name,
                               std::string dep_path)
  {

    // find file_path in tree and add dep
    for (auto fn : file_list)
    {
      if (fn->getName() == file_name)
      {
        fn->addDependency(dep_name, dep_path);
        return true;
      }
    }
    return false;
  }

} // namespace nyantools
