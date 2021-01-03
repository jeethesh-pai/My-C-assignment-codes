//
// Created by Jeethesh on 03-01-2021.
//

#include "Vec3.h"
#include<cmath>
double Vec3::operator*(const Vec3 &that) const {
    double sum = 0;
    sum += that.x * this->x + that.y * this->y + that.z * this->z;
    return sum;
}

Vec3 Vec3::operator+(const Vec3 &that) const {
    return Vec3(that.x + this->x, that.y + this->y, that.z + this->z);
}

Vec3 Vec3::operator-(const Vec3 &that) const {
    return Vec3(this->x - that.x, this->y - that.y, this->z - that.z);
}

string Vec3::print() {
    string s= "The point is: x: " + to_string(x) + " y: " + to_string(y) + " z: " + to_string(z) + "\n";
    return s;
}

double getDistance(const Vec3 &a, const Vec3 &b) {
    double sum = 0;
    sum += pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2);
    return sqrt(sum);
}

Vec3 cross(const Vec3 &a, const Vec3 &b) {
    double x = a.y * b.z - b.y * a.z;
    double y = - a.x * b.z + b.x * a.z;
    double z = a.x * b.y - b.x * a.y;
    return Vec3(x, y, z);
}

Vec3 operator*(const double a, const Vec3 &vec) {
    return Vec3(a* vec.x, a * vec.y, a * vec.z);
}


