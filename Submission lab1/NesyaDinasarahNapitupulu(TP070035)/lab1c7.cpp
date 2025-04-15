#include<iostream>
using namespace std;

int main() {
    int width1, width2, height1, height2, area1, area2;
    cout << "Rectangle A:" << endl;
    cout << "Width = ";
    cin >> width1;
    cout << "Height = ";
    cin >> height1;

    cout << "Rectangle B:" << endl;
    cout << "Width = ";
    cin >> width2;
    cout << "Height = ";
    cin >> height2;

    area1 = width1 * height1;
    area2 = width2 * height2;

    if (area1 > area2) {
        cout << "Area in rectangle A is bigger than rectangle B";
    }
    else if (area2 > area1) {
        cout << "Area in rectangle B is bigger than rectangle A";
    }
    else {
        cout << "Area in rectangle A and rectangle B are equal";
    }
}