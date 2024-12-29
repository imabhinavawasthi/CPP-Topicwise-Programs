#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int age;
    cin>>age;

    try{
        if(age>=18){
            cout<<"License allotted";
        }
        else{
            throw "Not eligible";
        }
    }
    catch(string e){
        cout<<e<<"\n";
    }


    return 0;
}