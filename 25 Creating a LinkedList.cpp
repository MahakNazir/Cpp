#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
int main(){
    vector<int> arr = {2, 3, 4, 5, 6};
    Node* head = new Node(arr[0]); // creates an object which stores 
    Node* second = new Node(arr[1], nullptr); // element at index 2 and pointer to next node i.e., null
    head->next = second;
    cout << "Data at First Node is: " << head->data <<" "<<"with address: "<< head->next<<endl;
    cout << "Data at Second Node is: " << second->data<<" "<<"with address: "<< second->next<<endl;
    return 0;
}