//
// Created by Jeethesh on 02-01-2021.
//
#include<iostream>
using namespace std;
int add_by_value(int a, int b){
    a = a + 2;
    b = b + 2;
    return a + b;
}
int add_by_reference(int &a, int &b){
    a = a + 2;
    b = b + 2;
    return a + b;
}
int add_by_pointer(int *a, int *b){
    *a = *a + 2;
    *b = *b + 2;
    return *a + *b;
}
int main(int argc, char **argv){
    cout << "Entered numbers are: " << argv[1] << " " << argv[2] << endl;
    int a = int(*argv[1]) - 48;
    int b = int(*argv[2]) -48;
    cout << "Sum after call by value: " << add_by_value(a, b) << endl;
    cout << "No. after call by value: " << a << " " << b << endl;
    cout << "Sum after call by reference: " << add_by_reference(a, b) << endl;
    cout << "No. after call by reference: " << a << " " << b << endl;
    a = int(*argv[1]) - 48;
    b = int(*argv[2]) - 48;
    cout << "Sum after call by pointer: " << add_by_pointer(&a, &b) << endl;
    cout << "No. after call by pointer: " << a << " " << b << endl;
    return 0;
}
