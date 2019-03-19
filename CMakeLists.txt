cmake_minimum_required(VERSION 3.10.2)
project(ShoppingCart)

set(CMAKE_CXX_STANDARD 17)

add_executable(ShoppingCart src/main.cpp src/Item.cpp src/ShoppingCart.cpp)