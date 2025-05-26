#include <iostream>
#include <fstream>    // For file operations
#include <sstream>    // For string stream processing
#include <string>
#include <vector>
#include <iomanip>    // For std::fixed, std::setprecision, std::setw
#include <limits>     // For numeric_limits (for cin.ignore on some systems if mixing cin >> and getline)

using namespace std;

// --- Global Variables and Struct Definition ---
struct Song {
    int id;           // Unique ID for the song, used as "No."
    string artist;
    string title;
    int releasedYear;
    string genre;
    float length;
    Song *next;
};

Song *playlistHead = nullptr;         // Head of the main playlist
Song *sortedPlaylistHead = nullptr;   // Head of the sorted copy of the playlist
static int nextIdCounter = 1;         // Counter to assign unique IDs to songs

// --- Helper function to create a new song node ---
Song* createSongNode(int id, const string& artist, const string& title, int year, const string& genre, float length) {
    Song *newSong = new Song;
    newSong->id = id;
    newSong->artist = artist;
    newSong->title = title;
    newSong->releasedYear = year;
    newSong->genre = genre;
    newSong->length = length;
    newSong->next = nullptr;
    return newSong;
}

// --- Playlist Management Functions ---

void addSongToFront(int id, const string& artist, const string& title, int year, const string& genre, float length) {
    Song *newSong = createSongNode(id, artist, title, year, genre, length);
    newSong->next = playlistHead;
    playlistHead = newSong;
    // cout << "Added to front: ID " << id << " - \"" << title << "\" by " << artist << endl;
}

void addSongToEnd(int id, const string& artist, const string& title, int year, const string& genre, float length) {
    Song *newSong = createSongNode(id, artist, title, year, genre, length);
    if (playlistHead == nullptr) {
        playlistHead = newSong;
    } else {
        Song *current = playlistHead;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newSong;
    }
    // cout << "Added to end: ID " << id << " - \"" << title << "\" by " << artist << endl;
}

void displayPlaylist(Song* head, const string& playlistTitle) {
    cout << "\n--- " << playlistTitle << " ---" << endl;
    if (head == nullptr) {
        cout << "Playlist is empty." << endl;
        cout << string(100, '-') << endl;
        return;
    }

    cout << left << setw(5) << "No"
         << setw(25) << "Artist"
         << setw(40) << "Song"
         << setw(10) << "Released"
         << setw(15) << "Genre"
         << "Length" << endl;
    cout << string(100, '-') << endl;

    Song *current = head;
    cout << fixed << setprecision(2); // Display float length with 2 decimal places

    while (current != nullptr) {
        cout << left << setw(5) << current->id
             << setw(25) << current->artist
             << setw(40) << current->title
             << setw(10) << current->releasedYear
             << setw(15) << current->genre
             << current->length << endl;
        current = current->next;
    }
    cout << string(100, '-') << endl;
}

void clearList(Song*& head) {
    Song *current = head;
    Song *nextNode = nullptr;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}

// --- CSV Loading ---
void loadSongsFromCSV(const string& filename) {
    ifstream file(filename);
    string line;

    if (!file.is_open()) {
        cout << "Error: Could not open CSV file " << filename << endl;
        return;
    }

    // cout << "Loading songs from " << filename << "..." << endl;
    while (getline(file, line)) {
        stringstream ss(line);
        string artist, title, year_str, genre, length_str;

        // Basic CSV parsing, assumes no commas within fields themselves
        getline(ss, artist, ',');
        getline(ss, title, ',');
        getline(ss, year_str, ',');
        getline(ss, genre, ',');
        getline(ss, length_str, ',');
        
        // Trim whitespace that might be read by getline if fields have spaces around commas
        auto trim = [](string& s) {
            s.erase(0, s.find_first_not_of(" \n\r\t"));
            s.erase(s.find_last_not_of(" \n\r\t") + 1);
        };
        trim(artist); trim(title); trim(year_str); trim(genre); trim(length_str);


        try {
            int year = stoi(year_str);
            float length = stof(length_str);
            // Add to end to maintain CSV order for initial IDs 1, 2, 3
            addSongToEnd(nextIdCounter++, artist, title, year, genre, length);
        } catch (const std::invalid_argument& ia) {
            cerr << "CSV Parsing Error (Invalid argument): " << ia.what() << " for line: '" << line << "'" << endl;
        } catch (const std::out_of_range& oor) {
            cerr << "CSV Parsing Error (Out of range): " << oor.what() << " for line: '" << line << "'" << endl;
        }
    }
    file.close();
    // cout << "Finished loading songs from CSV." << endl;
}

// --- Setup for Deletion/Search Tests to match "Original output" state ---
void setupStandardTestList() {
    clearList(playlistHead); 
    nextIdCounter = 1;       // Reset ID counter for consistent ID assignment

    // 1. Songs from CSV (will get IDs 1, 2, 3)
    addSongToEnd(nextIdCounter++, "Celine Dion", "Just Walk Away", 1993, "Pop", 4.58f);
    addSongToEnd(nextIdCounter++, "Taylor Swift", "You Belong With Me", 2008, "Pop", 3.48f);
    addSongToEnd(nextIdCounter++, "The Cranberries", "Promises", 1999, "Rock", 4.30f);
    
    // 2. Maria Carey added to front (will get ID 4)
    addSongToFront(nextIdCounter++, "Maria Carey", "All I Want For Christmas Is You", 1994, "Seasonal", 3.55f);
    
    // 3. Selena Gomez, Kygo added to end (will get ID 5)
    addSongToEnd(nextIdCounter++, "Selena Gomez, Kygo", "It Ain't Me", 2017, "Dance-pop", 3.41f);
    
    // This creates the list: Maria(ID4) -> Celine(ID1) -> Taylor(ID2) -> Cranberries(ID3) -> Selena(ID5)
}


// --- Deletion Functions ---
void deleteFromFront() {
    if (playlistHead == nullptr) {
        cout << "Playlist is empty. Nothing to delete from front." << endl;
        return;
    }
    Song *temp = playlistHead;
    playlistHead = playlistHead->next;
    cout << "Deleted from front: ID " << temp->id << " - \"" << temp->title << "\" by " << temp->artist << endl;
    delete temp;
}

void deleteFromEnd() {
    if (playlistHead == nullptr) {
        cout << "Playlist is empty. Nothing to delete from end." << endl;
        return;
    }
    if (playlistHead->next == nullptr) { // Only one node
        cout << "Deleted from end (only node): ID " << playlistHead->id << " - \"" << playlistHead->title << "\" by " << playlistHead->artist << endl;
        delete playlistHead;
        playlistHead = nullptr;
        return;
    }
    Song *current = playlistHead;
    Song *prev = nullptr;
    while (current->next != nullptr) {
        prev = current;
        current = current->next;
    }
    prev->next = nullptr;
    cout << "Deleted from end: ID " << current->id << " - \"" << current->title << "\" by " << current->artist << endl;
    delete current;
}

void deleteByArtistName(const string& artistName) {
    if (playlistHead == nullptr) {
        cout << "Playlist is empty. Cannot delete." << endl;
        return;
    }
    Song *current = playlistHead;
    Song *prev = nullptr;
    bool found = false;

    // Iterate and delete first occurrence
    while(current != nullptr) {
        if (current->artist == artistName) {
            found = true;
            if (prev == nullptr) { // Deleting the head
                playlistHead = current->next;
            } else {
                prev->next = current->next;
            }
            Song* temp = current;
            current = current->next; // Move current before deleting temp
            cout << "Deleted: ID " << temp->id << " - \"" << temp->title << "\" by " << temp->artist << endl;
            delete temp;
            return; // Assuming delete only the first match as per example structure
        } else {
            prev = current;
            current = current->next;
        }
    }

    if (!found) {
        cout << "Song by artist '" << artistName << "' not found in the playlist." << endl;
    }
}

void deleteBySongPosition(int position) { // position is 1-based
    if (playlistHead == nullptr) {
        cout << "Playlist is empty. Cannot delete." << endl;
        return;
    }
    if (position <= 0) {
        cout << "Invalid song number (must be positive)." << endl;
        return;
    }

    Song *current = playlistHead;
    Song *prev = nullptr;

    if (position == 1) { // Delete head
        playlistHead = current->next;
        cout << "Deleted song at position 1: ID " << current->id << " - \"" << current->title << "\" by " << current->artist << endl;
        delete current;
        return;
    }

    int count = 1;
    while (current != nullptr && count < position) {
        prev = current;
        current = current->next;
        count++;
    }

    if (current == nullptr) { // Position out of bounds
        cout << "Song number " << position << " is out of bounds (list has " << count-1 << " songs)." << endl;
        return;
    }

    // current is the node to delete, prev is its predecessor
    prev->next = current->next;
    cout << "Deleted song at position " << position << ": ID " << current->id << " - \"" << current->title << "\" by " << current->artist << endl;
    delete current;
}


// --- Search Function ---
void searchByGenre(const string& genreToSearch) {
    cout << "\n--- Songs with Genre: " << genreToSearch << " ---" << endl;
    if (playlistHead == nullptr) {
        cout << "Playlist is empty." << endl;
        cout << string(100, '-') << endl;
        return;
    }

    cout << left << setw(5) << "No"
         << setw(25) << "Artist"
         << setw(40) << "Song"
         << setw(10) << "Released"
         << setw(15) << "Genre"
         << "Length" << endl;
    cout << string(100, '-') << endl;

    Song *current = playlistHead;
    bool found = false;
    cout << fixed << setprecision(2);

    while (current != nullptr) {
        if (current->genre == genreToSearch) {
            cout << left << setw(5) << current->id
                 << setw(25) << current->artist
                 << setw(40) << current->title
                 << setw(10) << current->releasedYear
                 << setw(15) << current->genre
                 << current->length << endl;
            found = true;
        }
        current = current->next;
    }

    if (!found) {
        cout << "No songs found with genre: " << genreToSearch << endl;
    }
    cout << string(100, '-') << endl;
}

// --- Sorting and Copying (Sort by ID) ---
void insertIntoSortedListById(Song*& sortedHeadRef, Song* songDataToCopy) {
    // Create a new node by copying data, then insert it
    Song *newNode = createSongNode(songDataToCopy->id, songDataToCopy->artist, songDataToCopy->title, 
                                   songDataToCopy->releasedYear, songDataToCopy->genre, songDataToCopy->length);

    if (sortedHeadRef == nullptr || sortedHeadRef->id >= newNode->id) {
        newNode->next = sortedHeadRef;
        sortedHeadRef = newNode;
    } else {
        Song *current = sortedHeadRef;
        while (current->next != nullptr && current->next->id < newNode->id) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void copyAndSortListById() {
    clearList(sortedPlaylistHead); // Clear any previous sorted list
    if (playlistHead == nullptr) {
        cout << "Original playlist is empty. Nothing to copy or sort." << endl;
        return;
    }

    Song *currentOriginal = playlistHead;
    while (currentOriginal != nullptr) {
        insertIntoSortedListById(sortedPlaylistHead, currentOriginal); // Pass the node to copy data from
        currentOriginal = currentOriginal->next;
    }
    // cout << "\nCopied and sorted the playlist by Song ID." << endl;
}

// --- Main Function ---
int main() {
    // Initial setup from CSV and additions to match example page 23-26
    cout << "--- Initial Song List Setup ---" << endl;
    // Create songs.csv if it doesn't exist (for robust testing)
    ofstream csvFile("songs.csv");
    if (csvFile.is_open()) {
        csvFile << "Celine Dion,Just Walk Away,1993,Pop,4.58\n";
        csvFile << "Taylor Swift,You Belong With Me,2008,Pop,3.48\n";
        csvFile << "The Cranberries,Promises,1999,Rock,4.30\n";
        csvFile.close();
    } else {
        cerr << "Warning: Could not create songs.csv for writing." << endl;
    }
    
    // 1. Load songs from CSV (IDs 1, 2, 3 assigned)
    loadSongsFromCSV("songs.csv");
    displayPlaylist(playlistHead, "1. Playlist after loading from CSV");

    // 2. Add Maria Carey to front (ID 4 assigned)
    addSongToFront(nextIdCounter++, "Maria Carey", "All I Want For Christmas Is You", 1994, "Seasonal", 3.55f);
    displayPlaylist(playlistHead, "2. Playlist after Maria Carey (Front)");

    // 3. Add Selena Gomez, Kygo to end (ID 5 assigned)
    addSongToEnd(nextIdCounter++, "Selena Gomez, Kygo", "It Ain't Me", 2017, "Dance-pop", 3.41f);
    // This state matches the "Original output" for subsequent exercises (page 26)
    displayPlaylist(playlistHead, "3. Final Initial Playlist ('Original Output' for exercises)");

    cout << "\n=====================================================" << endl;
    cout << "STARTING TRAIN YOURSELF EXERCISES (Deletion, Search, Sort)" << endl;
    cout << "=====================================================" << endl;

    // Exercise: Delete song from BEGINNING (Page 27)
    cout << "\n--- Exercise: Delete song from BEGINNING ---" << endl;
    setupStandardTestList(); // Reset list to "Original output" state
    cout << "Original list (before deletion):";
    displayPlaylist(playlistHead, "Original Output State");
    deleteFromFront();
    displayPlaylist(playlistHead, "Playlist after deleting from BEGINNING");

    // Exercise: Delete song from END (Page 28)
    cout << "\n--- Exercise: Delete song from END ---" << endl;
    setupStandardTestList();
    cout << "Original list (before deletion):";
    displayPlaylist(playlistHead, "Original Output State");
    deleteFromEnd();
    displayPlaylist(playlistHead, "Playlist after deleting from END");

    // Exercise: Delete song by ARTIST NAME ("Taylor Swift") (Page 29)
    cout << "\n--- Exercise: Delete song by ARTIST NAME (Taylor Swift) ---" << endl;
    setupStandardTestList();
    cout << "Original list (before deletion):";
    displayPlaylist(playlistHead, "Original Output State");
    deleteByArtistName("Taylor Swift");
    displayPlaylist(playlistHead, "Playlist after deleting Taylor Swift");
    
    // Exercise: Delete song by SONG NUMBER (position 3) (Page 30)
    // Position 3 in the list "Maria(4) -> Celine(1) -> Taylor(2) -> Cranberries(3) -> Selena(5)" is Taylor Swift (ID 2).
    cout << "\n--- Exercise: Delete song by SONG POSITION (3rd song) ---" << endl;
    setupStandardTestList();
    cout << "Original list (before deletion):";
    displayPlaylist(playlistHead, "Original Output State");
    deleteBySongPosition(3); 
    displayPlaylist(playlistHead, "Playlist after deleting 3rd song in sequence");

    // Exercise: Search songs by GENRE ("Pop") (Page 31)
    cout << "\n--- Exercise: Search songs by GENRE (Pop) ---" << endl;
    setupStandardTestList(); 
    // displayPlaylist(playlistHead, "Full list for Genre Search"); // Optional: show full list again
    searchByGenre("Pop");
    
    // Last Exercise: Copy and Sort List (by ID) (Page 32)
    cout << "\n--- Last Exercise: Copy and Sort List (by ID) ---" << endl;
    setupStandardTestList(); 
    // displayPlaylist(playlistHead, "Original Unsorted Playlist for Copy/Sort"); // Optional
    copyAndSortListById();
    displayPlaylist(sortedPlaylistHead, "5. Show Song List With Sort (Sorted by ID)");

    // Cleanup
    clearList(playlistHead);
    clearList(sortedPlaylistHead);
    cout << "\nAll playlists cleared. Program finished." << endl;

    return 0;
}