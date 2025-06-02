// Part A: Learn how to use the pointer to access the structure members
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    // p1 is a pointer to a new Point structure
    Point *p1 = new Point;

    // To access the new structure members using pointer
    p1->x = 3; // insert value
    p1->y = 4;

    cout << p1->x << " " << p1->y; // to display
    cout << endl; // Added for better output formatting

    // It's good practice to free dynamically allocated memory
    delete p1;
    p1 = nullptr; // Set pointer to null after deleting

    return 0;
}