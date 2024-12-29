#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;

    try{
        int x = a/b;
        cout<<"X: "<<x<<"\n";
    }
    catch (exception e){
        cout<<"Some exception occurred";
    }


    return 0;
}