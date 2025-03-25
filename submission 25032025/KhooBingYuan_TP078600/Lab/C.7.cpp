#include <iostream>
using namespace std;

int main(){
    int WidthA, HeightA, WidthB, HeightB;
    double AreaA, AreaB;

    cout << "Rectangle A: " <<endl;
    cout << "Width = ";
    cin >> WidthA;
    cout << "Height = ";
    cin >> HeightA;
    cout << endl;

    cout << "Rectangle B: " <<endl;
    cout << "Width = ";
    cin >> WidthB;
    cout << "Height = ";
    cin >> HeightB;
    cout << endl;

    AreaA = 0.5 * WidthA * HeightA;
    AreaB = 0.5 * WidthB * HeightB;
    if(AreaA > AreaB){
        cout << "Area in rectangle A is bigger than rectangle B.";
    }
    else if(AreaA == AreaB){
        cout << "Both rectangles are equal in Area.";
    }
    else{
        cout << "Area in rectangle B is bigger than rectangle A.";
    }
}