#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int count = 0;

    for (int i = 2; i <= 50; i += 2) {
        cout << setw(4) << i;
        count++;

        if (count % 5 == 0) {
            cout << endl;
        }
    }

    return 0;
}
