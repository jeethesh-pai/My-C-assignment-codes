//
// Created by Jeethesh on 02-01-2021.
//
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p, q;
    cout << "Enter the two coefficients: " << endl;
    cin >> p >> q;
    cout << "The solution for the quadratic equation: x^2 + " << p << "x + " << q << ":" << endl;
    float D = pow((p /2), 2) - q;
    if (D < 0){
        cout << "No roots for this equation" << endl;
        return 1;
    }
    else{
        cout << "Solutions for the equations are: " << - (p/2) + sqrt(D) << " & " << - (p/2) - sqrt(D) << endl;
    }
    return 0;
}
