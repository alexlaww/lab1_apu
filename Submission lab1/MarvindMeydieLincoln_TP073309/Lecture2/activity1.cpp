#include <iostream>

using namespace std;

int main(){
    double feet;
    double inch;
    double lenght;

    cout << "Enter lenght in feet: ";
    cin >> feet;

    cout << "Enter lenght in inch: ";
    cin >> inch; 

    lenght = ((feet*12) + inch) * 2.54;
    cout << "Coverted length: " << lenght << "cm" << endl;
    
    return 0;
}
