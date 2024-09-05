#include <bits/stdc++.h>
using namespace std;
class Stack{
    int size;
    int top;
    int * arr; 
    public:
    Stack(){
        size = 1000;
        top = -1;
        arr = new int[size];  //Dynamically allocates an array of integers of size 1000
    }
    void push(int x){
        top ++;
        arr[top] = x;
    }
    int pop(){
        int x = arr[top];
        top --;
        return x;
    }
    int Top(){
        return arr[top];
    }
    int Size(){
        return top + 1;
    }
};
int main(){
    Stack s;  //Stack -> class
    s.push(2);
    s.push(4);
    s.push(6);
    cout<<"Top before deleting top: "<<s.Top()<<endl;
    cout<<"Pop top element :"<<s.pop()<<endl;
    cout<<"Top after popping top: "<<s.Top()<<endl;
    cout<<"Size of the stack after popping top: "<<s.Size()<<endl;
    return 0;
}