#include <iostream>
using namespace std;

int main() {
    double widthA, heightA, widthB, heightB, areaA, areaB;

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

    areaA = widthA * heightA;
    areaB = widthB * heightB;

    cout << "\nArea of Rectangle A: " << areaA << endl;
    cout << "Area of Rectangle B: " << areaB << endl;

    if (areaA > areaB)
        cout << "Area in rectangle A is bigger." << endl;
    else if (areaB > areaA)
        cout << "Area in rectangle B is bigger." << endl;
    else
        cout << "Both rectangles have the same area." << endl;

    return 0;
}
