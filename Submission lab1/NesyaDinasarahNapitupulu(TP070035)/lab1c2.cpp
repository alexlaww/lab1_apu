#include<iostream>
using namespace std;

int main() {
    char weather;
    int hot, rainy, cloudy = 0;
    for (int i = 0; i < 28; i++) {
        cout << "Day " << (i + 1) << ": Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (E to end): ";
        cin >> weather;
        if (weather == 'H') {
            hot += 1;
        }
        else if (weather == 'R') {
            rainy += 1;
        }
        else if (weather == 'C') {
            cloudy += 1;
        }
        else if (weather == 'E') {
            break;
        }
        else {
            cout << "Wrong input. Please try again" << endl;
            i--;
        }
    }
    cout << "Number of hot days this month: " << hot << endl;
    cout << "Number of rainy days this month: " << rainy << endl;
    cout << "Number of cloudy days this month: " << cloudy << endl;

    cout << "Press any key to continue...";
    return 0;
}