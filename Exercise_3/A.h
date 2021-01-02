//
// Created by Jeethesh on 02-01-2021.
//

#ifndef ASSIGNMENT_1_A_H
#define ASSIGNMENT_1_A_H
#include<iostream>
using namespace std;
class A {
private:
    int a;
    double b;
public:
    A(int c, double d):a(c), b(d){};
    int get_a();
    double get_b();
    void set_a(int c);
    void set_b(double d);
    virtual string toString();
};


#endif //ASSIGNMENT_1_A_H
