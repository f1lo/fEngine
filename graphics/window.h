//
// Created by filo on 1/3/18.
//

#ifndef FENGINE_WINDOW_H
#define FENGINE_WINDOW_H

#undef GLFW_DLL

#include "../includes.h"

class Window {
    public:

        Window(int width, int height, const char* title);
        ~Window();

        GLFWwindow* GetGLFWWindow();
        void DrawWindow();
        void Update();
        static void SetColor(float a, float b, float c, float d);
        void Clear(GLbitfield bit_field);
        bool should_close() { return glfwWindowShouldClose(window_) != 0; }
        int width() { return  width_; }
        int height() { return  height_; }
    private:
        int width_;
        int height_;
        const char* title_;
        GLFWwindow* window_;
};


#endif //FENGINE_WINDOW_H
