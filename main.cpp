#include <cstdlib>
#include <iostream>

#include "graphics/window.h"
#include "input/controllers/keyboard.h"
#include "coordinate.h"
#include "vertex.h"
#include "shaders/shader.h"

int main() {
    glfwInit();
    Window window(1000, 500, "Name");
    Keyboard keyboard(&window);
    window.DrawWindow();
    window.SetColor(0.5f, 0.2f, 0.1f, 0.3f);

    Vertex triangle[] = {
            Vertex(Coordinate(-0.5f, -0.5f, 0.0f)),
            Vertex(Coordinate( 0.0f,  0.5f, 0.0f)),
            Vertex(Coordinate( 0.5f, -0.5f, 0.0f))
    };
    GLuint name;
    glGenBuffers(1, &name);
    glBindBuffer(GL_ARRAY_BUFFER, name);
    glBufferData(GL_ARRAY_BUFFER, 3 * sizeof(Vertex), triangle, GL_STATIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), 0);

    GLuint program = glCreateProgram();
    std::string file_path = "/home/filo/CLionProjects/fEngine/shaders/test.shader";
    Shader shader = Shader(file_path, VERTEX_SHADER);
    shader.Compile();
    glBindAttribLocation(program, 0, "position");
    shader.attach(program);
    glLinkProgram(program);
    glValidateProgram(program);
    shader.delete_shader();
    glUseProgram(program);
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    while (!window.should_close()) {
        window.Clear(GL_COLOR_BUFFER_BIT);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        window.Update();
    }
    glDeleteProgram(program);
}