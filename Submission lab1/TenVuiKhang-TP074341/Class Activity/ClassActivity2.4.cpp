#include<iostream>

using namespace std;

int main(){
    int x;
    int y;

    cout << "Enter x: ";
    cin >> x;
    cout << endl;

    cout << "Enter y: ";
    cin >> y;
    cout <<endl;

    if (x > 0 && y > 0){
        cout << "True";
    }else{
        cout << "False";
    }
    return 0;
}