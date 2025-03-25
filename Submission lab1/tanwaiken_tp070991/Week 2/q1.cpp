#include <iostream>

using namespace std;

int main() {  
    int y = 10;
    int x = 5;

    x = (y > 0) ? 1 : x;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}
