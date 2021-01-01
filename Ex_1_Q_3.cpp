//
// Created by Jeethesh on 01-01-2021.
//
#include<iostream>
using namespace std;
double mySqrt(double S){
    if (S < 0)
        return -1.0;
    else{
        float xn = 1;
        float an = (S - xn * xn) / (2 * xn);
        float bn = xn + an;
        float x_new = (xn + an) - an * an / (2 * (xn + an));
        while (abs((x_new - xn) / xn) > 1e-5){
            xn = x_new;
            an = (S - xn * xn) / (2 * xn);
            bn = xn + an;
            x_new = (xn + an) - an * an / (2 * (xn + an));
        }
        return x_new;
    }
}
int main(){
    double S;
    cout << "Enter a number is : ";
    cin >> S;
    cout << "Square root using Bhakshali Method is: ";
    double sqrt = mySqrt(S);
    cout << sqrt;
    return 0;
}
