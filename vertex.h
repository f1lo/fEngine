//
// Created by filo on 1/10/18.
//

#ifndef FENGINE_VERTICES_H
#define FENGINE_VERTICES_H

#include "coordinate.h"

class Vertex {
    public:
        explicit Vertex(Coordinate coord);
        ~Vertex() = default;

    private:
        float x_;
        float y_;
        float z_;
};


#endif //FENGINE_VERTICES_H
