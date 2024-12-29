#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    
    // opening a text file for reading
    ifstream my_file("abhinav.txt");
    // fstream my_file("abhinav.txt",ios::in);

    if(my_file.fail()){ //!my_file, !my_file.is_open(), my_file.fail()
        cout<<"File not present";
        return 0;
    }

    string line;

    // print all the lines
    while(!my_file.eof()){
        // getline will get the current line one by one
        getline(my_file, line);
        cout<<line<<"\n";
    }

    // close the file
    my_file.close();

    return 0;
}