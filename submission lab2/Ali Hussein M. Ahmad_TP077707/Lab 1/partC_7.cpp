#include <iostream>
using namespace std;

int main() {
    double widthA, heightA, widthB, heightB;

    cout << "Rectangle A:\n";
    cout << "Width = ";
    cin >> widthA;
    cout << "Height = ";
    cin >> heightA;

    cout << "\nRectangle B:\n";
    cout << "Width = ";
    cin >> widthB;
    cout << "Height = ";
    cin >> heightB;

    double areaA = widthA * heightA;
    double areaB = widthB * heightB;

    cout << "\n";
    if (areaA > areaB) {
        cout << "Area in rectangle A is bigger than rectangle B.";
    }
    else if (areaB > areaA) {
        cout << "Area in rectangle B is bigger than rectangle A.";
    }
    else {
        cout << "Both rectangles have the same area.";
    }
    
    return 0;
}