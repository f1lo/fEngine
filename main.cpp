#include "graphics/window.h"
#include "input/controllers/keyboard.h"
#include <cstdlib>
#include <iostream>
#include "maths/fEngine_vector.h"

int main() {
    glfwInit();
    Window window(1000, 500, "Name");
    Keyboard keyboard(&window);
    window.DrawWindow();
    window.SetColor(0.5f, 0.2f, 0.1f, 0.3f);
    while (!window.should_close()) {
        window.Clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        window.Update();
    }
}