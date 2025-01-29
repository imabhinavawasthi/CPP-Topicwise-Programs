#include <iostream>
using namespace std;

// Space Complexity - O(max_element)
// Time Complexity
// Worst Case - O(max_element)
// Best Case - Ω(max_element)
// Average Case - θ(max_element)

void counting_sort(int n, vector<int>&arr) {
    int max_element = 0;
    for(int i=0;i<n;i++){
        max_element = max(max_element,arr[i]);
    }

    vector<int>freq(max_element+1,0);

    for(int i=0;i<n;i++) {
        freq[arr[i]]++;
    }

    int ind = 0;

    for(int i=0;i<=max_element;i++){
        while(freq[i]>0){
            arr[ind] = i;
            ind++;
            freq[i]--;
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

    counting_sort(n,arr);

    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}