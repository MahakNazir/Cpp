#include<bits/stdc++.h>
using namespace std;
int sumString(int arr[], int n){
    int maxm = INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        
        if(sum > maxm){
            maxm = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxm;
}
int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = sumString(arr,n);
    cout<<ans;
    return 0;
}