//
// Created by Jeethesh on 02-01-2021.
//

#ifndef ASSIGNMENT_1_B_H
#define ASSIGNMENT_1_B_H
#include<iostream>
#include "A.h"
using namespace std;

class B : public A{
private:
    int c;
public:
    B(int c, double d1, int d) :c(d), A(c, d1) {};
    int get_c();
    void set_c(int d);
    string toString();
};


#endif //ASSIGNMENT_1_B_H
