//
// Created by Jeethesh on 02-01-2021.
//
#include<iostream>
using namespace std;
int fibonacci_without_recursion(int n){
    int a = 0, b = 1, sum;
    if (n == 1)
        return a;
    else if(n == 2)
        return b;
    else {
        cout << endl;
        cout << a << " " << b;
        for (int i = 3; i <= n; i++) {
            sum = a + b;
            cout << " " << sum;
            a = b;
            b = sum;
        }
        cout << endl;
        cout << "The last number of the series is : ";
        return sum;
    }
}
int fibonacci(int n){
    // recursion variant
    if (n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(int argc, char **argv){
    cout << "Entered number is: " << argv[1] << endl;
    int a = int(*argv[1]) - 48;
    cout << a << endl;
    cout << "Fibonacci series of the number is : " << fibonacci_without_recursion(a);
    return 0;
}
