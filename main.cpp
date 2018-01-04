#include "window.h"
#include <cstdlib>
#include <iostream>

int main() {
    glfwInit();
    Window window(1000, 500, "Name");
    window.DrawWindow();
    while (!window.shouldClose()) {
        window.Update();
    }
    //system("read -p 'Press Enter to continue...' var");
}