#include <iostream>
using namespace std;

// Space Complexity - O(1)
// Time Complexity
// Worst Case - O(n^2)
// Best Case - Ω(n^2)
// Average Case - θ(n^2)

void selection_sort(int n, vector<int>&arr) {
    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]) {
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}

int main() {
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(n,arr);

    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}