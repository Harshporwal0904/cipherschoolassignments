
/*Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
Output: 10 20 30 40*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printLinkedList(Node* &head){
    Node* current = head;

    while(current != NULL){
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;


}

Node* createNode(int value){
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> next = nullptr;
    return newNode;
}

int main(){
    Node* head = createNode(10);
    head -> next = createNode(20);
    head -> next -> next = createNode(30);
    head -> next -> next -> next = createNode(40);

    printLinkedList(head);
}

/*Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with 
the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node* &head, int data){
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> next = nullptr;
    

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* current = head;
    while(current -> next != nullptr){
        current = current -> next;
    }

    current -> next = newNode;
}

void printLinkedList(Node* &head){
    Node* current = head;

    while(current != NULL){
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;


}

int main(){
    Node* head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    insertAtEnd(head, 40);

    printLinkedList(head);
}

