cmake_minimum_required(VERSION 3.0)
project(projeto)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS " -static -static-libgcc -static-libstdc++ -std=c++11")
include_directories (C:/projeto-cg/freeglut/include)
link_directories (C:/projeto-cg/freeglut/lib)
add_executable(projeto main.c sources/draw_objects.c sources/camera.c sources/obj_import.c sources/cam_movement.c stb_image.c)
target_link_libraries (projeto opengl32 freeglut glu32)