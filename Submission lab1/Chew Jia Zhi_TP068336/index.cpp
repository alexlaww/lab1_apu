#include <iostream>
#include <iomanip>
#include <sstream>


using namespace std;

// int main(){
//      // Part A: Q1
//     string studentName, studentGender, studentAddress;
//     int studentAge;
//     double studentEWalletAmount;
    
//     cout << "Student Name       : ";
//     getline(cin, studentName);

//     cout << "Student Gender     : ";
//     getline(cin, studentGender);

//     cout << "Student Age        : ";
//     cin >> studentAge;

//     cin.ignore(); 

//     cout << "Student Home Address : ";
//     getline(cin, studentAddress);

//     cout << "E-wallet Amount    : RM ";
//     cin >> studentEWalletAmount;

//     cout << "\nStudent details as below:\n";

//     cout << setfill('=') << setw(61) << "=" << endl;
//     cout << setfill(' ') 
//          << "| " << setw(12) << left << "Name"
//          << "| " << setw(4) << "Age"
//          << "| " << setw(8) << "Gender"
//          << "| " << setw(10) << "Address"
//          << "| " << setw(14) << "E-wallet amount"
//          << " |" << endl;

//     cout << setfill('=') << setw(61) << "=" << endl;

//     cout << setfill(' ') 
//          << "| " << setw(12) << left << studentName
//          << "| " << setw(4) << studentAge
//          << "| " << setw(8) << studentGender
//          << "| " << setw(10) << studentAddress
//          << "| RM" << setw(12) << fixed << setprecision(2) << studentEWalletAmount
//          << " |" << endl;

//     cout << setfill('=') << setw(61) << "=" << endl;

//     return 0;

// }

bool isValidTime(int hh, int mm, int ss) {
     return (hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
 }
int main(){
     string timeInput;
    int hh, mm, ss;
    char colon1, colon2;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> timeInput;

        // Using stringstream to parse the input
        stringstream ssTime(timeInput);
        if (ssTime >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':' && isValidTime(hh, mm, ss)) {
            break; // Valid input, exit loop
        } else {
            cout << "Invalid input!\n";
        }
    }

    // Convert time to seconds
    int totalSeconds = hh * 3600 + mm * 60 + ss;
    cout << "Elapsed time in seconds = " << totalSeconds << " seconds" << endl;
     return 0;
}