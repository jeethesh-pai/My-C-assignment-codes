//
// Created by Jeethesh on 02-01-2021.
//
#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;
int transform(int num){
    return num * num + num - 1;
}
int main(){
    try {
        string line;
        ifstream fin("D:/TU Braunschweig Data/Introduction to C++/Exercises/Exercise_5/dataIn.dat", ios::in);
        if (!fin.is_open())
            throw runtime_error("File could not be open...");
        getline(fin, line, '\n');
        int size = stoi(line);
        int *list = new int[size];
        int *new_list = new int[size];
        int i = 0;
        while (fin >> list[i])
            i++;
        fin.close();
        cout << "The array is: " << endl;
        for (int i = 0; i < size; i++){
            cout << " " << list[i];
            new_list[i] = transform(list[i]);
        }
        ofstream fout("D:/TU Braunschweig Data/Introduction to C++/Exercises/Exercise_5/dataOut2.dat", ios::out);
        if(!fout.is_open())
            throw runtime_error("File could not be open...");
        fout << size << "\n";
        for(i = 0; i < size; i++)
            fout << new_list[i] << "\n";
        fout.close();
        fin.open("D:/TU Braunschweig Data/Introduction to C++/Exercises/Exercise_5/dataOut2.dat", ios::in);
        if (!fin.is_open())
            throw runtime_error("File could not be open...");
        fin >> size;
        i = 0;
        cout << endl << "The transformed array is: " << size << endl;
        while(fin >> list[i]) {
            cout << list[i] << " ";
            i++;
        }
        fin.close();
        delete[] list;
        delete[] new_list;
    }
    catch(runtime_error& e){
        cerr << e.what() << endl;
        return 1;
    }

    return 0;
}