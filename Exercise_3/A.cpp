//
// Created by Jeethesh on 02-01-2021.
//

#include "A.h"

int A::get_a() {
    return a;
}
double A::get_b() {
    return b;
}
void A::set_a(int c) {
    a = c;
}
void A::set_b(double d) {
    b = d;
}
string A::toString(){
    string str;
    str = "a: " + std::to_string(a) + "\nb: " + std::to_string(b) + " \n";
    return str;
}
