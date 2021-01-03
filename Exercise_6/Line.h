//
// Created by Jeethesh on 03-01-2021.
//

#ifndef ASSIGNMENT_1_LINE_H
#define ASSIGNMENT_1_LINE_H

#include "Vec3.h"
class Line {
private:
    Vec3 p1, p2;
public:
    Line(const Vec3& c1, const Vec3& c2):p1(c1), p2(c2){};
    friend double getDistance(const Line& a, const Line& b, Vec3& pointOnA, Vec3& pointOnB);
};


#endif //ASSIGNMENT_1_LINE_H
