#include "graphics/window.h"
#include "input/controllers/keyboard.h"
#include "object/vertex.h"
#include "object/object.h"

#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    glfwInit();
    Window window(1000, 500, "Name");
    Keyboard keyboard(&window);
    window.DrawWindow();
    window.SetColor(0.5f, 0.2f, 0.1f, 0.3f);

    std::vector <Vertex> triangle;
    triangle.push_back(Vertex(-0.5f, -0.5f, 0.0f));
    triangle.push_back(Vertex( 0.0f,  0.5f, 0.0f));
    triangle.push_back(Vertex( 0.5f, -0.5f, 0.0f));
    triangle.push_back(Vertex( 0.0f, -1.0f, 0.0f));

    Object object(triangle, POLYGON, 0);
    object.BindShader("/home/filo/CLionProjects/fEngine/shaders/test.shader", VERTEX_SHADER);
    object.BindShader("/home/filo/CLionProjects/fEngine/shaders/test2.shader", FRAGMENT_SHADER);
    object.Prepare();

    while (!window.should_close()) {
        window.Clear(GL_COLOR_BUFFER_BIT);
        object.Draw();
        window.Update();
    }
}