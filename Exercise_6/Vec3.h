//
// Created by Jeethesh on 03-01-2021.
//

#ifndef ASSIGNMENT_1_VEC3_H
#define ASSIGNMENT_1_VEC3_H
#include<iostream>
using namespace std;

class Vec3 {
private:
    double x;
    double y;
    double z;
public:
    Vec3():x(0), y(0), z(0){};
    Vec3(double a, double b, double c):x(a), y(b), z(c){};
    double operator*(const Vec3& that) const;
    Vec3 operator+ (const Vec3& that) const;
    Vec3 operator- (const Vec3& that) const;
    string print();
    friend double getDistance(const Vec3& a, const Vec3& b);
    friend Vec3 cross(const Vec3& a, const Vec3& b);
    friend Vec3 operator*(const double a, const Vec3& vec);
};


#endif //ASSIGNMENT_1_VEC3_H
