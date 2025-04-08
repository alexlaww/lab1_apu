#include <iostream>
using namespace std;

int main() {
    // Variables for width and height of both rectangles
    int widthA, heightA, widthB, heightB;
    
    // Input for Rectangle A
    cout << "Rectangle A:" << endl;
    cout << "Width = ";
    cin >> widthA;
    cout << "Height = ";
    cin >> heightA;
    
    // Input for Rectangle B
    cout << "\nRectangle B:" << endl;
    cout << "Width = ";
    cin >> widthB;
    cout << "Height = ";
    cin >> heightB;

    // Calculate areas
    int areaA = widthA * heightA;
    int areaB = widthB * heightB;

    // Compare areas and display result
    if (areaA > areaB)
        cout << "\nArea in rectangle A is bigger than rectangle B." << endl;
    else if (areaB > areaA)
        cout << "\nArea in rectangle B is bigger than rectangle A." << endl;
    else
        cout << "\nBoth rectangles have the same area." << endl;

    return 0;
}
