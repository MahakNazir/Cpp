#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n){
    if (n < 2) return -1;

    int small = INT_MAX;
    int second_small = INT_MAX;
    
    for(int i = 0; i < n; i++){
        if(arr[i] < small){
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small){
            second_small = arr[i];
        }
    }
        return second_small;
}
int secondLargest(int arr[],int n){  
    if(n<2)
	return -1;
    int largest = INT_MIN;
    int sec_largest = INT_MIN;
    
    for(int i = 0; i < n; i++){
        if (arr[i] > largest){
            sec_largest =  largest;
            largest = arr[i];
        }else if (arr[i] > sec_largest && arr[i] != largest){
            sec_largest = arr[i];
        }
    }
        return sec_largest;
}
int main(){
    int arr[] = {1,2,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"second smallest: "<<secondSmallest(arr,n)<<endl;
    cout<<"second largest: "<<secondLargest(arr,n);
    return 0;
    
}