// Part C, Question 1: Basic struct and single node display
#include <iostream>
using namespace std;

struct Student {
    int studentId;
    Student *next;
};

int main() {
    Student *head = nullptr; // Pointer to the first student, initially empty list

    // Create a new student node
    Student *newStudent = new Student;
    if (!newStudent) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Assign value to student id
    newStudent->studentId = 101;
    // Assign next to NULL (or nullptr)
    newStudent->next = nullptr;

    // For this simple case, our list only has one student, so head points to it
    head = newStudent;

    // Display the contents of the data members
    cout << "Student Node Details:" << endl;
    if (head != nullptr) {
        cout << "Student ID: " << head->studentId << endl;
        cout << "Next Pointer: " << head->next << endl; // Will print 0 or 0x0 for nullptr
    } else {
        cout << "List is empty." << endl;
    }

    // Clean up
    delete head; // or delete newStudent;
    head = nullptr;

    return 0;
}