//
// Created by Jeethesh on 03-01-2021.
//

#include "Vector.h"
#include<cmath>

double Vector::getMethod(int index) {
    return Data[index];
}

void Vector::setMethod(int index, double value) {
    Data[index] = value;
}

double Vector::getNorm() {
    double sum = 0;
    for(auto it = Data.begin(); it < Data.end(); it++)
        sum += *it * *it ;
    return sqrt(sum);
}

void Vector::print() {
    cout << "Vector is as follows: " ;
    for(auto it = Data.begin(); it < Data.end(); it++)
        cout << *it << " ";
    cout << endl;
}

double Vector::getScalarProduct(const Vector &b) {
    double sum = 0;
    for(int i = 0; i < Data.size(); i++)
        sum += Data[i] * b.Data[i];
    return sum;
}

Vector Vector::add(const Vector &b) {
    Vector c(b.Data.size());
    for(int i = 0; i < Data.size(); i++)
        c.Data[i] = Data[i] + b.Data[i];
    return c;
}


