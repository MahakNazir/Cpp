#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int mini = i;
        for(int j = i + 1; j < n; j++) { // j starts from i + 1
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout << "After Sorting: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]); //Determines the number of elements in an array in C++
    cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
   }
    cout<<"\n"; // Enters"After Sorting" in new line
    selectionSort(arr, n); // Call the function with the array and its size
    return 0;
}
