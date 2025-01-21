// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int powerUsingLoop(int x, int n) {
    int ans = 1;

    for(int i=1;i<=n;i++){
        ans*=x;
    }

    return ans;
}

int powerUsingRecursion(int x, int n) {
    // base
    if(n==0){
        return 1;
    }
    // recursive 
    return x*powerUsingRecursion(x,n-1);
}

int main() {
    int x,n;//x^n
    cin>>x>>n;
    
    cout<<powerUsingLoop(x,n)<<"\n";

    cout<<powerUsingRecursion(x,n)<<"\n";

    return 0;
}