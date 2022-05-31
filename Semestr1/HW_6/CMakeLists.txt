cmake_minimum_required(VERSION 3.20)
project(Yahtzee)

set(CMAKE_CXX_STANDARD 17)

add_executable(Yahtzee main.cpp Player.cpp Player.h Dice.cpp Dice.h Random.cpp Random.h)
