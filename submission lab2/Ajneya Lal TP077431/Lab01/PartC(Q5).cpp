#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 2; i <= 50; i += 2) {
        cout << i << "\t";
        count++;
        if (count % 5 == 0)
            cout << endl;
    }
    return 0;
}
