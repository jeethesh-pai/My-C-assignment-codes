//
// Created by Jeethesh on 03-01-2021.
//
#include<iostream>
using namespace std;
#include<list>
int main(){
    list<int> container;
    int num;
    do{
        cout << "Enter a number: ";
        cin >> num;
        container.push_front(num);
        container.sort();
        cout << " The array after sort is : " << endl;
        for (auto it = container.begin(); it != container.end(); it++)
            cout << *it << " ";
        cout << endl;
    }while(num != '\0');
    return 0;
}
