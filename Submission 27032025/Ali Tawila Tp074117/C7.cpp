#include <iostream>
using namespace std;

int main() {
    float widthA, heightA, widthB, heightB;
    
    cout << "Enter width and height for Rectangle A: ";
    cin >> widthA >> heightA;
    
    cout << "Enter width and height for Rectangle B: ";
    cin >> widthB >> heightB;
    
    float areaA = widthA * heightA;
    float areaB = widthB * heightB;
    
    if (areaA > areaB)
        cout << "Area in rectangle A is bigger than rectangle B." << endl;
    else if (areaB > areaA)
        cout << "Area in rectangle B is bigger than rectangle A." << endl;
    else
        cout << "Both rectangles have the same area." << endl;

    return 0;
}