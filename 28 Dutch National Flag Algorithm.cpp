#include<bits/stdc++.h>
using namespace std;

int sort012(int arr[], int n) {
    int lo = 0;         // Pointer for the beginning of the array (where 0s will go)
    int hi = n - 1;     // Pointer for the end of the array (where 2s will go)
    int mid = 0;        // Pointer to traverse the array

    // Iterate until mid crosses hi
    while(mid <= hi) {
        switch (arr[mid]) {

            // If the element is 0
            case 0:
                swap(arr[lo++], arr[mid++]); // Swap the current element with the element at 'lo' 
                break;                          //and increment both

            // If the element is 1
            case 1:
                mid++; 
                break;

            // If the element is 2
            case 2:
                swap(arr[mid], arr[hi--]); // Swap the current element with the element at 'hi'
                // Do not increment 'mid' because the swapped element needs to be checked
                break;
        }
    }
    return 0;
}

// Function to print the array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
}

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]); //number of elements in the array
    
    int ans = sort012(arr, n); // Sort the array
    cout << "Sorted array is: "; 
    
    printArray(arr, n); // Print the sorted array 
    
    return 0; 
}
