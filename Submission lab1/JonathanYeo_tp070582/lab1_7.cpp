#include <iostream>
using namespace std;

int main() {
    string month [] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int days [] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                    21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
    int n = sizeof(month) / sizeof(month[0]);
    
    cout << "Month" << endl;
    for (int i = 0; i < n; i++) {
        cout << month[i] << "\t ";
    }
    cout << endl;
    for (int j = 0; j < 31; j++) {
        cout << days[j] << "\t ";
    }
}
