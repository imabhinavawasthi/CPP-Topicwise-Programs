#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    
    // opening/create a text file for appending
    ofstream my_file("surya.txt",ios::app);

    my_file<<"Hello Abhinav"<<"\n";

    // close the file
    my_file.close();

    return 0;
}