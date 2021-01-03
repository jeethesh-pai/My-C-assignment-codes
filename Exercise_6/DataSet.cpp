//
// Created by Jeethesh on 03-01-2021.
//

#include "DataSet.h"

#include <iostream>
#include <exception>
#include <string>

DataSet::DataSet(int n) : n(n)
{
    this->data = new double[this->n];

    for( int i = 0; i < this->n; i++ )
    {
        this->data[i] = double(i);
    }
}

DataSet::DataSet(const DataSet &original) : n(original.n)
{
    this->data = new double[this->n];
    for (int i = 0; i < n; i++)
        this->data[i] = original.data[i];
}

DataSet::~DataSet() {
    delete [] this->data;
}

void DataSet::print(std::string name)
{
    std::cout << name << ": ";
    for( int i = 0; i < this->n; i++ )
    {
        std::cout << this->data[i] << ' ';
    }
    std::cout << std::endl;
}

void DataSet::modify()
{
    for( int i = 0; i < this->n; i++ )
    {
        this->data[i] = this->data[i] * this->data[i] + 1.0;
    }
}

void DataSet::operator+=(const DataSet& that)
{
    if (this->n != that.n)
        throw runtime_error("Arrays are not of same length...");
    else{
        for(int i = 0; i < n; i++)
            this->data[i] += that.data[i];
    }
}
