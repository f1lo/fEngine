//
// Created by filo on 1/10/18.
//

#include "shader.h"
#include <fstream>
#include <vector>
#include <iostream>

Shader::Shader(std::string shader_dir, ShaderType type) {
    std::ifstream ifs(shader_dir.c_str());
    if (ifs.fail()) {
        std::cout << "Failed to open a file!\n";
    }
    std::string str;
    ifs.seekg(0, std::ios::end);
    str.reserve(unsigned long(ifs.tellg()));
    ifs.seekg(0, std::ios::beg);

    str.assign((std::istreambuf_iterator<char>(ifs)),
               std::istreambuf_iterator<char>());

}