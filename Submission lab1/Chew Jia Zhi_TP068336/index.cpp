#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <ctime>

using namespace std;
// part A: Q1
// int main(){
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



// part b: Q1
//
// bool isValidTime(int hh, int mm, int ss) {
//      return (hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
//  }
// int main(){
//      string timeInput;
//     int hh, mm, ss;
//     char colon1, colon2;

//     while (true) {
//         cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
//         cin >> timeInput;

//         stringstream ssTime(timeInput);
//         if (ssTime >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':' && isValidTime(hh, mm, ss)) {
//             break;
//         } else {
//             cout << "Invalid input!\n";
//         }
//     }

//     int totalSeconds = hh * 3600 + mm * 60 + ss;
//     cout << "Elapsed time in seconds = " << totalSeconds << " seconds" << endl;
//      return 0;



//part b: Q2
// int main() {
//     srand(time(0));
//     int lower = 1, upper = 100;
//     int secretNumber = lower + rand() % (upper - lower + 1);
//     int userGuess;

//     cout << "==================================" << endl;
//     cout << "     Guess Number Game Started Now!" << endl;
//     cout << "==================================" << endl;

//     while (true) {
//         cout << "Guess Number between " << lower << " to " << upper << endl;
//         cout << "Your answer: ";
//         cin >> userGuess;

//         if (userGuess < lower || userGuess > upper) {
//             cout << "Invalid input! Please enter a number between " << lower << " and " << upper << "." << endl;
//             continue;
//         }

//         if (userGuess < secretNumber) {
//             lower = userGuess; 
//         } else if (userGuess > secretNumber) {
//             upper = userGuess; 
//         } else {
//             cout << "Congratulations! You won!" << endl;
//             break;
//         }
//     }
//     return 0;
// }



// Part C: Q1
// bool isLeapYear(int year) {
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }

// int getDaysInMonth(int month, int year) {
//     if (month == 2) {
//         return isLeapYear(year) ? 29 : 28;
//     }
//     if (month == 4 || month == 6 || month == 9 || month == 11) {
//         return 30;
//     }
//     return 31;
// }

// int getStartingDay(int year, int month) {
//     struct tm timeStruct = {0};
//     timeStruct.tm_year = year - 1900;
//     timeStruct.tm_mon = month - 1;
//     timeStruct.tm_mday = 1;
//     mktime(&timeStruct);
//     return timeStruct.tm_wday;
// }

// void printCalendar(int year, int month) {
//     const string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
//     cout << "\n-------------------------------------------------\n";
//     cout << "             Calendar Title : " << months[month] << " - " << year << "\n";
//     cout << "-------------------------------------------------\n";
//     cout << "Sunday   Monday   Tuesday  Wednesday Thursday  Friday   Saturday\n";
//     cout << "-------------------------------------------------\n";

//     int daysInMonth = getDaysInMonth(month, year);
//     int startDay = getStartingDay(year, month);

//     int day = 1;
//     for (int i = 0; i < startDay; i++) {
//         cout << setw(9) << " ";
//     }
//     for (int i = startDay; i < 7; i++) {
//         cout << setw(8) << day++ << " ";
//     }
//     cout << "\n";
//     while (day <= daysInMonth) {
//         for (int i = 0; i < 7 && day <= daysInMonth; i++) {
//             cout << setw(8) << day++ << " ";
//         }
//         cout << "\n";
//     }
//     cout << "-------------------------------------------------\n";
// }

// int main() {
//     int year, month, choice;
//     do {
//         cout << "Enter calendar's year: ";
//         cin >> year;
//         cout << "Enter calendar's month: ";
//         cin >> month;

//         if (month < 1 || month > 12) {
//             cout << "Invalid month. Please enter a valid month (1-12).\n";
//             continue;
//         }

//         printCalendar(year, month);
        
//         cout << "Do you want to see another month? 1 = Yes, others = No: ";
//         cin >> choice;
//     } while (choice == 1);
    
//     return 0;
// }



//Part C: Q2