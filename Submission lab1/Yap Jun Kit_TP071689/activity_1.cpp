//Activity 1
#include <iostream>
using namespace std;
int main() {
    int billy[] = {16, 2, 77, 40, 12071, 51};
    int sum = 0;
    int minVal = billy[0]; // Initialize with the first element
    int maxVal = billy[0];

    cout << "Summation process: ";
    for (int i = 0; i < 6; i++) {
        cout << billy[i];
        if (i < 5) cout << " + ";
        sum += billy[i];

        if (billy[i] < minVal) minVal = billy[i];
        if (billy[i] > maxVal) maxVal = billy[i];
    }

    cout << " = " << sum << endl;

    return 0;
}
