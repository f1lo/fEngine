//
// Created by filo on 1/26/18.
//

#include <cstdio>
#include "object.h"


Object::Object(std::vector<Vertex> &vertices, int type, unsigned int num_faces):
        vertices_(vertices),
        type_(type),
        num_faces_(num_faces),
        num_vertices_(vertices.size()),
        vertex_shader_(NULL),
        fragment_shader_(NULL){
}

void Object::BindShader(const char *path_to_shader, int type) {
    if (type == FRAGMENT_SHADER)
        fragment_shader_ = new Shader(path_to_shader, FRAGMENT_SHADER);
    else
        vertex_shader_ = new Shader(path_to_shader, VERTEX_SHADER);
}

void Object::Prepare() {
    GLuint name;
    glGenBuffers(1, &name);
    glBindBuffer(GL_ARRAY_BUFFER, name);
    glBufferData(GL_ARRAY_BUFFER, num_vertices_ * sizeof(Vertex), &vertices_[0], GL_STATIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), 0);
    GLuint program;
    program = glCreateProgram();
    if (vertex_shader_ != NULL)
        vertex_shader_->Compile();
    if (fragment_shader_ != NULL)
        fragment_shader_->Compile();
    glBindAttribLocation(program, 0, "position");
    glBindAttribLocation(program, 0, "color");
    if (vertex_shader_ != NULL)
        vertex_shader_->attach(program);
    if (fragment_shader_ != NULL)
        fragment_shader_->attach(program);
    glLinkProgram(program);
    glValidateProgram(program);
    if (vertex_shader_ != NULL)
        vertex_shader_->delete_shader();
    if (fragment_shader_ != NULL)
        fragment_shader_->delete_shader();
    glUseProgram(program);
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glDeleteProgram(program);
}

void Object::Draw() {
    glDrawArrays(GL_POLYGON, 0, num_vertices_);
}