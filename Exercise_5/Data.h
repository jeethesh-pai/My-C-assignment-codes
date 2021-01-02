//
// Created by Jeethesh on 02-01-2021.
//

#ifndef ASSIGNMENT_1_DATA_H
#define ASSIGNMENT_1_DATA_H
#include<fstream>
#include<iostream>
using namespace std;
class Data {
private:
    string name;
    int age;
    char gender;
    double height;
    double weight;
public:
    Data(){};
    Data(const Data& D){
        this->name = D.name;
        this->age = D.age;
        this->gender = D.gender;
        this->height = D.height;
        this->weight = D.weight;
    };
    Data(string name, int age, char gender, double height, double weight);
    void writeToBinaryFile(fstream& file);
    void readFromBinaryFile(fstream& file);
    void print();
};


#endif //ASSIGNMENT_1_DATA_H
