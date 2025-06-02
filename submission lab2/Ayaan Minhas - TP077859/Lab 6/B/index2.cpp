// Part B, Question 2: Display linked structures using a structure pointer
#include <iostream>
using namespace std;

struct Point {
    int x, y;
    Point *nextaddress;
};

int main() {
    // first structure
    Point *p1 = new Point;
    p1->x = 3;
    p1->y = 4;
    p1->nextaddress = NULL;

    // second structure
    Point *p2 = new Point;
    p2->x = 7;
    p2->y = 16;
    p2->nextaddress = NULL;

    // to link the first structure with second structure
    p1->nextaddress = p2;

    // display the p1 information (as in previous example, omitted for brevity here but present in original)
    cout << "P1 info : \n---------------\n";
    cout << "P1 Address : " << p1 << endl;
    cout << "P1 x value : " << p1->x << endl;
    cout << "P1 y value : " << p1->y << endl;
    cout << "P1 nextaddress value : " << p1->nextaddress << endl << endl;

    // display the p2 information (as in previous example, omitted for brevity here but present in original)
    cout << "P2 info : \n---------------\n";
    cout << "P2 Address : " << p2 << endl;
    cout << "P2 x value : " << p2->x << endl;
    cout << "P2 y value : " << p2->y << endl;
    cout << "P2 nextaddress value : " << p2->nextaddress << endl << endl;


    cout << "Traversing the list from p1:" << endl;
    Point *current = NULL;
    current = p1;

    while (current != NULL) { // Or current != nullptr
        cout << "Data: (" << current->x << ", " << current->y << ")";
        cout << " Next: " << current->nextaddress << endl;
        current = current->nextaddress;
    }

    // Clean up memory
    // Since p1 is the head and p2 is linked, deleting p1 and then p2 is fine.
    // A more robust cleanup would iterate and delete.
    delete p1;
    delete p2; // p1->nextaddress was p2, p2->nextaddress was NULL.
    p1 = nullptr;
    p2 = nullptr;


    return 0;
}