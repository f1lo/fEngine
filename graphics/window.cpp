//
// Created by filo on 1/3/18.
//
#include <iostream>
#include "window.h"

Window::Window(int width, int height, const char* title):
        width_(width),
        height_(height),
        title_(title),
        window_(glfwCreateWindow(width, height, title, NULL, NULL)){
    if (!window_) {
        glfwTerminate();
        std::cout << "Coudln't create window!\n";
    }
}

Window::~Window() {
    glfwDestroyWindow(window_);
    glfwTerminate();
}

void Window::DrawWindow() {
    glfwMakeContextCurrent(window_);
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