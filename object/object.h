//
// Created by filo on 1/26/18.
//

#ifndef FENGINE_OBJECT_H
#define FENGINE_OBJECT_H

#include "vertex.h"
#include "../defines.h"
#include "../shaders/shader.h"

#include <vector>

class Object {
    public:
        Object(std::vector <Vertex> &vertices, int type, unsigned int num_faces);
        ~Object() = default;
        void BindShader(const char* path_to_shader, int type);
        void Prepare();
        void Draw();
    private:
        std::vector <Vertex> vertices_;
        int type_;
        unsigned int num_faces_;
        unsigned int num_vertices_;
        Shader* vertex_shader_;
        Shader* fragment_shader_;
};


#endif //FENGINE_OBJECT_H
