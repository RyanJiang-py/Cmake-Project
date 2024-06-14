cmake_minimum_required(VERSION 3.0.0)
project(RPG VERSION 0.1.0 LANGUAGES C CXX)
set (CMAKE_CXX_STANDARD 14)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
add_executable(RPG main.cpp)

#sdl2
find_package(SDL2 REQUIRED)
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})



include(CTest)

enable_testing()

set(CPACK_PROJECT_NAME ${RPG})
set(CPACK_PROJECT_VERSION ${0.1})

include(CPack)
include_directories(${/usr/include/x86_64-linux-gnu})