#include <iostream>
#include <string>
using namespace std;

// Activity 1: Convert feet and inches to centimeters
void convertToCentimeters(int feet, int inches) {
    int totalInches = (feet * 12) + inches;
    double centimeters = totalInches * 2.54;
    cout << feet << " feet " << inches << " inches = " << centimeters << " centimeters" << endl;
}

// Activity 2: Various C++ statements
void activity2() {
    int x = 0, y = 5;
    if (y > 0) x = 1;

    double score = 85;
    if (score >= 80 && score <= 90) score += 5;

    cout << "Is x odd and positive? " << ((x > 0 && x % 2 != 0) ? "true" : "false") << endl;

    cout << "Are x and y both positive? " << ((x > 0 && y > 0) ? "true" : "false") << endl;

    int speed = 60;
    int ticket = (speed > 55) ? 1 : 0;
    cout << "Ticket value (speed = " << speed << "): " << ticket << endl;
}

// Activity 3: Loop conversions
void activity3() {
    int number = 100;
    cout << "While loop:" << endl;
    while (number > 10) {
        cout << number << "\t";
        number = number - 5;
    }

    cout << "\n\nFor loop:" << endl;
    for (int number = 100; number > 10; number -= 5) {
        cout << number << "\t";
    }

    cout << "\n\nDo-while loop:" << endl;
    number = 100;
    do {
        cout << number << "\t";
        number = number - 5;
    } while (number > 10);
    cout << endl;
}

// Activity 4: Count uppercase letters
void countUppercase() {
    string input;
    cout << "Enter a String: ";
    getline(cin, input);
    
    int count = 0;
    for (char c : input) {
        if (isupper(c)) {
            count++;
        }
    }
    cout << "The number of uppercase letters is " << count << endl;
}

// Activity 5: Print prime numbers between two numbers
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimes(int start, int end) {
    cout << "Prime Numbers between " << start << " to " << end << endl;
    cout << string(70, '=') << endl;
    
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << "\t";
            count++;
            if (count % 10 == 0) cout << endl;
        }
    }
    cout << "\n" << string(70, '=') << endl;
}