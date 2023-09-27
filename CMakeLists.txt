cmake_minimum_required(VERSION 3.27)
project(Tetris)
file(GLOB_RECURSE SRCS src/*.cpp)
add_executable(${PROJECT_NAME} ${SRCS})