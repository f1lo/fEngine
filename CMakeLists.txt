cmake_minimum_required(VERSION 3.9)
project(fEngine)

set(SOURCE_FILES main.cpp window.cpp window.h)
add_executable(fEngine ${SOURCE_FILES})

set(LIBRARIES /usr/lib/x86_64-linux-gnu/libglfw.so /usr/lib/x86_64-linux-gnu/libGL.so
        /usr/lib/x86_64-linux-gnu/libGLU.so /usr/lib/x86_64-linux-gnu/libGLEW.so)

target_link_libraries(fEngine ${LIBRARIES})