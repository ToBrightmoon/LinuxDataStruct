cmake_minimum_required(VERSION 2.8)

project(DataStruct)

SET(CMAKE_BUILD_TYPE "Debug") # Release 代表发行模式， Debug 代表调试模式
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) #生成compile_commands.json文件

set(CMAKE_CXX_STANDARD 14)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(Data main.cpp)