#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
#include<numeric>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main() {
    int x,y;
    cin>>x>>y;

    // using inbuild function
    // cout<<"GCD: "<<__gcd(x,y)<<"\n";

    cout<<"GCD: "<<gcd(x,y)<<"\n";
    cout<<"LCM: "<<lcm(x,y)<<"\n";


    return 0;
}