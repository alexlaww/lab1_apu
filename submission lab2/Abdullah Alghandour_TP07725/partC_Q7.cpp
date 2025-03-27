#include <iostream>

using namespace std;

int main()
{
    double widthA, heightA, widthB, heightB, areaA, areaB;

    cout << "Rectangle A:" << endl;
    cout << "Width = ";
    cin >> widthA;
    cin.ignore();
    cout << "Height = ";
    cin >> heightA;
    cin.ignore();

    cout << endl;

    cout << "Rectangle B:" << endl;
    cout << "Width = ";
    cin >> widthB;
    cin.ignore();
    cout << "Height = ";
    cin >> heightB;
    cin.ignore();

    cout << endl;

    areaA = widthA * heightA;
    areaB = widthB * heightB;

    if (areaA > areaB)
    {
        cout << "Area in rectangle A is bigger than rectangle B" << endl;
    }
    else if (areaA < areaB)
    {
        cout << "Area in rectangle B is bigger than rectangle A" << endl;
    }
    else
    {
        cout << "Area in rectangle A is equal to rectangle B" << endl;
    }

    return 0;
}
