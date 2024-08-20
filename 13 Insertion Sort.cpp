#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j]  = temp;
            j--;
        }
    }
    cout<<"After sorting: "<<" "<< endl;
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {2,4,0,7,4,35,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting: "<<" "<<endl;
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
}
cout << "\n";
InsertionSort(arr,n);
return 0;
}
