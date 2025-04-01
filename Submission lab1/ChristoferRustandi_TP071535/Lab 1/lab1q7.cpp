#include <iostream>
using namespace std;

int main(){
    int widthA, heightA, widthB, heightB, areaA, areaB;

    cout << "Rectangle A \n";
    cout << "Width A: ";
    cin >> widthA;
    cout << "Height A: ";
    cin >> heightA;

    cout << endl;

    cout << "Rectangle B \n";
    cout << "Width B: ";
    cin >> widthB;
    cout << "Height B: ";
    cin >> heightB;

    areaA = widthA * heightA;
    areaB = widthB * heightB;

    if(areaA > areaB){
        cout << "Area A is bigger than Area B";
    }
    else if (areaA < areaB){
        cout << "Area B is bigger than Area A";
    }else{
        cout << "The both areas are equals";
    }

    return 0;
}