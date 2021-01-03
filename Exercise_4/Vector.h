//
// Created by Jeethesh on 03-01-2021.
//

#ifndef ASSIGNMENT_1_VECTOR_H
#define ASSIGNMENT_1_VECTOR_H

#include<iostream>
#include<vector>
using namespace std;
class Vector {
private:
    vector<double> Data;
public:
    Vector(int size):Data(size){};
    double getMethod(int index);
    void setMethod(int index, double value);
    double getNorm();
    void print();
    double getScalarProduct(const Vector& b);
    Vector add(const Vector& b);
};


#endif //ASSIGNMENT_1_VECTOR_H
