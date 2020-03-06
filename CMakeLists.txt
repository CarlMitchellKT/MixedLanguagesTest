cmake_minimum_required(VERSION 3.15)
project(MixedLanguagesTest C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

enable_language(Rust)
include(CMakeCargo)

add_subdirectory(app)
#add_subdirectory(clib)
add_subdirectory(rustlib)