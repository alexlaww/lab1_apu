#include <iostream>
using namespace std;

int main() {
    float width_1, height_1, width_2, height_2;

    cout << "Rectangle A:\n";
    cout << "Width = ";
    cin >> width_1;
    cout << "Height = ";
    cin >> height_1;

    cout << "\nRectangle B:\n";
    cout << "Width = ";
    cin >> width_2;
    cout << "Height = ";
    cin >> height_2;

    float areaA = width_1 * height_1;
    float areaB = width_2 * height_2;
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
