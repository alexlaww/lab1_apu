# include <iostream>

using namespace std;

int main(){
    int widthA, widthB, heightA, heightB, areaA, areaB;

    cout << "Rectangle A: \n" << "Width = ";
    cin >> widthA;

    cout << "Height = ";
    cin >> heightA;

    areaA = widthA * heightA;

    cout << "Rectangle B: \n" << "Width = ";
    cin >> widthB;

    cout << "Height = ";
    cin >> heightB;

    areaB = widthB * heightB;

    if (areaA > areaB){
        cout << "Area in rectangle A is bigger than rectangle B.";
    } else if(areaB > areaA){
        cout << "Area in rectangle B is bigger than rectangle A.";
    } else {
        cout << "Area in rectangle A is equal to rectangle B.";
    }
}