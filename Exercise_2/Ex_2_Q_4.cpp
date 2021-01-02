//
// Created by Jeethesh on 02-01-2021.
//
#include<iostream>
using namespace std;
int find_previous_strain(int *strain, int size, int new_strain){
    int i = 0;
    while(new_strain > strain[i])
        i++;
    if (i < size)
        return i - 1;
    else
        return -1;
}
int main(){
    int size, new_strain;
    float new_stress;
    cout << "Enter the size of the query data: ";
    cin >> size;
    int *stress = new int [size];
    int *strain = new int [size];
    cout << "Enter the values of the stress and strain successively: " << endl;
    for(int i = 0; i < size; i++)
        cin >> strain[i] >> stress[i];
    cout << "Enter the strain point for interpolated stress: " ;
    cin >> new_strain;
    cout << endl;
    cout << "Entered values are: "<< endl;
    for (int i = 0; i < size; i++)
        cout << strain[i] << " ";
    cout << endl;
    for (int i = 0; i < size; i++)
        cout << stress[i] << " ";
    cout << endl;
    int pos = find_previous_strain(strain, size, new_strain);
    new_stress = stress[pos] + (new_strain - strain[pos]) * (stress[pos + 1] - stress[pos])/(strain[pos + 1] - strain[pos]);
    cout << "The interpolated stress is : " << new_stress << endl;
    return 0;
}
