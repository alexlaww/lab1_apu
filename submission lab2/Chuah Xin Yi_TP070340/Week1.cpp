#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>
#include <list>
#include <ctime>
#include <cstdlib>
#include <algorithm>  // For std::shuffle
#include <random>     // For std::mt19937 and std::random_device
using namespace std;

// Linked List Node for Deck of Cards
struct Card {
    int value;
    string suit;
    Card* next;
    Card(int v, string s) : value(v), suit(s), next(nullptr) {}
};

// Binary Search Tree Node for Organizing Cards
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : value(v), left(nullptr), right(nullptr) {}
};

class CardGame {
private:
    Card* deck; // Linked List for deck
    stack<Card> player1Stack, player2Stack; // Stacks for each player's cards
    TreeNode* cardTree; // BST for storing drawn cards
    unordered_map<int, list<int>> playerGraph; // Graph for player connections
    
public:
    CardGame() : deck(nullptr), cardTree(nullptr) {
        createDeck();
        shuffleDeck();
        setupPlayers();
    }
    
    void createDeck() {
        string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
        for (int s = 0; s < 4; ++s) {
            for (int v = 1; v <= 13; ++v) {
                Card* newCard = new Card(v, suits[s]);
                newCard->next = deck;
                deck = newCard;
            }
        }
    }
    
    void shuffleDeck() {
        srand(time(0));
        vector<Card*> cardVec;
        Card* temp = deck;
        while (temp) {
            cardVec.push_back(temp);
            temp = temp->next;
        }
        std::random_device rd;
std::mt19937 g(rd());  // Mersenne Twister random number generator

std::shuffle(cardVec.begin(), cardVec.end(), g);
       // random_shuffle(cardVec.begin(), cardVec.end());
        deck = nullptr;
        for (Card* c : cardVec) {
            c->next = deck;
            deck = c;
        }
    }
    
    void setupPlayers() {
        playerGraph[1] = {2};
        playerGraph[2] = {1};
    }
    
    void insertIntoTree(TreeNode*& root, int value) {
        if (!root) {
            root = new TreeNode(value);
            return;
        }
        if (value < root->value)
            insertIntoTree(root->left, value);
        else
            insertIntoTree(root->right, value);
    }
    
    void drawCards() {
        if (!deck) return;
        player1Stack.push(*deck);
        insertIntoTree(cardTree, deck->value);
        deck = deck->next;
        
        if (!deck) return;
        player2Stack.push(*deck);
        insertIntoTree(cardTree, deck->value);
        deck = deck->next;
    }
    
    void determineWinner() {
        if (player1Stack.empty() || player2Stack.empty()) {
            cout << "Players haven't drawn cards yet!" << endl;
            return;
        }
        
        Card p1 = player1Stack.top();
        Card p2 = player2Stack.top();
        
        cout << "Player 1 drew " << p1.value << " of " << p1.suit << endl;
        cout << "Player 2 drew " << p2.value << " of " << p2.suit << endl;
        
        if (p1.value > p2.value)
            cout << "Player 1 Wins!" << endl;
        else if (p2.value > p1.value)
            cout << "Player 2 Wins!" << endl;
        else
            cout << "It's a tie!" << endl;
    }
};

int main() {
    CardGame game;
    game.drawCards();
    game.determineWinner();
    return 0;
}
