//7
#include <iostream>
using namespace std;

int main() {
    float widthA, heightA, widthB, heightB;
    float areaA, areaB;
    
    // get Input for A
    cout << "Rectangle A:\n";
    cout << "Width = ";
    cin >> widthA;
    cout << "Height = ";
    cin >> heightA;

    //get input for B
    cout << "\nRectangle B:\n";
    cout << "Width = ";
    cin >> widthB;
    cout << "Height = ";
    cin >> heightB;

    //area
    areaA = widthA * heightA;
    areaB = widthB * heightB;

    cout << endl;
    cout << "area A: " << areaA << endl;;
    cout << "area B: " << areaB << endl;;
    cout << endl;
    
    //compare
    if (areaA > areaB) {
        cout << "Area in rectangle A is bigger than rectangle B." << endl;
    } else if (areaB > areaA) {
        cout << "Area in rectangle B is bigger than rectangle A." << endl;
    } else {
        cout << "Area in both rectangles is the same." << endl;
    }
    
    return 0;
} 