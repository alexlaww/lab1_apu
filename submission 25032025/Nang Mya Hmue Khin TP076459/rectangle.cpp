#include <iostream>
using namespace std;

int main()
{
    double w1, h1, w2, h2;
    double a1, a2;

    cout << "Rectangle A: " << endl;
    cout << "Width: ";
    cin >> w1;
    cin.ignore();
    cout << "Height: ";
    cin >> h1;
    cin.ignore();
    a1 = w1 * h1;

    cout << "Rectangle B: " << endl;
    cout << "Width: ";
    cin >> w2;
    cin.ignore();
    cout << "Height: ";
    cin >> h2;
    cin.ignore();
    a2 = w2 * w1;

    if (a1 > a2)
    {
        cout << "Area in rectangle A is bigger than rectangle B.";
    }
    else 
    {
        cout << "Area in rectangle B is bigger than rectangle A.";
    }

}