#include <cstdlib>
#include <iostream>

#include "graphics/window.h"
#include "input/controllers/keyboard.h"
#include "coordinate.h"
#include "vertex.h"
#include "Shaders/shader.h"

int main() {
    glfwInit();
    Window window(1000, 500, "Name");
    Keyboard keyboard(&window);
    window.DrawWindow();
    window.SetColor(0.5f, 0.2f, 0.1f, 0.3f);

    Vertex triangle[] = {
            Vertex(Coordinate(-0.5f, -0.5f, 0)),
            Vertex(Coordinate(0, 0.5f, 0)),
            Vertex(Coordinate(0.5f, -0.5f, 0))
    };
    std::string file_path = "/home/filo/CLionProjects/fEngine/Shaders/test.shader";
    //Shader* shader = new Shader(file_path, 0);
    GLuint name;
    glGenBuffers(1, &name);
    glBufferData(GL_ARRAY_BUFFER, 3 * sizeof(Vertex), triangle, GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, name);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), 0);
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    while (!window.should_close()) {
        window.Clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        window.Update();
    }
}