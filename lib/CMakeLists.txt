cmake_minimum_required(VERSION 3.15)

project(ExampleLib C)

add_library(ExampleLib STATIC
    src/example_lib.c
)

target_include_directories(ExampleLib
    PUBLIC
        inc/
)

target_link_libraries(ExampleLib
    PUBLIC
    PRIVATE
)
