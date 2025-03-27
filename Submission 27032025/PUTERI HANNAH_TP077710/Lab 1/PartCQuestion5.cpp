#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 50; i += 2) {
        cout << i << "\t";  // Print even number with tab space
        if (i % 10 == 0)    // Move to the next line after 5 numbers
            cout << endl;
    }
    return 0;
}
