cmake_minimum_required(VERSION 3.9)
project(fEngine)

set(SOURCE_FILES main.cpp graphics/window.cpp graphics/window.h
        input/controllers/keyboard.cpp input/controllers/keyboard.h input/controllers/mouse.cpp input/controllers/mouse.h
        maths/fEngine_vector.cpp maths/fEngine_vector.h object/vertex.cpp object/vertex.h shaders/shader.cpp shaders/shader.h includes.h defines.h object/object.cpp object/object.h)
add_executable(fEngine ${SOURCE_FILES})

if (APPLE)
    set(LIBRARIES /usr/local/lib/libglfw.3.2.dylib /usr/local/lib/libGLEW.dylib)
endif(APPLE)

if (UNIX  AND NOT APPLE)
    set(LIBRARIES /usr/lib/x86_64-linux-gnu/libglfw.so /usr/lib/x86_64-linux-gnu/libGL.so
            /usr/lib/x86_64-linux-gnu/libGLU.so /usr/lib/x86_64-linux-gnu/libGLEW.so)
endif(UNIX  AND NOT APPLE)

target_link_libraries(fEngine ${LIBRARIES})
if (APPLE)
    target_link_libraries(fEngine "-framework OpenGL")
endif(APPLE)