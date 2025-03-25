#include <iostream>
using namespace std;

int main() {

    // for loop 
    for (int number = 100; number > 10; number -= 5) {
        cout << number << endl;
    }

    // while-do loop
    int number = 100;
    do {
        cout << number << endl;
        number -= 5;
    } while (number > 10);






    return 0;
}
