cmake_minimum_required(VERSION 3.23)
project(SortingAlgorithmVisualizer1 C)

set(CMAKE_C_STANDARD 90)

add_executable(SortingAlgorithmVisualizer1 main.c)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

target_link_libraries(SortingAlgorithmVisualizer1 ${OPENGL_LIBRARIES})
target_link_libraries(SortingAlgorithmVisualizer1 ${GLUT_LIBRARIES})
target_link_libraries(SortingAlgorithmVisualizer1 -lOpenGL32 -g -lfreeGLUT)
