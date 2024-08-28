#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    // Constructor with both data and next node
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data (assuming next is initially null)
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to print the linked list
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

// Function to insert a new node at the head of the linked list
Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, head);
    return temp;
}

int main() {
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;
    
    // Creating a linked list from the array
    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < arr.size(); i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    // Inserting a new head node with value 100
    head = insertHead(head, val);

    // Printing the linked list
    printLL(head);

    return 0;
}