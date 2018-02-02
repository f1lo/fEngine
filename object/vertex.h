//
// Created by filo on 1/10/18.
//

#ifndef FENGINE_VERTICES_H
#define FENGINE_VERTICES_H

struct Vertex {
    Vertex(float x, float y, float z) :
        x(x),
        y(y),
        z(z){}
    ~Vertex() = default;
    float x;
    float y;
    float z;
};


#endif //FENGINE_VERTICES_H
