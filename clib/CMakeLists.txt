cmake_minimum_required(VERSION 3.15)

project(clib C)

add_library(clib STATIC
    src/clib.c
)

target_include_directories(clib
    PUBLIC
        inc/
)

target_link_libraries(clib
    PUBLIC
    PRIVATE
)
