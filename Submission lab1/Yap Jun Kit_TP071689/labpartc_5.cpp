#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 50; i += 2) {
        cout << i << "\t";
        if (i % 10 == 0) // Print a new line after every 5 numbers
            cout << endl;
    }
    return 0;
}
