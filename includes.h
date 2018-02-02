//
// Created by giorgi nishnianidze on 2018-01-12.
//

#ifndef FENGINE_INCLUDES_H
#define FENGINE_INCLUDES_H

#endif //FENGINE_INCLUDES_H

#ifdef __APPLE__
    #include </usr/local/include/GL/glew.h>
    #include </usr/local/include/GLFW/glfw3.h>
#endif

#ifdef __linux__
    #include <GL/glew.h>
    #include <GLFW/glfw3.h>
    #include <glm/glm.hpp>
    #include <glm/vec2.hpp>
    #include <glm/vec3.hpp>
    #include <glm/vec4.hpp>
    #include <glm/mat4x4.hpp>
    #include <glm/gtx/transform.hpp>
    #include <glm/gtc/matrix_transform.hpp>
    #include <glm/gtx/transform.hpp>
#endif