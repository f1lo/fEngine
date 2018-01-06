//
// Created by filo on 1/5/18.
//

#include "keyboard.h"
#include <iostream>

Keyboard::Keyboard(Window* window) :
        window_(window){
    glfwSetKeyCallback(window_->GetGLFWWindow(), KeyCallback);
    glfwSetCharCallback(window_->GetGLFWWindow(), CharacterCallback);
}

void Keyboard::KeyCallback(GLFWwindow *window, int key, int scan_code, int action, int mods) {
}

void Keyboard::CharacterCallback(GLFWwindow *window, unsigned int character) {

}
