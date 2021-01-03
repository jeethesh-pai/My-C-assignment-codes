//
// Created by Jeethesh on 03-01-2021.
//
#include<iostream>
#include "ClassA.h"
#include "ClassB.h"
using namespace std;
template<class T>
void print(T t1){
    t1.getInfo();
}
int main(){
    ClassA A;
    ClassB B;
    print<ClassA>(A);
    print<ClassB>(B);
    return 0;
}
