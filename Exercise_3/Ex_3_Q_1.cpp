//
// Created by Jeethesh on 02-01-2021.
//
#include<iostream>
#include "A.h"
#include "B.h"
using namespace std;
int main(){
    A objectA(5, 3.14);
    cout << objectA.toString();
    objectA.set_a(6);
    objectA.set_b(2.71);
    cout << objectA.toString();
    B objectB(1, 2.5, 2);
    cout << objectB.toString();
    objectB.set_a(2);
    objectB.set_b(3.5);
    objectB.set_c(3);
    cout << objectB.toString();
    return 0;
}
