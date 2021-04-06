cmake_minimum_required(VERSION 3.17)
project(BattleshipGame)

set(CMAKE_CXX_STANDARD 14)

add_library(GameLibrary STATIC Ship.cpp Position.cpp test.cpp)

add_executable(BattleshipGame main.cpp Ship.cpp)
add_executable(test test.cpp)

target_link_libraries(test GameLibrary)