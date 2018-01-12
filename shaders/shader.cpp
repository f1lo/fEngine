//
// Created by filo on 1/10/18.
//

#include "shader.h"
#include "../defines.h"

#include <fstream>
#include <vector>
#include <assert.h>

Shader::Shader(std::string shader_dir, __uint8_t type) {
    shader_type_ = type;
    std::ifstream ifs(shader_dir.c_str());
    if (ifs.fail()) {
        printf("Failed to open a file!\n");
        assert(false);
    }
    ifs.seekg(0, std::ios::end);
    shader_.reserve((unsigned long)ifs.tellg());
    ifs.seekg(0, std::ios::beg);

    shader_.assign((std::istreambuf_iterator<char>(ifs)),
               std::istreambuf_iterator<char>());
    src_ = shader_.c_str();
    shader_id_ = glCreateShader(shader_type_ == VERTEX_SHADER ? GL_VERTEX_SHADER : GL_FRAGMENT_SHADER);
}

void Shader::ErrorHandling() {
    int success;
    glGetShaderiv(shader_id_, GL_COMPILE_STATUS, &success);
    if (success == GL_FALSE) {
        int length;
        glGetShaderiv(shader_id_, GL_INFO_LOG_LENGTH, &length);
        char error[length];
        glGetShaderInfoLog(shader_id_, length, &length, error);
        printf("Failed to compile a shader: %s\n",error);
        delete_shader();
        assert(false);
    }
}

GLuint Shader::Compile() {
    glShaderSource(shader_id_, 1, &src_, NULL);
    glCompileShader(shader_id_);
    ErrorHandling();
}