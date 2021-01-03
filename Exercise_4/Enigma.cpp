//
// Created by Jeethesh on 03-01-2021.
//

#include "Enigma.h"

string Enigma::encrypt() {
    int shift = getShift();
    int new_char;
    for (int i = 0; i < message.length(); i++){
        new_char = int(message[i]) + shift;
        if(new_char > 126)
            new_char = new_char - 94;
        else if(new_char < 32)
            new_char = new_char + 94;
        message[i] = char(new_char);
    }
    return message;
}

int Enigma::getShift() {
    int sum = 0;
    for(int i = 0; i < key.length(); i++)
        sum += int(key[i]);
    int shift = sum % 94;
    return shift;
}

string Enigma::decrypt() {
    int shift = getShift();
    int new_char;
    for (int i = 0; i < message.length(); i++){
        new_char = int(message[i]) - shift;
        if(new_char > 126)
            new_char = new_char - 94;
        else if(new_char < 32)
            new_char = new_char + 94;
        message[i] = char(new_char);
    }
    return message;

}