cmake_minimum_required(VERSION 3.0)
project(projeto)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS " -static -static-libgcc -static-libstdc++ -std=c++11")
include_directories (C:/CG/freeglut/include)
link_directories (C:/CG/freeglut/lib)
add_executable(projeto main.c drawObj.c)
target_link_libraries (projeto opengl32 freeglut glu32)