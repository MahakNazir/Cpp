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
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if(checkAnagrams(str1,str2)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}
/*LINE 21 & 22
"transform(input_begin, input_end, output_begin, operation);"

input_begin: An iterator pointing to the start of the range you want to transform.
input_end: An iterator pointing to one past the end of the range.
output_begin: An iterator pointing to where the results will be stored (can be the same as the input if you want to modify the string in place).
operation: A unary operation to apply to each element in the range (like converting to lowercase).
*/
