#include<iostream>
using namespace std;

int main(){
    int billy [5] = {};
    int sum = 0;

    cout << "Give number 1: ";
    cin >> billy[0];
    cout <<"Give number 2: ";
    cin >> billy[1];
    cout << "Give number 3: ";
    cin >> billy[2];
    cout << "Give number 4: ";
    cin >> billy[3];
    cout << "Give number 5: ";
    cin >> billy[4];
    cout << endl;

    for (int i = 0 ; i < 5 ; i++){
        sum += billy[i];

        if (i< 4)
            cout << billy[i] << " + ";
        else
            cout << billy[i];
    }
    
    cout << " = " << sum;
    return 0;
}