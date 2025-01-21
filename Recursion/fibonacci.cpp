// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int fib(int n) {
    // base case
    if(n==0||n==1){
        return n;
    }
    // recursive case
    return fib(n-1)+fib(n-2);
}

int main() {
    int n;
    cin>>n;
    
    cout<<fib(n);

    return 0;
}