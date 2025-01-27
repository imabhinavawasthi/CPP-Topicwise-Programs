#include <iostream>
using namespace std;

// Space Complexity - O(1)
// Time Complexity
// Worst Case - O(n^2)
// Best Case - Ω(n)
// Average Case - θ(n^2)

void bubble_sort(int n, vector<int>&arr) {
    for(int i=0;i<n;i++){
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false){ // array got sorted
            break;
        }
    }
}

int main() {
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble_sort(n,arr);

    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}