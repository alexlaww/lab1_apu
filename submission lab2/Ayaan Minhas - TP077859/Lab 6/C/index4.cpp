// Part C, Question 4: Modify struct, insert, and display for name and age
#include <iostream>
#include <string> // For std::string
using namespace std;

struct Student {
    int studentId;
    string studentName; // Added
    int studentAge;     // Added
    Student *next;
};

// Global head pointer
Student *head = nullptr;

// Modified function to insert a new student at the front of the list
void insertAtFront(int id, string name, int age) {
    Student *newStudent = new Student;
    if (!newStudent) {
        cout << "Memory allocation failed!" << endl;
        return;
    }
    newStudent->studentId = id;
    newStudent->studentName = name;
    newStudent->studentAge = age;
    newStudent->next = head;
    head = newStudent;
    cout << "Inserted (Front): ID=" << id << ", Name=" << name << ", Age=" << age << endl;
}

// Modified function to insert a new student at the end of the list
void insertAtEnd(int id, string name, int age) {
    Student *newStudent = new Student;
    if (!newStudent) {
        cout << "Memory allocation failed!" << endl;
        return;
    }
    newStudent->studentId = id;
    newStudent->studentName = name;
    newStudent->studentAge = age;
    newStudent->next = nullptr;

    if (head == nullptr) {
        head = newStudent;
    } else {
        Student *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newStudent;
    }
    cout << "Inserted (End): ID=" << id << ", Name=" << name << ", Age=" << age << endl;
}

// Modified function to display the values in the linked list
void displayList() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    cout << "\n--- Student List ---" << endl;
    Student *current = head;
    int count = 1;
    while (current != nullptr) {
        cout << count++ << ". ID: " << current->studentId
             << ", Name: " << current->studentName
             << ", Age: " << current->studentAge << endl;
        current = current->next;
    }
    cout << "--------------------" << endl;
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
    displayList();

    insertAtEnd(101, "Alice", 20);
    displayList();

    insertAtFront(102, "Bob", 22);
    displayList();

    insertAtEnd(103, "Charlie", 21);
    displayList();

    insertAtFront(104, "Diana", 19);
    displayList();

    clearList(); // Clean up memory
    return 0;
}