//
// Created by filo on 1/5/18.
//

#ifndef FENGINE_MOUSE_H
#define FENGINE_MOUSE_H

#include "../../graphics/window.h"

class Mouse {
    public:
        explicit  Mouse(Window* window);
        ~Mouse() = default;
    private:
        static void CursorPositionCallback(GLFWwindow* window, double x, double y);
        static void MouseButtonCallback(GLFWwindow* glfWwindow, int button, int action, int mods);

        Window* window_;
};


#endif //FENGINE_MOUSE_H
