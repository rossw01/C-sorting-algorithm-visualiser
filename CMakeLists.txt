cmake_minimum_required(VERSION 3.23)
set(CMAKE_C_STANDARD 90)

project(SortingAlgorithmVisualizer1 C)
add_executable(SortingAlgorithmVisualizer1 main.c)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

target_link_libraries(SortingAlgorithmVisualizer1 ${OPENGL_LIBRARIES})
target_link_libraries(SortingAlgorithmVisualizer1 ${GLUT_LIBRARIES})
target_link_libraries(SortingAlgorithmVisualizer1 -lOpenGL32 -g -lfreeGLUT)

#[[

On Linux use:
set(TARGET_LIB "/usr/lib/x86_64-linux-gnu/libGL.so" "/usr/lib/x86_64-linux-gnu/libGLU.so" "/usr/lib/x86_64-linux-gnu/libglut.so" )
target_link_libraries(SortingAlgorithmVisualizer1 ${TARGET_LIB})

]]

