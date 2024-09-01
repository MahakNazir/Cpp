        //Count the frequency of elements in an array using a HashMap
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<< "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout <<"Enter the elements of array: ";
    map<int, int> mpp;
    for (int i =0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    for(auto itr : mpp){
        cout <<itr.first<< "->" <<itr.second <<endl;
    }
    
    int q;  //This variable stores how many times a particular number appears in the array.
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout<< mpp[number]<< endl;
    }
    return 0;
}