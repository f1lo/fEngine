//
// Created by filo on 1/6/18.
//

#include "fEngine_vector.h"

#include <iostream>

Vector::Vector(uint size) {
    size_ = size;
}

Vector::Vector(float x, float y) {
        coordinates_[0] = x;
        coordinates_[1] = y;
        size_ = 2;
}

Vector::Vector(float x, float y, float z) {
        coordinates_[0] = x;
        coordinates_[1] = y;
        coordinates_[2] = z;
        size_ = 3;
}

Vector::Vector(float x, float y, float z, float t) {
        coordinates_[0] = x;
        coordinates_[1] = y;
        coordinates_[2] = z;
        coordinates_[3] = t;
        size_ = 4;
}

void Vector::Print() {
    for (int i = 0; i < size_; i++)
        std::cout << coordinates_[i] << " ";
    std::cout << "\n";
}

Vector Vector::operator+(const Vector &v) {
    Vector result(size_);
    for (int i = 0; i < size_; i++)
        result.coordinates_[i] = coordinates_[i] + v.coordinates_[i];
    return result;
}

Vector Vector::operator-(const Vector &v) {
    Vector result(size_);
    for (int i = 0; i < size_; i++)
        result.coordinates_[i] = coordinates_[i] - v.coordinates_[i];
    return result;
}

Vector Vector::operator/(const Vector &v) {
    Vector result(size_);
    for (int i = 0; i < size_; i++)
        result.coordinates_[i] = coordinates_[i] / v.coordinates_[i];
    return result;
}

Vector Vector::operator*(const Vector &v) {
    Vector result(size_);
    for (int i = 0; i < size_; i++)
        result.coordinates_[i] = coordinates_[i] * v.coordinates_[i];
    return result;
}

bool Vector::operator==(const Vector &v) {
    bool result = true;
    for (int i = 0; i < size_; i++)
        result &= (coordinates_[i] == v.coordinates_[i]);
    return result;
}