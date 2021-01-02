//
// Created by Jeethesh on 01-01-2021.
//
#include<iostream>
#include<cstdlib>
#include<sstream>
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
int main(int argc, char **argv){
    double S;
    //the commented part of the program is for command line arguments
//    stringstream as;
//    as << argv[1];
//    double a;
//    as >> a;
//    cout << "a: " <<  a << endl;
//    cout << "Entered number is : " << argv[1] << endl;
//    double S1 = atof(argv[1]);
//    cout << S1 + 2.004 << endl;
    cout << "Enter a number is :";
    cin >> S;
    cout << endl << "Square root using Bhakshali Method is: ";
    double sqrt = mySqrt(S);
    cout << sqrt;
    return 0;
}
