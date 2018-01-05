//
// Created by filo on 1/5/18.
//

#ifndef FENGINE_KEYBOARD_H
#define FENGINE_KEYBOARD_H

#include "../input.h"

class Keyboard : public Input {
    public:
        Keyboard() = default;
        ~Keyboard() = default;
        int KeyCallback(GLFWwindow* window, int key, int scan_code, int action, int mods) override;
        void CharacterCallback(GLFWwindow* window, unsigned int character) override ;
};


#endif //FENGINE_KEYBOARD_H
