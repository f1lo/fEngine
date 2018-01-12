//
// Created by filo on 1/10/18.
//

#ifndef FENGINE_SHADER_H
#define FENGINE_SHADER_H

#include <string>
#include <GL/glew.h>

class Shader {
    public:

        Shader(std::string shader_dir, __uint8_t type);
        ~Shader() = default;
        GLuint Compile();
        inline GLuint id() { return shader_id_ ; }
        inline __uint8_t type() { return shader_type_; }
        inline void delete_shader() { glDeleteShader(shader_id_); }
        inline void attach(GLuint& program_id) { glAttachShader(program_id, shader_id_); }

    private:

        void ErrorHandling();
        std::string shader_;
        __uint8_t shader_type_;
        GLuint shader_id_;
        const char *src_;
};


#endif //FENGINE_SHADER_H
