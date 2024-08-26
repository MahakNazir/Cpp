#include <bits/stdc++.h>
using namespace std;

int oneCount(vector<int> &arr) {
    int count = 0;
    int maxm = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count++;
            maxm = max(maxm, count); 
        } else {
            count = 0; // Reset count on encountering a 0
        }
    }
    return maxm;
}
int main(){
    vector<int> arr = {1,1,1,0,0,1,1,0,1};
    cout << "Array given is: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int ans = oneCount(arr);
    cout<<"Number of 1's: "<<ans;
    return 0;
}