/*Ques 1: Write a C++ code that take linked list from user input that is in sorted order and 
a value integer. Now insert the value inside linkedlist such that new likedlist is also in sorted order. Sample Input:- 10->20->30->40 value =25 Sample Output:- 10->20->25->30->40*/

#include <bits/stdc++.h>
using namespace std;


// Node class for linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert a new node in a sorted linked list
Node* insertSorted(Node* head, int value) {
    Node* newNode = new Node(value);
    
    // Case 1: Insert at the beginning (head)
    if (!head || head->data >= value) {
        newNode->next = head;
        return newNode;
    }

    // Case 2: Insert in the middle or at the end
    Node* current = head;
    while (current->next && current->next->data < value) {
        current = current->next;
    }
    
    // Insert the new node
    newNode->next = current->next;
    current->next = newNode;

    return head;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data;
        if (current->next) cout << "->";
        current = current->next;
    }
    cout << endl;
}

// Main function
int main() {
    int n, value;
    cout << "Enter the number of elements in the sorted linked list: ";
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter the elements of the sorted linked list: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Enter the value to insert: ";
    cin >> value;

    // Insert the value into the sorted linked list
    head = insertSorted(head, value);

    // Display the updated linked list
    cout << "Updated linked list: ";
    displayList(head);

    // Clean up memory
    /*Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }*/

    return 0;
}
