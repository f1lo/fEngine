//
// Created by filo on 1/3/18.
//

#ifndef FENGINE_WINDOW_H
#define FENGINE_WINDOW_H

#undef GLFW_DLL
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window {
    public:

        Window(int width, int height, const char* title);
        ~Window();
        void DrawWindow();
        void Update();
        bool shouldClose() {
            return glfwWindowShouldClose(window_);
        }

    private:
        int width_;
        int height_;
        const char* title_;
        GLFWwindow* window_;
};


#endif //FENGINE_WINDOW_H
