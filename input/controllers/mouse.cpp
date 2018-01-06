//
// Created by filo on 1/5/18.
//

#include "mouse.h"

Mouse::Mouse(Window *window) :
        window_(window) {
    glfwSetCursorPosCallback(window_->GetGLFWWindow(), CursorPositionCallback);
    glfwSetMouseButtonCallback(window_->GetGLFWWindow(), MouseButtonCallback);
}

void Mouse::CursorPositionCallback(GLFWwindow *window, double x, double y) {

}

void Mouse::MouseButtonCallback(GLFWwindow *glfWwindow, int button, int action, int mods) {
}