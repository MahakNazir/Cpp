#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &nums, int low, int high, int target){
   if(low > high)return -1;

        int mid = (low+high)/2;
        if(target == nums[mid]) return mid;
        else if(target > nums[mid]) return binarySearch(nums,mid+1,high,target);
        else return binarySearch(nums, 0 ,mid - 1, target);
    }
    int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}
int main(){
    vector<int> a = {0,2,3,6,7,8,10};
    int target = 7;
    int index = search(a, target);
    if(index == -1) cout<<"Element not found"<<endl;
    else cout<<"Element is at index "<<index<<endl;
    return 0;
}
