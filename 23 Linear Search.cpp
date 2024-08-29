#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &nums, int n) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == n) {
            return i;
        }
    }
    // Number not found
    return -1;
}
int main() {
    vector<int> nums = {2, 3, 4, 7, 9};
    int n = 4;
  
    int size = nums.size(); // in case of vectors: sizeof(arr)/sizeof(arr[0]) doesn't work
    
    int ans = linearSearch(nums, n);
    
    if (ans != -1) {
        cout << "Number is at index: " << ans;
    } else {
        cout << "Number not found";
    }
    
    return 0;
}
