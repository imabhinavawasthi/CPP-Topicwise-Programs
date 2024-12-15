#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
#include<numeric>
using namespace std;

bool isPrime(int n) {
    if(n==0||n==1)return false;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main() {
    
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<n<<" is a Prime Number";
    }
    else{
        cout<<n<<" is not a Prime Number";
    }

    return 0;
}