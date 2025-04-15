#include <iostream>
using namespace std;

int main() {
    int widthA, heightA, widthB, heightB;
    int areaA, areaB;

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

    if (areaA > areaB)
        cout << "\nArea in rectangle A is bigger than rectangle B." << endl;
    else if (areaB > areaA)
        cout << "\nArea in rectangle B is bigger than rectangle A." << endl;
    else
        cout << "\nBoth rectangles have the same area." << endl;

    system("pause");
    return 0;
}
