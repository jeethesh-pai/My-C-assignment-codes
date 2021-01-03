//
// Created by Jeethesh on 03-01-2021.
//

#include "Line.h"

double getDistance(const Line &a, const Line &b, Vec3 &pointOnA, Vec3 &pointOnB) {
    Vec3 d1, d2, n, n1, n2;
    d1 = a.p2 - a.p1;
    d2 = b.p2 - b.p1;
    n = cross(d1, d2);
    n1 = cross(d1, n);
    n2 = cross(d2, n);
    if ((d1 * n2) == 0 || (d2 * n1) == 0)
        throw runtime_error("Lines are parallel.. This procedure will not work..");
    else{
        pointOnA = a.p1 + (((b.p1 - a.p1) * n2) / (d1 * n2)) * d1;
        pointOnB = b.p1 + (((a.p1 - b.p1) * n1) / (d2 * n1)) * d2;
        return getDistance(pointOnA, pointOnB);
    }
}
