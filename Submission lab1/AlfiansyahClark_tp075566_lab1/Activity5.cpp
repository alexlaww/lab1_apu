#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2)  
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
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

    cout << "Prime Numbers between " << start << " to " << end << endl;
    cout << "======================================================" << endl;

    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) { 
            cout << i << " "; 
            count++;

            
            if (i < 100) cout << " "; 
            if (count % 10 == 0)
                cout << endl;
        }
    }
    cout << endl << "======================================================" << endl;
    return 0;
}
