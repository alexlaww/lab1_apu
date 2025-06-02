#include<iostream>
using namespace std;

int main() {
    int nums[10];
    int count = 0;
    int inum;

    cout << "Enter 10 numbers: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> inum;

        bool isDuplicate = false;
        for (int j = 0; j < count; j++) {
            if (nums[j] == inum) {
                isDuplicate = true;
                break;
            }
        }
        
        if (!isDuplicate) {
            nums[count] = inum;
            count++;
            cout << "Unique number found: " << inum << endl;
        }
        else {
            cout << inum << " is a duplicate and won't be added" << endl;
        }
    }

    cout << "\nAll unique numbers entered:" << endl;
    for (int i = 0; i < count; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}