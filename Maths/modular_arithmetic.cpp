#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
#include<numeric>
using namespace std;

int moduloAddition(int x, int y, int m){
    return ((x%m) + (y%m))%m;
}
int moduloSubstraction(int x, int y, int m){
    return ((x%m) - (y%m) + m)%m;
}
int moduloMultiplication(int x, int y, int m){
    return ((x%m) * (y%m))%m;
}

int main() {
    // (x+y)%m = ((x%m) + (y%m))%m
    // (x-y)%m = ((x%m) - (y%m))%m
    // (x*y)%m = ((x%m) * (y%m))%m

    int x,y,m;

    cin>>x>>y>>m;

    cout<<"moduloAddition: "<<moduloAddition(x,y,m)<<"\n";
    cout<<"moduloSubstraction: "<<moduloSubstraction(x,y,m)<<"\n";
    cout<<"moduloMultiplication: "<<moduloMultiplication(x,y,m)<<"\n";

    return 0;
}