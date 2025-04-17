#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create four nodes using dynamic allocation
    Node* head = new Node();    // First node (head of the list)
    Node* second = new Node();  // Second node
    Node* third = new Node();   // Third node
    Node* fourth = new Node();  // Fourth node

    // Assign data to each node and link them together
    head->data = 1;
    head->next = second;        // head points to second

    second->data = 2;
    second->next = third;       // second points to third

    third->data = 3;
    third->next = fourth;       // third points to fourth

    fourth->data = 4;
    fourth->next = head;     // fourth is the last node, so its pointer is null

    // Traverse the list and print the data in each node
    Node* current = head;
    int count = 0;
    
    while (count < 4) {
        if (current == fourth){count++;}
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "finish" << endl;

    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}