#include <iostream>
using namespace std;

struct Point {
    int x, y;
    Point * nextaddress;
};

int main()
{
    //first structure
    Point * p1 = new Point;
    p1->x = 3;
    p1->y = 4;
    p1->nextaddress = NULL;

    //second structure
    Point * p2 = new Point;
    p2->x = 7;
    p2->y = 16;
    p2->nextaddress = NULL;

    //to link the first structure with second structure
    p1->nextaddress = p2;

    //display the p1 information
    cout << "p1 info : \n ---\n";
    cout << "p1 Address : " << p1 << endl;
    cout << "p1 x value : " << p1->x << endl;
    cout << "p1 y value : " << p1->y << endl;
    cout << "p1 nextaddress value : " << p1->nextaddress << endl << endl;

    ///display the p2 information
    cout << "P2 info : \n ---\n";
    cout << "P2 Address : " << p2 << endl;
    cout << "P2 x value : " << p2->x << endl;
    cout << "P2 y value : " << p2->y << endl;
    cout << "P2 nextaddress value : " << p2->nextaddress << endl << endl;

    //to display: create a new pointer 'head' to follow the list from p1 to p2
    Point * head = NULL;
    head = p1;

    while (head != NULL)
    {
    cout << head->x << ", ";
    cout << head->y << ", ";
    cout << head->nextaddress << endl;
    head = head->nextaddress;
    }
}