#include <iostream>
using namespace std;

int main() {
    int billy[] = {16, 2, 77, 40, 12071, 51};
    int size = sizeof(billy) / sizeof(billy[0]);
    int sum = 0;
    int min = billy[0];
    int max = billy[0];

    for (int i = 0; i < size; i++) {
        cout << billy[i];
        sum += billy[i];
        if (i != size - 1)
            cout << " + ";
        else
            cout << " = ";
        
        if (billy[i] < min)
            min = billy[i];
        if (billy[i] > max)
            max = billy[i];
    }

    cout << sum << endl;
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}
