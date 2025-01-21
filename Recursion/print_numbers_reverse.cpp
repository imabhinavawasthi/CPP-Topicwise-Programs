#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
#include<numeric>
using namespace std;

// write a recursive function to print numbers from 1 to n
void printNumReverse(int i, int n){
    // base case
    if(i>n){
        return;
    }
    // recursive
    printNumReverse(i+1,n);
    cout<<i<<" ";
}

int main() {
    int n;
    cin>>n;

    printNumReverse(1,n);

    return 0;
}