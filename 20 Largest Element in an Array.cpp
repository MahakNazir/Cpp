#include<bits/stdc++.h>
using namespace std;
int largestElement(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i <= n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[] = {2,8,10,0,36};
    int n =5;
    for(int i =0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Largest element "<<"is "<<largestElement(arr,n);
    return 0;
}