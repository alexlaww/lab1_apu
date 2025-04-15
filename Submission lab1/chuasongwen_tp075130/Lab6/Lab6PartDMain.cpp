#include "Lab6PartD.hpp"

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