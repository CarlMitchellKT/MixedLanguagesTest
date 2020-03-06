cmake_minimum_required(VERSION 3.15)

cargo_build(NAME rustlib)

target_include_directories(rustlib
    INTERFACE
    inc/)