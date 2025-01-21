// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int power(int x, int n) { // O(log2N)
    // base
    if(n==0){
        return 1;
    }
    // recursive 
    int y = power(x,n/2);
    if(n%2==0){// even
        return y*y;
    }
    else{// odd
        return y*y*x;
    }
}

int main() {
    int x,n;//x^n
    cin>>x>>n;
    
    cout<<power(x,n)<<"\n";

    return 0;
}