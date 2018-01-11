//
// Created by filo on 1/10/18.
//

#ifndef FENGINE_SHADER_H
#define FENGINE_SHADER_H

#include <string>

class Shader {
    public:
        explicit Shader(std::string shader_dir, ShaderType type);
        ~Shader() = default;
    private:
        std::string sader_;
    enum ShaderType{
        VERTEX_SHADER,
        FRAGMENT_SHADER
    };
};


#endif //FENGINE_SHADER_H
