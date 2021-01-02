//
// Created by Jeethesh on 02-01-2021.
//

#include "Data.h"
using namespace std;

Data::Data(string name, int age, char gender, double height, double weight) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->height = height;
    this->weight = weight;
}

void Data::readFromBinaryFile(fstream &file){
    char temp[16];
    file.read((char*) temp, 16 * sizeof(char));
    file.read((char*) &age,  4 * sizeof(char));
    file.read((char*) &gender, 1 * sizeof(char));
    file.read((char*) &height, 8 * sizeof(char));
    file.read((char*) &weight, 8 * sizeof(char));
    name = temp;
}

void Data::writeToBinaryFile(fstream &file) {
    name.append(16 - name.length(), '\0');
    file.write((char*) name.c_str(), 16 * sizeof(char));
    file.write((char*) &age, 4 * sizeof(char));
    file.write((char*) &gender, 1 * sizeof(char));
    file.write((char*) &height, 8 * sizeof(char));
    file.write((char*) &weight, 8 * sizeof(char));
}

void Data::print() {
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
}