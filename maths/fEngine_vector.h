//
// Created by filo on 1/6/18.
//

#ifndef FENGINE_FENGINE_VECTOR_H
#define FENGINE_FENGINE_VECTOR_H

#include <zconf.h>

const uint kMaxSize = 4;

struct Vector {
    Vector(uint size);
    Vector(float x, float y);
    Vector(float x, float y, float z);
    Vector(float x, float y, float z, float t);

    ~Vector() = default;

    void Print();

    Vector operator+(const Vector& v);
    Vector operator-(const Vector& v);
    Vector operator/(const Vector& v);
    Vector operator*(const Vector& v);
    bool operator==(const Vector& v);

    float coordinates_[kMaxSize];
    uint size_;
};


#endif //FENGINE_FENGINE_VECTOR_H
