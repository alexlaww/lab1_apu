//5
#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers between 1 and 50 are:\n";

    for (int i = 2; i <= 50; i += 2) { //start with 2 and always add 2
        cout << i << " ";
    }

    cout << endl;
    return 0;
}