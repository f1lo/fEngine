//
// Created by filo on 1/10/18.
//

#ifndef FENGINE_COORDINATE_H
#define FENGINE_COORDINATE_H


struct Coordinate {
    Coordinate(float x, float y, float z);
    ~Coordinate() = default;
    float x_;
    float y_;
    float z_;
};


#endif //FENGINE_COORDINATE_H
