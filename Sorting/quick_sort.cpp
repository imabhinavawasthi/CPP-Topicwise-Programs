#include <iostream>
using namespace std;

// Space Complexity - O(1)
// Time Complexity
// Worst Case - O(n^2)
// Best Case - Ω(nlog2n)
// Average Case - θ(nlog2n)

int partition(vector<int>&arr, int l, int r) { // O(n)
    int pivot = arr[r];

    int start = l;

    for(int i=l;i<=r;i++){
        if(arr[i]<=pivot) {
            // swap i with start
            swap(arr[i],arr[start]);
            start++;
        }
    }

    return start-1;
}

void quick_sort(vector<int>&arr, int l, int r) { // O(n)
    // base
    if(l>=r)return;

    // partition
    int p = partition(arr,l,r);

    quick_sort(arr,l,p-1);
    quick_sort(arr,p+1,r);
}

int main() {
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quick_sort(arr,0,n-1); // O(n^2)

    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}