
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <string>

using namespace std;

// Function to add two integers and return the sum
int add1(int a, int b) {
    return a + b;
}

// Function to add two integers and print the result
void add2(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

// Function to add two integers and print the result directly
void add3(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

// Function to add two integers but does not print or return the result
void add4(int a, int b) {
    // No output or return
}

// Function to print numbers in reverse
void reversePrint(int start, int end) {
    if (start <= end) {
        reversePrint(start + 1, end);
        cout << start << " ";
    }
}

// Recursive function to find the sum
int recursiveSum(int start, int end) {
    if (start > end) {
        return 0;
    }
    return start + recursiveSum(start + 1, end);
}

// Function to reverse the string
void reverseString(string &str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

// Function to check if a string is a palindrome
bool isPalindrome(string str) {
    string reversed = str;
    reverseString(reversed);
    return str == reversed;
}

// Function to validate time input
bool isValidTime(string time) {
    if (time.length() != 8) return false;
    if (time[2] != ':' || time[5] != ':') return false;
    return true;
}

// Function to calculate the elapsed time in seconds
int calculateElapsedTime(string time) {
    int hours, minutes, seconds;
    char colon;
    stringstream ss(time);
    ss >> hours >> colon >> minutes >> colon >> seconds;
    return (hours * 3600) + (minutes * 60) + seconds;
}

int main() {
    // Part 1: Adding two integers
    int a = 5, b = 7;
    int sum1 = add1(a, b);
    cout << "Result from add1: " << sum1 << endl;

    add2(a, b);
    add3(a, b);
    add4(a, b);  // No output

    // Part 2: Reverse print and sum of numbers
    int start, end;
    cout << "Enter start and end values for reverse print: ";
    cin >> start >> end;

    cout << "Reversed numbers: ";
    reversePrint(start, end);
    cout << endl;

    int totalSum = recursiveSum(start, end);
    cout << "Total sum: " << totalSum << endl;

    // Part 3: String palindrome check
    string input;
    cout << "Enter a string: ";
    cin >> input;

    reverseString(input);
    cout << "Reversed string: " << input << endl;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    // Part 4: Time input and calculation
    string time;
    cout << "Enter time in HH:MM:SS format: ";
    cin >> time;

    if (!isValidTime(time)) {
        cout << "Invalid time format." << endl;
        return 1;
    }

    int totalSeconds = calculateElapsedTime(time);
    cout << "Elapsed time in seconds: " << totalSeconds << endl;

    return 0;
}
