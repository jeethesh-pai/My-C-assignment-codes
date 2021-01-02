//
// Created by Jeethesh on 02-01-2021.
//

#ifndef ASSIGNMENT_1_DATASET_H
#define ASSIGNMENT_1_DATASET_H

#include "Data.h"
#include<vector>
#include<iostream>
using namespace std;
class Dataset {
private:
    vector<Data> dataSet;
public:
    void append(string name, int age, char gender, double height, double weight);
    void read(string filename);
    void write(string filename);
    void print();
};


#endif //ASSIGNMENT_1_DATASET_H
