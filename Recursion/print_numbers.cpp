#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
#include<numeric>
using namespace std;

// write a recursive function to print numbers from 1 to n
void printNum(int i, int n){
    // base case
    if(i>n){
        return;
    }
    // recursive
    cout<<i<<" ";
    printNum(i+1,n);
}

int main() {
    int n;
    cin>>n;

    printNum(1,n);

    return 0;
}