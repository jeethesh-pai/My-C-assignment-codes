//
// Created by Jeethesh on 03-01-2021.
//

#ifndef ASSIGNMENT_1_DATASET_H
#define ASSIGNMENT_1_DATASET_H

#include <string>

using namespace std;
class DataSet {
private:
    double* data;
    int n;

public:
    DataSet( int n );
    DataSet( const DataSet& original );

    ~DataSet();

    void print(string name);

    void modify();

    void operator+=( const DataSet& that );

};


#endif //ASSIGNMENT_1_DATASET_H
