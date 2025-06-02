// Part C, Question 3: Insert at end and display
#include <iostream>
using namespace std;

struct Student {
    int studentId;
    Student *next;
};

// Global head pointer
Student *head = nullptr;

// Function to insert a new student at the front (from Q2, useful for testing)
void insertAtFront(int id) {
    Student *newStudent = new Student;
    if (!newStudent) {
        cout << "Memory allocation failed!" << endl;
        return;
    }
    newStudent->studentId = id;
    newStudent->next = head;
    head = newStudent;
    // cout << "Inserted " << id << " at the front." << endl; // Optional: keep or remove cout
}

// Function to insert a new student at the end of the list
void insertAtEnd(int id) {
    Student *newStudent = new Student;
    if (!newStudent) {
        cout << "Memory allocation failed!" << endl;
        return;
    }
    newStudent->studentId = id;
    newStudent->next = nullptr; // New node will be the last, so its next is null

    if (head == nullptr) { // If the list is empty
        head = newStudent;
    } else {
        Student *current = head;
        while (current->next != nullptr) { // Traverse to the last node
            current = current->next;
        }
        current->next = newStudent; // Link the last node to the new node
    }
    cout << "Inserted " << id << " at the end." << endl;
}

// Function to display the values in the linked list (same as Q2)
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

// Function to clean up all nodes in the list (same as Q2)
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

    insertAtEnd(201);
    displayList();

    insertAtEnd(202);
    displayList();

    insertAtFront(101); // Using front insert to mix
    displayList();

    insertAtEnd(203);
    displayList();

    clearList(); // Clean up memory
    return 0;
}