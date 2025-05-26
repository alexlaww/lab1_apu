// Part D: Homework - Music Player System
#include <iostream>
#include <string>
#include <vector> // For initial data population if desired, or just manual inserts
#include <iomanip> // For std::fixed and std::setprecision

using namespace std;

struct Song {
    string artist;
    string title;
    int releasedYear;
    string genre;
    float length;
    Song *next;
};

// Global head pointer for the playlist
Song *playlistHead = nullptr;

// Function to insert a new song at the beginning of the list
void insertAtBeginning(string artist, string title, int year, string genre, float length) {
    Song *newSong = new Song;
    if (!newSong) {
        cout << "Memory allocation failed for new song!" << endl;
        return;
    }
    newSong->artist = artist;
    newSong->title = title;
    newSong->releasedYear = year;
    newSong->genre = genre;
    newSong->length = length;

    newSong->next = playlistHead;
    playlistHead = newSong;
    // cout << "Added to beginning: " << title << " by " << artist << endl; // Optional
}

// Function to insert a new song at the end of the list
void insertAtEnd(string artist, string title, int year, string genre, float length) {
    Song *newSong = new Song;
    if (!newSong) {
        cout << "Memory allocation failed for new song!" << endl;
        return;
    }
    newSong->artist = artist;
    newSong->title = title;
    newSong->releasedYear = year;
    newSong->genre = genre;
    newSong->length = length;
    newSong->next = nullptr;

    if (playlistHead == nullptr) {
        playlistHead = newSong;
    } else {
        Song *current = playlistHead;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newSong;
    }
    // cout << "Added to end: " << title << " by " << artist << endl; // Optional
}

// Function to display the playlist
void displayPlaylist() {
    if (playlistHead == nullptr) {
        cout << "Playlist is empty." << endl;
        return;
    }

    cout << "\n--- Current Playlist ---" << endl;
    cout << left << setw(5) << "No"
         << setw(25) << "Artist"
         << setw(35) << "Song"
         << setw(10) << "Released"
         << setw(15) << "Genre"
         << "Length" << endl;
    cout << string(90, '-') << endl; // Separator line

    Song *current = playlistHead;
    int count = 1;
    cout << fixed << setprecision(2); // For displaying float length with 2 decimal places

    while (current != nullptr) {
        cout << left << setw(5) << count++
             << setw(25) << current->artist
             << setw(35) << current->title
             << setw(10) << current->releasedYear
             << setw(15) << current->genre
             << current->length << endl;
        current = current->next;
    }
    cout << "------------------------" << endl;
}

// Function to clear the playlist and free memory
void clearPlaylist() {
    Song *current = playlistHead;
    Song *nextNode = nullptr;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    playlistHead = nullptr;
}

int main() {
    // 1. Initialize with the current song list (using insertAtEnd for order)
    insertAtEnd("Celine Dion", "Just Walk Away", 1993, "Pop", 4.58f);
    insertAtEnd("Taylor Swift", "You Belong With Me", 2008, "Pop", 3.48f);
    insertAtEnd("The Cranberries", "Promises", 1999, "Rock", 4.30f);

    cout << "Initial Playlist:" << endl;
    displayPlaylist();

    // 2. User able to insert a new song in the front of the list
    cout << "\nInserting 'All I Want For Christmas Is You' by Maria Carey at the beginning..." << endl;
    insertAtBeginning("Maria Carey", "All I Want For Christmas Is You", 1994, "Seasonal", 3.55f);
    displayPlaylist();

    // 3. User able to insert a new song at the end of the list
    cout << "\nInserting 'It Ain't Me' by Selena Gomez, Kygo at the end..." << endl;
    insertAtEnd("Selena Gomez, Kygo", "It Ain't Me", 2017, "Dance-pop", 3.41f); // Example from image uses 3.41
    displayPlaylist();
    
    // The prompt also says "View the list without any sorting - User able to view the original song list after the insertion process."
    // The displayPlaylist() function already does this. The final displayPlaylist() call above shows the final state.

    // Clean up memory
    clearPlaylist();

    return 0;
}