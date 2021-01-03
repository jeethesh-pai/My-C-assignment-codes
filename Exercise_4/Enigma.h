//
// Created by Jeethesh on 03-01-2021.
//

#ifndef ASSIGNMENT_1_ENIGMA_H
#define ASSIGNMENT_1_ENIGMA_H

#include<iostream>
using namespace std;
class Enigma {
private:
    int getShift();
    string message;
    string key;
public:
    Enigma(string message, string key): message(message), key(key){};
    string encrypt();
    string decrypt();
};


#endif //ASSIGNMENT_1_ENIGMA_H
