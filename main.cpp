#include "graphics/window.h"
#include <cstdlib>
#include <iostream>

int main() {
    glfwInit();
    Window window(1000, 500, "Name");
    window.DrawWindow();
    window.SetColor(0.5f, 0.2f, 0.1f, 0.3f);
    while (!window.should_close()) {
        window.Clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        window.Update();
    }
}