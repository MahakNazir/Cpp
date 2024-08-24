#include<bits/stdc++.h>
using namespace std;
string result(string s){
    int left = 0;
    int right = s.length() - 1;
    
    string temp = "";
    string ans = "";
    
    while(left <= right){
        char ch = s[left]; //stores the current character
        if (ch != ' ') {    //If current character is a space
            temp += ch;
        }else if(ch == ' '){
            if(ans != "")
                ans = temp + " " + ans; // adds the current character before the characters stored in ans 
            else ans = temp;
            temp = "";    
            }
            left++;
    }
    if(temp != ""){
        if(ans!= "") ans = temp + " " + ans;
    }
    return ans;
}
int main(){
    string st = " All eyes on me";
    cout<<"Before reversing: "<<st<<endl;
    cout<<"After reversing: "<<result(st)<<endl;
    return 0;
}



