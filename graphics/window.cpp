//
// Created by filo on 1/3/18.
//
#include <iostream>
#include "window.h"

Window::Window(int width, int height, const char* title):
        width_(width),
        height_(height),
        title_(title) {
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    window_ = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!window_) {
        glfwTerminate();
        std::cout << "Could not create window!\n";
    }
}

Window::~Window() {
    glfwDestroyWindow(window_);
    glfwTerminate();
}

GLFWwindow* Window::GetGLFWWindow() {
    return window_;
}

void Window::DrawWindow() {
    glfwMakeContextCurrent(window_);
    if (glewInit() != GLEW_OK) {
        std::cout << "Could not initialize GLEW!\n";
    }
}

void Window::Update() {
    glfwSwapBuffers(window_);
    glfwGetFramebufferSize(window_, &width_, &height_);
    glViewport(0, 0, width_, height_);
    glfwPollEvents();
}

void Window::SetColor(float a, float b, float c, float d) {
    glClearColor(a, b, c, d);
}

void Window::Clear(GLbitfield bit_field) {
    glClear(bit_field);
}