#include <iostream>
using namespace std;

// struct Node{
//     int Id;
//     Node* next;
// };

struct Node{
    int Id;
    string Name;
    int Age;
    Node* next;
};

Node* InsertAtBegining(Node* head, int Id, string Name, int Age);
Node* InsertAtEnd(Node* head, int Id, string Name, int Age);
void FreeMemory(Node* head);
void ViewStudent(Node* head);

int main(){
    Node* head=new Node{1,"A",20,nullptr};
    cout << "Before Insertion:" << endl;
    ViewStudent(head);

    Node* second=InsertAtEnd(head, 2,"B",30);
    cout << "After Insertion Second:" << endl;
    ViewStudent(head);

    head=InsertAtBegining(head, 3,"C",40);
    cout << "After Insertion Third:" << endl;
    ViewStudent(head);
    
    FreeMemory(head);

    return 0;
}

Node* InsertAtBegining(Node* head, int Id, string Name, int Age){
    Node* newNode = new Node{Id, Name, Age};
    newNode->next=head;
    return newNode;
}

Node* InsertAtEnd(Node* head, int Id, string Name, int Age){
    Node* newNode = new Node{Id, Name, Age};
    Node* temp = head;

    if (head == nullptr) {
        return newNode;
    } //Optimization

    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=nullptr;

    return head;
}

void FreeMemory(Node* head){
    Node* temp = head;
    Node* next;
    while (temp != nullptr) {
        next = temp->next;
        delete temp;
        temp=next;
    }
}

void ViewStudent(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << "ID: " << temp->Id << endl;
        cout << "Name: " << temp->Name << endl;
        cout << "Age: " << temp->Age << endl;
        temp=temp->next;
    }
}