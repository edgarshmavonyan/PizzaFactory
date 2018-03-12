cmake_minimum_required(VERSION 3.8)
project(PizzaFactory)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES pizza.cpp pizzabuilder.cpp main_builder.cpp pizzachef.cpp ordermanager.cpp main.cpp)

add_executable(PizzaFactory ${SOURCE_FILES})
target_link_libraries(PizzaFactory gtest gtest_main)