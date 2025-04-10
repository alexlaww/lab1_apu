#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end;
    cout << "Start value: ";
    cin >> start;
    cout << "End value: ";
    cin >> end;

    cout << "\nPrime Numbers between " << start << " to " << end << endl;
    cout << "=========================================" << endl;

    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << "\t";
            count++;
            if (count % 10 == 0) cout << endl;
        }
    }

    cout << "\n=========================================" << endl;
    return 0;
}
