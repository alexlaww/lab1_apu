#include <iostream>
using namespace std;

double length1, width1, length2, width2, area1, area2;
void calculate();
void compare();

int main() {
    
    cout << "Rectangle A: "<<endl<<"Width: ";
    cin >> width1;
    cout <<"Height: ";
    cin >> length1;

    cout << "Rectangle B: "<<endl<<"Width: ";
    cin >> width2;
    cout <<"Height: ";
    cin >> length2;
    
    calculate();
    compare();
    return 0;
}

void calculate(){
    area1 = length1 * width1;
    area2 = length2 * width2;
}
void compare(){
    if (area1 > area2) {
        cout << "Rectangle A bigger than Rectangle B." << endl;
    } else if (area2 > area1) {
        cout << "Rectangle B bigger than Rectangle A." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }
}