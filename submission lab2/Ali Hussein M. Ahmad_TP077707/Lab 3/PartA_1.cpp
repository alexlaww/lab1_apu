#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int count = 0;
    
    while (count < SIZE) {
        cout << "Enter value " << (count + 1) << ": ";
        int value;
        cin >> value;
        
        bool isDuplicate = false;
        for (int i = 0; i < count; i++) {
            if (numbers[i] == value) {
                isDuplicate = true;
                break;
            }
        }
        
        if (isDuplicate) {
            cout << "Value already in the list! Please choose other value!" << endl;
        } else {
            numbers[count] = value;
            cout << value << endl;
            count++;
        }
    }
    
    cout << "Unique numbers entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i];
        if (i < SIZE - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    
    return 0;
}