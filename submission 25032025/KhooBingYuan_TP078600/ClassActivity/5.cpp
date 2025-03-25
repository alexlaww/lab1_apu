#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to print prime numbers in a given range
void printPrimes(int start, int end) {
    int flag = 0;
    cout << "Prime Numbers between " << start << " to " << end << ":\n";
    cout << "======================================================" << endl;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            flag++;
            if(flag % 10 == 0){
                cout << endl;
            }
        }
        
    }
    cout << endl;
    cout << "======================================================" << endl;
}

int main() {
    int start, end;
    
    // Input range from user
    cout << "Start value: ";
    cin >> start;
    cout << "End value: ";
    cin >> end;

    // Print prime numbers in the range
    printPrimes(start, end);

    return 0;
}
