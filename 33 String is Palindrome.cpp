#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    int left = 0;
    int right = str.length() - 1;
    if(!isalnum(str[left])){
        left++;
    }
    else if(!isalnum(str[right])){
        right--;
    }
    else{
        if(tolower(str[left]) != tolower(str[right])){
            return false;
        }
        left++;
        right--;
    }
return true;
}


int main(){
    string st = "A man a plan a canal Panama";
    if(isPalindrome(st)){
        cout<<"Palindrome";
    }else {
        cout<<"Not Palindrome";
    }
    return 0;
}
