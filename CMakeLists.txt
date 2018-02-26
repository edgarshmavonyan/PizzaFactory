cmake_minimum_required(VERSION 3.8)
project(PizzaFactory)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES pizza.cpp pizza.h pizzabuilder.h pizzabuilder.cpp main_builder.h main_builder.cpp pizzachef.h pizzachef.cpp ordermanager.h ordermanager.cpp main.cpp test.h)

add_executable(PizzaFactory ${SOURCE_FILES})
target_link_libraries(PizzaFactory gtest gtest_main)