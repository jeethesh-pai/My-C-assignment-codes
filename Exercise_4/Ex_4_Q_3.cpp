//
// Created by Jeethesh on 03-01-2021.
//
#include<iostream>
#include "Vector.h"
using namespace std;
int main(){
    Vector a(3);

    a.setMethod(0, 1.0);
    a.setMethod(1, 1.0);
    a.setMethod(2, 1.0);

    Vector b(3);
    b.setMethod(0, 2.0);
    b.setMethod(1, -2.0);
    b.setMethod(2, 0.0);

    a.print();
    b.print();

    cout << a.getNorm() << endl;
    cout << b.getNorm() << endl;

    cout << a.getScalarProduct(b) << endl;

    Vector c = a.add(b);
    c.print();

    return 0;

}
