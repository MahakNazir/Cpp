#include<bits/stdc++.h>
using namespace std;
bool checkAnagrams(string str1, string str2){
    
    if(str1.length() != str2.length()){
        return false;
    }
    sort(str1.begin(), str1.end()); //sort the characters in the strings str1 
    sort(str2.begin(),str2.end());  //and str2 in ascending order
    
    for(int i = 0; i <= str1.length() - 1; i++){
        if(str1[i] != str2[i]) return false;
    }
    return true;
}
int main(){
    string str1 = "mahak";
    cout<<"Sting1: "<<str1<<endl;
    string str2 = "kamah";
    cout<<"String2: "<<str2<<endl;
    if(checkAnagrams(str1,str2)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}