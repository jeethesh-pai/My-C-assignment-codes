//
// Created by Jeethesh on 03-01-2021.
//
#include<iostream>
#include<map>
#include<fstream>
using namespace std;
int main(){
    fstream fin("D:/TU Braunschweig Data/Introduction to C++/Exercises/SomeText.txt", ios::in);
    int value;
    map<string, int> configInfo;
    try{
        if(!fin)
            throw runtime_error("File could not be opened...");
        string line;
        while(getline(fin, line, '\n')){
            if(line[0] != '#'){
                int i = 0;
                while(line[i] != ':')
                    i++;
                string key(line, 0, i);
                string new_char(key);
                // key cleaner
                int counter = 0;
                for(int j = 0; j < key.length(); j++) {
                    if (!isalpha(key[j])) {
                        new_char.erase(j - counter, 1);
                        counter++;
                    }
                }
                key = new_char;
                i = i + 1;
                while(!isdigit(int(line[i])))
                    i++;
                int temp = i;
                while(isdigit(int(line[i])))
                    i++;
                string value_str(line, temp, i - temp + 1);
                value = stoi(value_str);
                configInfo[key] = value;
            }
        }
        cout << "The read values are as follows: " << endl;
        for(auto it = configInfo.begin(); it != configInfo.end(); it++){
            cout << "Key: " << it->first << " \t Value: " << it->second << endl;
        }
        string query_key;
        cout << "Enter key to find in the map: ";
        cin >> query_key;
        auto it = configInfo.find(query_key);
        configInfo.erase(it);
        cout << "The read values are as follows: " << endl;
        for(auto it = configInfo.begin(); it != configInfo.end(); it++)
            cout << "Key: " << it->first << " \t Value: " << it->second << endl;
    }
    catch(runtime_error& e){
        cout << e.what() << endl;
        return 1;
    }
    return 0;
}
