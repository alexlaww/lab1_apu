#include<iostream>

using namespace std;


bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int start, int end) {
    cout << "Prime Numbers between " << start << " and " << end << ":\n";
    cout << "========================================\n";
        
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
        
    cout << "\n========================================\n";
}

int main(){
    int start, end;
    
    cout << "Enter start value: ";
    cin >> start;
    cout << "Enter end value: ";
    cin >> end;
    
    printPrimes(start, end);

    return 0;
}