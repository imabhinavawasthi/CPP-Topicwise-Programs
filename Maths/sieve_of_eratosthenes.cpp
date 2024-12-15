#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
#include<numeric>
using namespace std;

vector<bool> sieve(int n){
    vector<bool>primes(n+1,true);

    primes[0]=false;
    primes[1]=false;

    for(int i=2;i<=sqrt(n);i++){
        if(primes[i]==true){
            // all multiples false
            for(int j=i*i;j<=n;j+=i){
                primes[j]=false;
            }
        }
    }

    return primes;
}

int main() {
    
    int n;
    cin>>n;

    vector<bool> primes = sieve(n);
    
    for(int i=2;i<=n;i++){
        if(primes[i]){
            cout<<i<<" ";
        }
    }

    return 0;
}