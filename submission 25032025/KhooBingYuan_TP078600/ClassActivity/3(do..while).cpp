#include <iostream>
using namespace std;

int main() {
    int number = 100;
    do {
        cout << number << endl;
        number -= 5;
    } while (number > 10);
    return 0;
}
