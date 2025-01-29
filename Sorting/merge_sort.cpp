#include <iostream>
using namespace std;

// Space Complexity - O(n)
// Time Complexity
// Worst Case - O(nlog2n)
// Best Case - Ω(nlog2n)
// Average Case - θ(nlog2n)

void merge(vector<int>&arr, int l, int mid, int r) {
    int A[mid-l+1];
    int B[r-mid];

    int ind = 0;
    for(int i=l;i<=mid;i++){
        A[ind]=arr[i];
        i++;
        ind++;
    }

    ind = 0;
    for(int i=mid+1;i<=r;i++){
        B[ind]=arr[i];
        i++;
        ind++;
    }

    int i=0,j=0,k=l;

    while(k<=r){
        if(i==(mid-l+1)){ // i has reached end of array A
            arr[k]=B[j];
            k++;
            j++;
        }
        else if(j==(r-mid)){ // j has reached end of array B
            arr[k]=A[i];
            k++;
            i++;
        }
        else if(A[i]<B[j]){
            arr[k]=A[i];
            k++;
            i++;
        }
        else{
            arr[k]=B[j];
            k++;
            j++;
        }
    }
}

void merge_sort(vector<int>&arr, int l, int r) { // O(log2n)
    // base
    if(l>=r)return;

    // recursive
    int mid = (l+r)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);

    merge(arr,l,mid,r); // O(n)
}

int main() {
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    merge_sort(arr,0,n-1); // O(nlog2n)

    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}