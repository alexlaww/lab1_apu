#include "Lab6PartD.hpp"

Node* InsertAtBegining(Node* head, int No, string Artist, string Song, int Released, string Genre, string Length){
    Node* newNode = new Node{No, Artist, Song, Released, Genre, Length, head};

    newNode->next = head;

    return newNode;
}

Node* InsertAtEnd(Node* head, int No, string Artist, string Song, int Released, string Genre, string Length){
    Node* newNode = new Node{No, Artist, Song, Released, Genre, Length, head};
    Node* temp = head;

    if (head == nullptr) {
        return newNode;
    } //Optimization

    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next=newNode;
    newNode->next = nullptr;

    return head;
}

void ViewList(Node* head){
    cout << left << setw(5) << "No" 
         << setw(20) << "|Artist" 
         << setw(25) << "|Song" 
         << setw(20) << "|Released" 
         << setw(20) << "|Genre" 
         << setw(20) << "|Length" << endl
         << string(100,'-') << endl;
    
    Node* temp = head;
    while(temp !=nullptr){
        cout << left 
             << setw(5)  << temp->No 
             << setw(20)  << temp->Artist             
             << setw(25) << temp->Song
             << setw(20) << temp->Released
             << setw(20) << temp->Genre
             << setw(20) << temp->Length << endl
             << string(100,'-') << endl;
        
        temp = temp->next;
    }
}

void FreeMemory(Node* head){
    Node* temp = head;
    Node* next;

    while(temp!=nullptr){
        next = temp->next;
        delete temp;
        temp = next;
    }
}

void MenuChoice(){
    cout << "1. Insert song at the beginning\n";
    cout << "2. Insert song at the end\n";
    cout << "3. View song list\n";
    cout << "4. Exit\n";
}


