cmake_minimum_required(VERSION 3.22)

project(Tetris)
file(GLOB_RECURSE SRCS src/*.cpp)

add_subdirectory(vendor/raylib)

include_directories(
    vendor/raylib
    vendor/raylib/src
    vendor
    src
)

add_library(${RAYLIB} STATIC ${SRCS})

add_executable(${PROJECT_NAME} ${SRCS})
target_include_directories(${PROJECT_NAME} ${RAYLIB} PRIVATE vendor/raylib/src )

target_link_libraries(${PROJECT_NAME}  raylib)
