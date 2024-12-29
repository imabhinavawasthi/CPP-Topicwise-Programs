#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    
    // opening/create a text file for writing
    ofstream my_file("surya.txt");
    // fstream my_file("surya.txt",ios::out);

    my_file<<"Hello Surya"<<"\n";
    my_file<<"How are you?"<<"\n";
    my_file<<"I am fine"<<"\n";

    // close the file
    my_file.close();

    return 0;
}