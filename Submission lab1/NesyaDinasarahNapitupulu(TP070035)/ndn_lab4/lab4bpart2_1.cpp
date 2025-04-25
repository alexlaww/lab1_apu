#include <iostream>
using namespace std;

struct Point {
    int x, y;
    Point * nextaddress;
};

int main() {
    Point * p1 = new Point;
    p1 -> x = 3;
    p1 -> y = 4;
    p1 -> nextaddress = NULL;

    Point * p2 = new Point;
    p2 -> x = 7;
    p2 -> y = 16;
    p2 -> nextaddress = NULL;

    p1 -> nextaddress = p2;

    cout << "P1 info: \n------------------\n";
    cout << "P1 Address: " << p1 << endl;
    cout << "P1 x value: " << p1 -> x << endl;
    cout << "P1 y value: " << p1 -> y << endl;
    cout << "P1 nextaddress value: " << p1 -> nextaddress << endl << endl;
    
    cout << "P2 info: \n------------------\n";
    cout << "P2 Address: " << p2 << endl;
    cout << "P2 x value: " << p2 -> x << endl;
    cout << "P2 y value: " << p2 -> y << endl;
    cout << "P2 nextaddress value: " << p2 -> nextaddress << endl << endl;
}