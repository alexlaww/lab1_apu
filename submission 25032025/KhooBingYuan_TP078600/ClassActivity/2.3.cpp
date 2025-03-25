#include <iostream>
using namespace std;

int main(){
    int x; 
    cout << "Enter a positive odd number for x: ";
    cin >> x;

    if( x%2 != 0 && x >0){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    return 0;
}
