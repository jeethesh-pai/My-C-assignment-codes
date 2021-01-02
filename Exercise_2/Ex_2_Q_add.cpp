//
// Created by Jeethesh on 02-01-2021.
//
#include<iostream>
using namespace std;
int main(){
    int size, sum;
    // here the dimensions of the matrix is by default square as specified in the problem.
    cout << "Enter the size of the matrix: ";
    cin >> size;
    int **matrix = new int *[size];
    int *col_matrix = new int [size];
    int *res_matrix = new int [size];
    for(int i = 0; i < size; i++)
        matrix[i] = new int [size];
    cout << "Enter the elements of the matrix in row fashion: " << endl;
    for(int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matrix[i][j];
    cout << endl;
    cout << "Enter the column matrix elements: ";
    for (int i = 0; i < size; i++)
        cin >> col_matrix[i];
    cout << endl;
    cout << "The entered matrices are : Square Matrix: " << endl;
    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << " " << matrix[i][j];
        cout << endl;
    }
    cout << "The entered matrices are : Column Matrix: ";
    for (int i = 0; i < size; i++)
        cout << endl << col_matrix[i];
    cout << endl << "The matrix product of matrices are: " << endl;
    for(int i = 0; i < size; i++) {
        sum = 0;
        for (int j = 0; j < size; j++)
            sum += matrix[i][j] * col_matrix[j];
        res_matrix[i] = sum;
        cout << res_matrix[i] << endl;
    }
    return 0;


}
