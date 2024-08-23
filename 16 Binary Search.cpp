#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &nums, int target){
    int n = nums.size();
    int low = 0, high = n-1;
    
    while(low <= high){
        int mid = (low+high)/2;
        if (nums[mid] == target) return mid;
        else if(target > nums[mid]) low =  mid + 1; // Starting of righ sub-array
        else high = mid - 1; // End of left sub-array
    }
    return -1;
}
int main(){
    vector<int> a = {0,2,7,9,10};
    int target = 2;
    int ind = binarySearch(a, target);
    if(ind == -1) cout<<"Number not found"<<endl;
    else cout<<"The number is at index"<<" "<<ind<<endl;
    return 0;
}