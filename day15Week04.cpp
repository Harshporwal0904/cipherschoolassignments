/*Ques 1: Write a program that defines a Student class and uses the this pointer in a 
member function to display the student's details.*/

#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int ID;

    public:
        Student(string n, int a, int id){
            name = n;
            age = a;
            ID = id;
        }

        void displayDetails(){
            cout << "Student name: " << this->name << endl;
            cout << "Student age: " << this->age << endl;
            cout << "Student ID: " << this->ID << endl;
        }
};

int main(){
    Student student1("Harsh", 20, 901);

    student1.displayDetails();

    return 0;
}

/*Ques 2: Write a C++ code that take linked list from user input and a value integer . 
Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40*/

#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
};

void deleteValue(Node*& head, int value) {
    Node* current = head;
    Node* previous = nullptr;

    while (current) {
        if (current->data == value) {
            if (!previous) {
                head = current->next; 
            } else {
                previous->next = current->next; 
            }
            delete current; 
            return;
        }
        previous = current;
        current = current->next;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data;
        if (temp->next) std::cout << "->";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;
    int num, value, n;

    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    
    std::cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        Node* newNode = new Node{num, nullptr};
        
        
        if (!head) {
            head = newNode;
        } else {
           
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    
    std::cout << "Enter value to delete: ";
    std::cin >> value;

    
    deleteValue(head, value);
    std::cout << "Updated linked list: ";
    printList(head);

    return 0;
}
