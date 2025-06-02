// Part C, Question 2: Insert at front and display
#include <iostream>
using namespace std;

struct Student {
    int studentId;
    Student *next;
};

// Global head pointer
Student *head = nullptr;

// Function to insert a new student at the front of the list
void insertAtFront(int id) {
    Student *newStudent = new Student;
    if (!newStudent) {
        cout << "Memory allocation failed!" << endl;
        return;
    }
    newStudent->studentId = id;
    newStudent->next = head; // New node points to the old head
    head = newStudent;       // Head now points to the new node
    cout << "Inserted " << id << " at the front." << endl;
}

// Function to display the values in the linked list
void displayList() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    cout << "Student List (ID -> Next):" << endl;
    Student *current = head;
    while (current != nullptr) {
        cout << current->studentId;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

// Function to clean up all nodes in the list
void clearList() {
    Student *current = head;
    Student *nextNode = nullptr;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}

int main() {
    displayList(); // Display empty list

    insertAtFront(101);
    displayList();

    insertAtFront(102);
    displayList();

    insertAtFront(103);
    displayList();

    clearList(); // Clean up memory
    return 0;
}