#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

// Function to check if a year is a leap year
bool q1_isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int q1_getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && q1_isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

// Function to determine the starting day of the month
int q1_getStartingDay(int year, int month) {
    int totalDays = 0;
    for (int y = 1900; y < year; y++) {
        totalDays += q1_isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        totalDays += q1_getDaysInMonth(m, year);
    }
    return (totalDays + 1) % 7; // 1st Jan 1900 was Monday (index 1)
}

// Function to print the calendar
void q1_printCalendar(int year, int month) {
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    cout << "\n  Calendar Title : " << months[month - 1] << " - " << year << "\n";
    cout << "-----------------------------------------------------\n";
    cout << "  Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday\n";
    
    int days = q1_getDaysInMonth(month, year);
    int startDay = q1_getStartingDay(year, month);
    
    int currentDay = 1;
    
    for (int i = 0; i < startDay; i++) {
        cout << "       ";
    }
    
    for (int i = startDay; i < 7; i++) {
        cout << setw(7) << currentDay++;
    }
    cout << "\n";
    
    while (currentDay <= days) {
        for (int i = 0; i < 7 && currentDay <= days; i++) {
            cout << setw(7) << currentDay++;
        }
        cout << "\n";
    }
    cout << "-----------------------------------------------------\n";
}

int q1() {
    int year, month, choice;
    
    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;
        
        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter a valid month (1-12)." << endl;
            continue;
        }
        
        q1_printCalendar(year, month);
        
        cout << "Do you want to see another month? (1 = Yes, 0 = No): ";
        cin >> choice;
        
    } while (choice == 1);
}

void q2() {
    string input, month;
    int year, month_num, days, hotDays = 0, rainyDays = 0, cloudyDays = 0;
    char weather;

    // Map month names to numbers (0-based index)
    map<string, int> months = {
        {"January", 1}, {"February", 2}, {"March", 3}, {"April", 4},
        {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8},
        {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}
    };

    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, input);  

    // Split input into month and year
    istringstream ss(input);
    ss >> month >> year;

    // Convert month name to number
    if (months.find(month) != months.end()) {
        month_num = months[month];
        days = q1_getDaysInMonth(month_num, year);
    } else {
        cout << "Invalid month entered!" << endl;
        return;
    }

    for (int i = 1; i <= days; i++) {
        do {
            cout << "Day " << i << ": Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
            cin >> weather;
            weather = toupper(weather);
        } while (weather != 'H' && weather != 'R' && weather != 'C');

        if (weather == 'H') hotDays++;
        else if (weather == 'R') rainyDays++;
        else if (weather == 'C') cloudyDays++;
    }

    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;
    
    cout << "Press any key to continue...";
    cin >> input;
}

void q3() {
    double exchangeRate, amount, convertedAmount;
    int choice;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;

    do
    {
        cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
        cin >> choice;
    } while (choice != 0 && choice != 1);

    if (choice == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        convertedAmount = amount * exchangeRate;
        cout << fixed << setprecision(2);
        cout << "$" << amount << " is " << convertedAmount << " yuan" << endl;
    } else {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        convertedAmount = amount / exchangeRate;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << convertedAmount << endl;
    }
}

void q4() {
    int rows;

    cout << "Enter number of rows (for diamond (triangle) dimension) : ";
    cin >> rows;

    rows*=2;

    // Upper part of diamond
    for (int i = 1; i <= rows; i += 2) {
        for (int j = rows; j > i; j -= 2)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << "*";
        cout << endl;
    }

    // Lower part of diamond
    for (int i = rows - 2; i >= 1; i -= 2) {
        for (int j = rows; j >= i; j -= 2)
            cout << " ";
        for (int k = 1; k < i; k++)
            cout << "*";
        cout << endl;
    }
}

void q5() {
    int count = 0;

    // Loop from 2 to 50 (even numbers)
    for (int i = 2; i <= 50; i += 2) {
        cout << i << "\t"; // Print number with tab spacing
        count++;

        // Print a newline after every 5 numbers to match the given format
        if (count % 5 == 0) {
            cout << endl;
        }
    }
}

void q6(){
    double score_a, score_b, score_c, avg;
    string input, grade;

    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    getline(cin, input);  

    istringstream ss(input);
    ss >> score_a >> score_b >> score_c;

    avg = (score_a + score_b + score_c)/3;

    if (avg >= 90){
        grade = "Grade A";
    } else if (avg >= 70) {
        grade = "Grade B";
    } else if (avg >= 50) {
        grade = "Grade C";
    } else {
        grade = "Grade F";
    }

    cout << grade;
    cout << endl << "Press any key to continue...";
    cin >> input;
}

void q7(){
    double r1_width, r1_height, r2_width, r2_height, r1_area, r2_area;

    cout << "Rectangle A:" << endl;
    cout << "Width=  ";
    cin >> r1_width;
    cout << "Height=  ";
    cin >> r1_height;
    r1_area = r1_width*r1_height;

    cout << endl <<"Rectangle B:" << endl;
    cout << "Width=  ";
    cin >> r2_width;
    cout << "Height=  ";
    cin >> r2_height;
    r2_area = r2_width*r2_height;

    if (r1_area>r2_area){
        cout << "Area in rectangle A is bigger than rectangle B.";
    } else if (r1_area<r2_area){
        cout << "Area in rectangle A is smaller than rectangle B.";
    } else {
        cout << "Area in rectangle A is the same as rectangle B.";
    }
    cout << endl;
}


void q8(){
    const double GST_RATE = 0.06;
    double mealCost, tipPercentage, gstAmount, totalAfterGST, tipAmount, finalTotal;
    
    // Get user input
    cout << "Enter the cost of the meal before GST and tipping: RM";
    cin >> mealCost;
    
    cout << "Enter tip percentage: ";
    cin >> tipPercentage;
    
    // Compute GST and total after GST
    gstAmount = mealCost * GST_RATE;
    totalAfterGST = mealCost + gstAmount;
    
    // Compute tip amount and final total
    tipAmount = totalAfterGST * (tipPercentage / 100);
    finalTotal = totalAfterGST + tipAmount;
    
    // Display results
    cout << fixed << setprecision(2);
    cout << "\nTotal cost BEFORE GST and tipping: RM" << mealCost << endl;
    cout << "Total cost AFTER GST: RM" << totalAfterGST << endl;
    cout << "Total cost AFTER GST and tipping: RM" << finalTotal << endl;
    
}

int main() {
    // q1();
    // q2();
    // q3();
    // q4();
    // q5();
    // q6();
    // q7();
    // q8();
    return 0;
}