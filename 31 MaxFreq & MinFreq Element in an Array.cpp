// find the element with the maximum frequency and the element with the minimum frequency in an array
#include<bits/stdc++.h>
using namespace std;
void freq(int arr[], int n){
    
    unordered_map<int, int> map;
   
    
    for(int i = 0; i < n; i++)
        map[arr[i]]++;
        
        int maxEl = 0;
        int maxFreq = 0;    //Start with the lowest possible frequency
        int minEl = 0;
        int minFreq = n;    //Start with the highest possible frequency
    
    for(auto itr : map){
        int count = itr.second;
        int element = itr.first;
    
        if (count > maxFreq) {
            maxEl = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEl = element;
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEl << " and the frequency is: "<<maxFreq <<"\n";
    cout << "The lowest frequency element is: " << minEl << " and the frequency is: "<<minFreq << "\n";
}
int main(){
    int arr[] = {2,1,2,3,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    freq(arr,size);
    return 0;
}