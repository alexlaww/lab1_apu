#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

struct Node{
    int No;
    string Artist;
    string Song;
    int Released;
    string Genre;
    string Length;
    Node* next;
};

Node* InsertAtBegining(Node* head, int No, string Artist, string Song, int Released, string Genre, string Length);
Node* InsertAtEnd(Node* head, int No, string Artist, string Song, int Released, string Genre, string Length);
void ViewList(Node* head);
void FreeMemory(Node* head);
void MenuChoice();

int main(){
    Node* head = nullptr;
    head = InsertAtBegining(head, 1, "Celine Dion", "Just Walk Away", 1993, "Pop", "4.58");
    head = InsertAtEnd(head, 2, "Taylor Swift", "You Belong With Me", 2008, "Pop", "3.48");
    head = InsertAtEnd(head, 3, "The Cranberries", "Promises", 1999, "Rock", "4.30");

    int choice;
    string Artist, Song, Genre, Length;
    int No, Released;

    do {
        MenuChoice();
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: 
                cout << "Enter No: ";
                cin >> No;
                cin.ignore();
                cout << "Enter Artist: ";
                getline(cin, Artist);
                cout << "Enter Song Title: ";
                getline(cin, Song);
                cout << "Enter Release Year: ";
                cin >> Released;
                cin.ignore();
                cout << "Enter Genre: ";
                getline(cin, Genre);
                cout << "Enter Length (e.g., 3.45): ";
                getline(cin, Length);
                
                head = InsertAtBegining(head, No, Artist, Song, Released, Genre, Length);
                cout << "\nSong added to the beginning of the list!\n\n";
                break;
                
            case 2: 
                cout << "Enter No: ";
                cin >> No;
                cin.ignore();
                cout << "Enter Artist: ";
                getline(cin, Artist);
                cout << "Enter Song Title: ";
                getline(cin, Song);
                cout << "Enter Release Year: ";
                cin >> Released;
                cin.ignore();
                cout << "Enter Genre: ";
                getline(cin, Genre);
                cout << "Enter Length (e.g., 3.45): ";
                getline(cin, Length);
                
                head = InsertAtEnd(head, No, Artist, Song, Released, Genre, Length);
                cout << "\nSong added to the end of the list!\n\n";
                break;
                
            case 3: 
                ViewList(head);
                break;
                
            case 4: 
                cout << "Exiting Music Player System. Goodbye!\n";
                break;
                
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        
    } while (choice != 4);
    
    FreeMemory(head);
    
    return 0;
}

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
    cout << left << setw(5) << "No" << setw(20) << "|Artist" 
         << setw(25) << "|Song" << setw(10) << "|Released" 
         << setw(10) << "|Genre" << "|Length\n";
    cout << string(80,'-') << endl;
    
    Node* temp = head;
    while(temp !=nullptr){
        cout << left << setw(5) <<setw(20) << temp->Artist 
            << setw(5) << temp->No
             << setw(25) << temp->Song
             << setw(10) << temp->Released
             << setw(10) << temp->Genre
             << temp->Length << endl
             << string(80,'-') << endl;
        
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

