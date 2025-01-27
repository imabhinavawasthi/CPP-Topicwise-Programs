#include <iostream>
using namespace std;

// Space Complexity - O(1)
// Time Complexity
// Worst Case - O(n^2)
// Best Case - Ω(n)
// Average Case - θ(n^2)

void insertion_sort(int n, vector<int>&arr) {
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main() {
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertion_sort(n,arr);

    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}