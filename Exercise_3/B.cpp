//
// Created by Jeethesh on 02-01-2021.
//

#include "B.h"
int B::get_c() {
    return c;
}

void B::set_c(int d) {
    c = d;
}
string B::toString() {
    string str, str1;
    str1 = A::toString();
    str = "c : " + std::to_string(c) + "\n";
    return str1.append(str);
}
