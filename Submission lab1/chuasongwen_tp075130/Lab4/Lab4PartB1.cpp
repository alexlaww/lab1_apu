#include <iostream>
using namespace std;

struct Point{
    int x, y;
};

int main(){
    Point * p1 = new Point;
    p1->x = 3; 
    p1->y = 4;
    cout << p1->x << " " << p1->y; 
    return 0;
}