#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int high, int mid) {
	vector<int> temp;
	int left = low;
	int right = mid + 1;

	while(left <=  mid && right <= high) {
		if(arr[left] <= arr[right]) {
			temp.push_back(arr[left]);
			left++;
		}
		else {
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left <= mid) {
		temp.push_back(arr[left]);
		left++;
	}
	while(right <= high) {
		temp.push_back(arr[right]);
		right++;
	}
	for(int i = low; i <= high; i++) {      //copy the sorted elements from the temp vector
		arr[i] = temp[i - low];             // back into the original arr vector
	}
}
void mergeSort(vector<int> &arr, int low, int high) {
	if(low >= high) return;  //Base case: single element or invalid range
	int mid = (low+high)/2;	
	mergeSort(arr, low, mid);	// Recursively sort the left half
	mergeSort(arr, mid + 1, high);	// Recursively sort the right half
	merge(arr, low, high, mid);	// Merge the sorted halves
}
int main() {
	vector<int> arr = {2,5,9,1,3,4};
	int n = 6;
	
	cout<<"Before Sorting: "<<" "<<endl;
	for(int i = 0; i <n; i++) {
		cout<<arr[i]<<" ";
	}
	cout << endl;
	
    mergeSort(arr, 0, n - 1);
	cout<<"After Sorting: "<<" "<<endl;
	for(int i = 0; i<n; i++) {
		cout<<arr[i]<<" ";
	}

    return 0;
}
