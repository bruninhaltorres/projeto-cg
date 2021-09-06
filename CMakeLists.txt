cmake_minimum_required(VERSION 3.0)
project(projeto)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS " -static -static-libgcc -static-libstdc++ -std=c++11")
include_directories (C:/Users/eiren/OneDrive/Github/2-Faculdade/projeto-cg/freeglut/include)
link_directories (C:/Users/eiren/OneDrive/Github/2-Faculdade/projeto-cg/freeglut/lib)
add_executable(projeto main.c drawObj.c)
target_link_libraries (projeto opengl32 freeglut glu32)