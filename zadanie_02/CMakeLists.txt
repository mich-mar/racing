cmake_minimum_required(VERSION 3.14)
project(zadanie_02)

SET(CMAKE_EXPORT_COMPILE_COMMANDS 1)
SET(CMAKE_CXX_COMPILER "g++")
SET(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES  ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES})
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra)
add_compile_options(-pedantic)
add_compile_options(-Werror=return-type)
add_compile_options(-Werror=parentheses)
add_compile_options(-Werror=vla)
add_compile_options(-Werror=array-bounds)
add_compile_options (-Wcast-qual)

add_executable(zadanie_02 main.cpp file_reader.cpp file_reader.h issue_solver.cpp issue_solver.h)

include_directories(/usr/local/include)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/inputs/
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

