cmake_minimum_required(VERSION 3.10)
project(nylang)

# main
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(main parser filetree)

# parser
add_library(parser ${CMAKE_CURRENT_SOURCE_DIR}/nytools/parser/parser.cpp)
target_link_libraries(parser filetree)
target_include_directories(parser PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/nytools/parser/)

# filetree
add_library(filetree ${CMAKE_CURRENT_SOURCE_DIR}/nytools/parser/file_tree.cpp)
target_include_directories(filetree PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/nytools/parser/)
