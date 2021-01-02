//
// Created by Jeethesh on 02-01-2021.
//
#include<iostream>
#include<fstream>
#include "Dataset.h"
using namespace std;
int main(){
    try {
        Dataset dataset;
        // uncomment the following line for writing to a file
//        dataset.append("Jeethesh", 25, 'm', 1.82, 75.5);
//        dataset.append("Krishnan", 22, 'm', 1.58, 55.5);
//        dataset.append("Narasimman", 25, 'm', 1.69, 60.5);
//        dataset.write("D:/TU Braunschweig Data/Introduction to C++/Exercises/Exercise_5/new_data.bin");
        dataset.read("D:/TU Braunschweig Data/Introduction to C++/Exercises/Exercise_5/new_data.bin");
        dataset.print();

    }
    catch(runtime_error &e){
        cout << e.what() << endl;
        return 1;
    }
    return 0;
}
