#include <iostream>
#include <iomanip>

using namespace std;
const int NUMBER =12;
// int main(){
    /*int num1=0;
    string gp = "I love you";
    cout << gp;

    if(num1< 10)
    cout <<"Hello";
    cin >> num1;
    cout <<"this one is the num1 value"<< num1;
    return 0;*/

    // int firstNum;
    // int secondNum;

    // firstNum = 18;
    // cout << "Line 9: firstNum = "<< firstNum
    //      << endl;
    // cout << "Line 10: Enter an integer:";
    // cin >> secondNum;
    // cout << endl;

    // cout << "Line 13: secondNum = " << secondNum
    //      << endl;
    
    // firstNum = firstNum + NUMBER + 2 * secondNum;

    // cout << "Line 15: The new value of"
    //      << "firstNum = "<< firstNum << endl;

    // return 0;

    /*int feet = 0;  //Question1
    int inch = 0;

    cout <<"Insert feet";
    cin >> feet;
    cout <<"Insert inches";
    cin >> inch;

    int newinch = feet*12 +inch;
    int newcent = newinch*2.54;
    cout << "There are " << newinch <<" inches";
    cout << " and " << newcent <<" centimeters";

    return 0;*/

    /*int y = 1;   //Question2 1
    int x = 0;

    if (y > 0)
    x =1 ;
    cout << x;
    
    return 0;*/

    // double score = 0; //Question 2 2
    
    // cout << "Insert score";
    // cin >> score;

    // if(score>= 80 || score<=90)
    // score += 5;
    // cout << "Your score is  "<< score;

    // return 0;

    // int x = 0;  //Question 2 3
    // int y = 2;
    // if (y > 0 && y % 2 != 0)
    // x += 1;
    // cout << x;

    // return 0;

    // string q = "false"; //Question2 4
    // int x = 1;  
    // int y = 1;
    // if (y > 0 && x>0)
    // q = "true";
    // cout << q;

    // return 0;

    // int ticket = 0; //Question 2 5
    // int speed = 60;
    // if (speed>55) 
    // ticket += 1;
    // cout << "Ticket is " << ticket;

    // return 0;



// }

// int main () {
//     string name = "Ashley", gender = "Female", address = "Address";
//     int age = 21;
//     double amount = 66.0;

//     cout << "Student Name      : "<<name<< "\n";
//     cout << "Student Gender    : "<<gender<< "\n";
//     cout << "Student Age       : "<<age<< "\n";
//     cout << "Student Address   : "<<address<< "\n";
//     cout << "Student Amount    : RM "<<amount<< "\n \n";

//     cout << "Student details as below \n";
//     cout << "============================================================ \n";
//     cout << "| " << setw(12) << "Name"
//     << "| " << setw(4) << "Age"
//     << "| " << setw(8) << "Gender"
//     << "| " << setw(10) << "Address"
//     << "| " << setw(15) << "E-wallet amount"
//     << " |" << endl;

//     cout << "============================================================ \n";

//     // Print student details
//     cout << setfill(' ') << left;
//     cout << "| " << setw(12) << name
//     << "| " << setw(4) << age
//     << "| " << setw(8) << gender
//     << "| " << setw(10) << address
//     << "| RM" << setw(13) << amount
//     << " |" << endl;

//     return 0;
// }

// int main (){
//     int upnumber = 0;
//     string st = "";

//     cout << "Enter a string: ";
//     cin >> st;

//     for (char ch : st) {
//         if (isupper(ch)) {  // Check if the character is uppercase
//             upnumber++;
//         }
//     }

//     cout << "Number of uppercase letters: " << upnumber << endl;

//     return 0;
// }






#include <iomanip>    //Question 1


// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month
int getDaysInMonth(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

// Function to get the starting day of the month (0 = Sunday, 1 = Monday, ...)
int getStartDay(int year, int month) {
    int totalDays = 0;
    for (int y = 1900; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(year, m);
    }
    return (totalDays + 1) % 7; // Jan 1, 1900 was a Monday
}

// Function to display the calendar
void displayCalendar(int year, int month) {
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << "\n------------------------------\n";
    cout << "    Calendar Title : " << months[month - 1] << " - " << year << "\n";
    cout << "------------------------------\n";
    cout << "Sunday    Monday    Tuesday    Wednesday    Thursday    Friday    Saturday\n";
    cout << "----------------------------------------------------------------------\n";
    
    int startDay = getStartDay(year, month);
    int daysInMonth = getDaysInMonth(year, month);

    int day = 1;
    for (int i = 0; i < startDay; i++) {
        cout << "         ";
    }
    for (int i = startDay; i < 7; i++) {
        cout << setw(5) << day++ << "   ";
    }
    cout << "\n";
    while (day <= daysInMonth) {
        for (int i = 0; i < 7 && day <= daysInMonth; i++) {
            cout << setw(5) << day++ << "   ";
        }
        cout << "\n";
    }
}

int main() {
    int year, month;
    char choice;
    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;
        
        if (month < 1 || month > 12) {
            cout << "Invalid month. Please enter a valid month (1-12).\n";
            continue;
        }
        
        displayCalendar(year, month);
        
        cout << "\nDo you want to see another month? (1 - Yes, 0 - No): ";
        cin >> choice;
    } while (choice == '1');
    
    return 0;
}
