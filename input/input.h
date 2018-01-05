//
// Created by filo on 1/5/18.
//

#ifndef FENGINE_INPUT_H
#define FENGINE_INPUT_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Input {
    public:
        virtual int KeyCallback(GLFWwindow* window, int key, int scan_code, int action, int mods) {}
        virtual void CharacterCallback(GLFWwindow* window, unsigned int character) {}
        virtual void CursorPositionCallback(GLFWwindow* window, double x, double y) {}
        virtual void MouseButtonCallback(GLFWwindow* glfWwindow, int button, int action, int mods) {}
};

#endif //FENGINE_INPUT_H
