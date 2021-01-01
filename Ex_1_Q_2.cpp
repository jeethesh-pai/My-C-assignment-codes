//
// Created by Jeethesh on 01-01-2021.
//
#include<iostream>
using namespace std;
int main(int argc, char **argv){
    int a = int(*argv[1]) - 48;
    int b = int(*argv[2]) - 48; // parsing char arguments as integers
    cout << "Entered numbers from the command line are : " << argv[1] << ' ' << argv[2] << endl;
    cout << a << '+' << b << '=' << a+b << endl;
    cout << a << '-' << b << '=' << a-b << endl;
    cout << a << '/' << b << '=' << a/b << endl;
    cout << a << '*' << b << '=' << a*b << endl;
    cout << a << '%' << b << '=' << a%b << endl;
    return 0;
    }
