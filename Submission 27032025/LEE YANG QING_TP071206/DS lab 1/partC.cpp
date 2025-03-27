/*
1.
#include <iostream>
#include <iomanip> 
using namespace std;

bool isLeapYear(int year) {  //check leap year
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDays(int month, int year) { //get num of days/month
    switch(month) {
        case 2: return isLeapYear(year) ? 29 : 28; //28/29days
        case 4: case 6: case 9: case 11: return 30; //30 days
        default: return 31; //others=31days
    }
}

int getStartDay(int month, int year) { 
    if (month < 3) {
        month += 12;
        year--;
    }
    int a = 1; //
    int b = month;
    int c = year % 100;  
    int d = year / 100;
    int e = (a + 13*(b + 1)/5 + c + c/4 + d/4 + 5*d) % 7;

    return (e + 6) % 7; //Convert Saturday=0 to Sunday=0
}

void printCalendar(int month, int year) {
        string months[] = {"", "January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
        
        int startDay = getStartDay(month, year);
        int daysInMonth = getDays(month, year);

        cout << "\n\tCalendar Title : " << months[month] << " - " << year << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << " Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday" << endl;
        cout << "------------------------------------------------------------" << endl;
    
        for (int i = 0; i < startDay; ++i) {
            cout << setw(8) << " ";
        }

        for (int day = 1; day <= daysInMonth; ++day) {
            cout << setw(8) << day;
            if ((day + startDay) % 7 == 0)
                cout << endl;
        }
        cout << "\n------------------------------------------------------------\n";


}



int main() {
    int month, year, again;

    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month. Please enter a value between 1 and 12.\n";
            continue;
        }

        printCalendar(month, year);

        cout << "\nDo you want to see another month? (1 = Yes, 0 = No): ";
        cin >> again;

    } while (again == 1);

    cout << "Thanks for using the calendar app!\n";
    return 0;
}*/

//2.
/*
#include <iostream>
 
using namespace std;

int main() {
    string month;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    char weather;
    int day = 1;

    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month); //get user input

    while (true) {
        cout << "Day " << day << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end): ";
        cin >> weather;
        weather = toupper(weather); // change all to uppercase

        if (weather == 'H') {
            hotDays++;
        } else if (weather == 'R') {
            rainyDays++;
        } else if (weather == 'C') {
            cloudyDays++;
        } else if (weather == 'E') {
            break; //after break then go to count
        } else {
            cout << "Invalid input. Please enter H, R, C, or E." << endl;
            continue; // Skip to next iteration without increasing the day
        }

        day++; 
    }

    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;

    cout << "Press any key to continue . . .";
    cin.ignore(); // Ignore leftnewline
    cin.get();    // Wait for user to press Enter

    return 0;
}*/

//3.
/*
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rate, amount;
    int option;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> option;

    if (option == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        cout << fixed << setprecision(2);
        cout << "$" << amount << " is " << amount * rate << " yuan" << endl;
    } else if (option == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << amount / rate << endl;
    } else {
        cout << "Invalid option! Please enter 0 or 1." << endl;
    }

    return 0;
}*/

//4.
/*
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows (for diamond (triangle) dimension): ";
    cin >> rows;

    // top half
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        for (int star = 1; star <= (2 * i - 1); ++star) { //to print an odd number of stars
            cout << "*";
        }
        cout << endl;
    }

    // bottom half
    for (int i = rows - 1; i >= 1; --i) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        for (int star = 1; star <= (2 * i - 1); ++star) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}*/

//5.
/*
#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers between 1 and 50 are:\n";

    for (int i = 2; i <= 50; i += 2) { //start with 2 and always add 2
        cout << i << " ";
    }

    cout << endl;
    return 0;
} */

//6
/*
#include <iostream>
using namespace std;

int main() {
    float quiz, midterm, finalExam, average;

    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> quiz >> midterm >> finalExam;

    average = (quiz + midterm + finalExam) / 3;

    if (average >= 90)
        cout << "Grade A" << endl;
    else if (average >= 70)
        cout << "Grade B" << endl;
    else if (average >= 50)
        cout << "Grade C" << endl;
    else
        cout << "Grade F" << endl;

    cout << "Press any key to continue . . .";
    cin.ignore();
    cin.get(); 
    return 0;

}*/
//7.
/*
#include <iostream>
using namespace std;

int main() {
    float widthA, heightA, widthB, heightB;
    float areaA, areaB;
    
    // get Input for A
    cout << "Rectangle A:\n";
    cout << "Width = ";
    cin >> widthA;
    cout << "Height = ";
    cin >> heightA;

    //get input for B
    cout << "\nRectangle B:\n";
    cout << "Width = ";
    cin >> widthB;
    cout << "Height = ";
    cin >> heightB;

    //area
    areaA = widthA * heightA;
    areaB = widthB * heightB;

    cout << endl;
    cout << "area A: " << areaA << endl;;
    cout << "area B: " << areaB << endl;;
    cout << endl;
    
    //compare
    if (areaA > areaB) {
        cout << "Area in rectangle A is bigger than rectangle B." << endl;
    } else if (areaB > areaA) {
        cout << "Area in rectangle B is bigger than rectangle A." << endl;
    } else {
        cout << "Area in both rectangles is the same." << endl;
    }
    
    return 0;
} */

//8.
#include <iostream>
using namespace std;

int main() {
    double mealCost, gst, tipPercent, totalAfterGST, totalWithTip;

    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealCost;
    cout << "Enter tip percentage (%): ";
    cin >> tipPercent;
 
    // GST 
    gst = mealCost * 0.06;
    totalAfterGST = mealCost + gst;
    
    //tips
    double tips= totalAfterGST * (tipPercent / 100);
    totalWithTip = totalAfterGST + tips;

    cout << "\nThe total cost of the meal BEFORE GST and tipping: RM" << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: RM" << totalAfterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: RM" << totalWithTip << endl;

    return 0;
}