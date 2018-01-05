//
// Created by filo on 1/5/18.
//

#ifndef FENGINE_MOUSE_H
#define FENGINE_MOUSE_H

#include "../input.h"

class Mouse : public Input {
    public:
        Mouse() = default;
        ~Mouse() = default;

        void CursorPositionCallback(GLFWwindow* window, double x, double y) override;
        void MouseButtonCallback(GLFWwindow* glfWwindow, int button, int action, int mods) override;
};


#endif //FENGINE_MOUSE_H
