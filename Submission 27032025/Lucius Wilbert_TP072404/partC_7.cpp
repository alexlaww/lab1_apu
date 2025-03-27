#include <iostream>
using namespace std;

int main() {
    float widthA, heightA, widthB, heightB;

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

    float areaA = widthA * heightA;
    float areaB = widthB * heightB;

    
    cout << "\n";
    if (areaA > areaB) {
        cout << "Area in rectangle A is bigger rectangle B." << endl;
    } else if (areaB > areaA) {
        cout << "Area in rectangle B is bigger rectangle A." << endl;
    } else {
        cout << "Area in rectangle A and B is the same." << endl;
    }

    return 0;
}
