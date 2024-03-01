# cmake 最低版本要求
cmake_minimum_required(VERSION 3.28)
# 项目名称
project(project_template)
# c++17
set(CMAKE_CXX_STANDARD 17)
# 添加头文件
include_directories(include)
# 添加源文件
aux_source_directory(./src DIR_SRCS)
# 需要编译的源文件
add_executable(project_template ${DIR_SRCS})
