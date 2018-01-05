//
// Created by filo on 1/5/18.
//

#ifndef FENGINE_KEYBOARD_H
#define FENGINE_KEYBOARD_H

#include "../../graphics/window.h"

class Keyboard {
    public:
        explicit Keyboard(Window* window);
        ~Keyboard() = default;
    private:

        static void KeyCallback(GLFWwindow *window, int key, int scan_code, int action, int mods);
        static void CharacterCallback(GLFWwindow *window, unsigned int character);
        Window* window_;
};


#endif //FENGINE_KEYBOARD_H
