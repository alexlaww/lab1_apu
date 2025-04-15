#include <iostream>
using namespace std;

struct Point{
    int x, y;
    Point * nextaddress;
};

int main(){
    //first structure
    Point *p1 = new Point{3, 4, nullptr};
    //second structure
    Point * p2 = new Point{7, 16, nullptr};
    //to link the first structure with second structure
    p1->nextaddress = p2;
    //display the p1 information
    cout << "P1 info : \n ----------------\n";
    cout << "P1 Address : " << p1 << endl;
    cout << "P1 x value : " << p1->x << endl;
    cout << "P1 y value : " << p1->y << endl;
    cout << "P1 nextaddress value : " << p1->nextaddress << endl;
    
    ////display the p2 information
    cout << "P2 info : \n ----------------\n";
    cout << "P2 Address : " << p2 << endl;
    cout << "P2 x value : " << p2->x << endl;
    cout << "P2 y value : " << p2->y << endl;
    cout << "P2 nextaddress value : " << p2->nextaddress << endl;
}