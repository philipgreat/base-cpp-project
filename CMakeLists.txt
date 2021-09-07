cmake_minimum_required(VERSION 3.15)

project(
    calculator-app
    VERSION 0.0.1
    LANGUAGES CXX)


add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE main.cpp QueryCache.h QueryCache.cpp)

