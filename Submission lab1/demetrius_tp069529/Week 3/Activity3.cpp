#include <iostream>
using namespace std;

int main() {
    int myMatrix[4][5];
    int n = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            myMatrix[i][j] = n;
            n++;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << myMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}