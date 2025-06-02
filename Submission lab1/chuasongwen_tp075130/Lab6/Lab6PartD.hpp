#ifndef MusicSystem_H
#define MusicSystem_H

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


#endif