cmake_minimum_required(VERSION 3.22)

project(Tetris)
file(GLOB_RECURSE SRCS src/*.cpp)

add_subdirectory(vendor/raylib/raylib)

include_directories(
    vendor/raylib/raylib/src
    vendor
    src
)

add_library("raylib" STATIC ${SRCS})

add_executable(${PROJECT_NAME} ${SRCS})
target_include_directories("raylib" PRIVATE vendor/raylib/raylib/src )

target_link_libraries(${PROJECT_NAME} "raylib" raylib)
