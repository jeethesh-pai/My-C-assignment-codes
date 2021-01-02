//
// Created by Jeethesh on 02-01-2021.
//

#include "Dataset.h"

void Dataset::append(string name, int age, char gender, double height, double weight) {
    dataSet.push_back(Data(name, age, gender, height, weight));
}

void Dataset::read(string filename) {
    fstream fin(filename, ios::in|ios::binary);
    if(!fin)
        throw runtime_error("File could not be read error .... ");
    int num_elements;
    fin.read((char*) (&num_elements), 4 * sizeof(char));
    Data D;
    for (int i = 0; i < num_elements; i++){
        D.readFromBinaryFile(fin);
        dataSet.push_back(D);
    }
    fin.close();
}

void Dataset::write(string filename){
    fstream fout(filename, ios::out|ios::binary);
    if(!fout)
        throw runtime_error("File could not be read error .... ");
    int num_elements = dataSet.size();
    fout.write((char*) (&num_elements), 4 * sizeof(char));
    for (int i = 0; i < num_elements; i++)
        dataSet[i].writeToBinaryFile(fout);
    fout.close();
}

void Dataset::print() {
    cout << "The elements in the file are as follows" << endl;
    for(auto it = dataSet.begin(); it < dataSet.end(); it++)
        it->print();
}

