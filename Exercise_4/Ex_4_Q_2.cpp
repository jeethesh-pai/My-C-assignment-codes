//
// Created by Jeethesh on 03-01-2021.
//
#include<iostream>
#include "Enigma.h"
using namespace std;
int main(){
    Enigma E("Hello World", "swordfish");
    cout << "Encrypted Message: " ;
    cout << E.encrypt() << endl;
    cout << "Decrypted Message: ";
    cout << E.decrypt() << endl;
    return 0;
}
