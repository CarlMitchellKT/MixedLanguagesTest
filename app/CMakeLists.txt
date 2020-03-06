cmake_minimum_required(VERSION 3.15)

add_executable(MixedLanguagesTest
    src/main.c
)

target_include_directories(MixedLanguagesTest
    PUBLIC
        inc/
)

target_link_libraries(MixedLanguagesTest
    PUBLIC
    PRIVATE
        rustlib

)

target_compile_options(MixedLanguagesTest
    PUBLIC
    -O2
    -Wall
    -Werror)