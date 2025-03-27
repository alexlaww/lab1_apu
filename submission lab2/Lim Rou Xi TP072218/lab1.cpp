#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <conio.h>
using namespace std;

// Part A 
int main() {
    string name, gender, address;
    int age;
    double eWalletAmount;
    
    cout << "Student Name\t:";
    getline(cin, name);
    
    cout << "Student Gender\t\t:";
    getline(cin, gender);
    
    cout << "Student Age\t\t:";
    while(!(cin >> age) || age < 0 || age > 150) {
        cout << "Please enter a valid age (0-150): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Student Home Address\t:";
    getline(cin, address);
    
    cout << "E-wallet Amount\t\t:RM ";
    while(!(cin >> eWalletAmount) || eWalletAmount < 0) {
        cout << "Please enter a valid amount: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nStudent First Name\t:" << name << endl;
    cout << "Student Gender\t\t:" << gender << endl;
    cout << "Student Age\t\t:" << age << endl;
    cout << "Student Home Address\t:" << address << endl;
    cout << "E-wallet Amount\t\t:RM " << fixed << setprecision(2) << eWalletAmount << endl;
    cout << "Press any key to continue . . . ";
    _getch();
    system("cls");

    cout << "======================================================================" << endl;
    cout << "| Student Details as below:                                           |" << endl;
    cout << "======================================================================" << endl;
    cout << "| Name     : " << setw(55) << right << name << "|" << endl;
    cout << "| Age      : " << setw(55) << right << age << "|" << endl;
    cout << "| Gender   : " << setw(55) << right << gender << "|" << endl;
    cout << "| Address  : " << setw(55) << right << address << "|" << endl;
    cout << "| E-Wallet : RM " << setw(52) << right << fixed << setprecision(2) << eWalletAmount << "|" << endl;
    cout << "======================================================================" << endl;

    return 0;
}

// Part B Question 1
bool isValidTimeFormat(const string& time) {
    if (time.length() != 8) return false;
    if (time[2] != ':' || time[5] != ':') return false;
    
    int hh, mm, ss;
    sscanf(time.c_str(), "%d:%d:%d", &hh, &mm, &ss);
    
    return (hh >= 0 && hh <= 23) && (mm >= 0 && mm <= 59) && (ss >= 0 && ss <= 59);
}

int timeToSeconds(const string& time) {
    int hh, mm, ss;
    sscanf(time.c_str(), "%d:%d:%d", &hh, &mm, &ss);
    return hh * 3600 + mm * 60 + ss;
}

int main() {
    string time;
    
    while (true) {
        cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
        getline(cin, time);
        
        if (!isValidTimeFormat(time)) {
            cout << "Invalid input!" << endl;
            continue;
        }
        
        int seconds = timeToSeconds(time);
        cout << "Elapsed time in seconds = " << seconds << " seconds" << endl;
        break;
    }
    
    return 0;
}

// Part B Question 2
int main() {
    srand(time(0));

    int min = 1;
    int max = 100;

    int target = min + rand() % (max - min + 1);
    int guess;

    cout << "Guess Number Game Started Now!" << endl;
    cout << "Guess Number between " << min << " to " << max << endl;
    
    while (true) {
        cout << "Your answer: ";
        cin >> guess;
        
        if (guess == target) {
            cout << "Congratulation! You won!" << endl;
            break;
        } else if (guess < target) {
            min = guess + 1;
            cout << "Guess Number between " << min << " to " << max << endl;
        } else {
            max = guess - 1;
            cout << "Guess Number between " << min << " to " << max << endl;
        }
    }
    
    return 0;
}

// Part C Question 1
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return daysInMonth[month];
}

int getDayOfWeek(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) - (2 * j)) % 7;
    return ((h + 5) % 7);
}

void printCalendar(int year, int month) {
    string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    cout << "\n" << setw(20) << "Calendar Title : " << months[month] << " - " << year << endl;
    cout << string(100, '-') << endl;
    
    cout << setw(10) << "Sunday" << setw(10) << "Monday" << setw(10) << "Tuesday" << setw(12) << "Wednesday" << setw(10) << "Thursday" << setw(10) << "Friday" << setw(10) << "Saturday" << endl;
    cout << string(100, '-') << endl;
    
    int startDay = getDayOfWeek(year, month, 1);
    int daysInMonth = getDaysInMonth(month, year);
    
    int currentDay = 1;
    for (int i = 0; i < startDay; i++) {
        cout << setw(10) << " ";
    }
    
    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(10) << day;
        if ((startDay + day) % 7 == 0 || day == daysInMonth) {
            cout << endl;
        }
    }
    cout << endl << string(100, '-') << endl;
}

int main() {
    int year, month, choice;
    
    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;
        
        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter a month between 1 and 12." << endl;
            continue;
        }
        
        printCalendar(year, month);
        
        cout << "Do you want to see other month? 1 = Yes, others = No: ";
        cin >> choice;
    } while (choice == 1);
    
    return 0;
}

// Part C Question 2
int main() {
    string month;
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    int day = 1;
    
    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month);
    
    while (true) {
        cout << "Day " << day << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end): ";
        cin >> weather;
        weather = toupper(weather);
        
        if (weather == 'E') {
            break;
        }
        
        switch (weather) {
            case 'H':
                hotDays++;
                break;
            case 'R':
                rainyDays++;
                break;
            case 'C':
                cloudyDays++;
                break;
            default:
                cout << "Invalid input! Please enter H, R, or C" << endl;
                continue;
        }
        
        day++;
    }
    
    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloud days this month: " << cloudyDays << endl;
    
    cout << "\nPress any key to continue . . .";
    cin.ignore();
    cin.get();
    
    return 0;
}

// Part C Question 3
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rate, amount, result;
    int direction;
    
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rate;
    
    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> direction;
    
    if (direction == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        result = amount * rate;
        cout << fixed << setprecision(1);
        cout << "$" << amount << " is " << result << " yuan" << endl;
    }
    else if (direction == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        result = amount / rate;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << result << endl;
    }
    else {
        cout << "Invalid input! Please enter 0 or 1." << endl;
    }
    
    return 0;
}

// Part C Question 4
void printDiamond() {
    int rows;
    cout << "Enter number of rows (for diamond (triangle) dimension): ";
    cin >> rows;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Part C Question 5
void printEvenNumbers() {
    cout << "\nEven numbers between 1 and 50:\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < 5; j++) {
            int num = 2 + j * 10 + (i - 1) * 2;
            if (num <= 50) {
                cout << setw(8) << num;
            }
        }
        cout << endl;
    }
}

// Part C Question 6
void calculateGrade() {
    double quiz, midterm, final;
    cout << "\nEnter 3 scores (quiz, mid-term, and final) vales separated by space:";
    cin >> quiz >> midterm >> final;
    
    double average = (quiz + midterm + final) / 3;
    char grade;
    
    if (average >= 90) {
        grade = 'A';
    }
    else if (average >= 70) {
        grade = 'B';
    }
    else if (average >= 50) {
        grade = 'C';
    }
    else {
        grade = 'F';
    }
    
    cout << "Grade " << grade << endl;
    cout << "Press any key to continue . . .";
    cin.ignore();
    cin.get();
}

int main() {
    cout << "\n=== Question 4: Diamond Pattern ===\n";
    printDiamond();
    
    cout << "\n=== Question 5: Even Numbers ===\n";
    printEvenNumbers();
    
    cout << "\n=== Question 6: Grade Calculator ===\n";
    calculateGrade();
    
    return 0;
}

// Part C Question 7
void compareRectangles() {
    double width1, height1, width2, height2;
    
    cout << "Rectangle A:\n";
    cout << "Width = ";
    cin >> width1;
    cout << "Height = ";
    cin >> height1;
    
    cout << "\nRectangle B:\n";
    cout << "Width = ";
    cin >> width2;
    cout << "Height = ";
    cin >> height2;
    
    double area1 = width1 * height1;
    double area2 = width2 * height2;
    
    cout << endl;
    if (area1 > area2) {
        cout << "Area in rectangle A is bigger rectangle B." << endl;
    }
    else if (area2 > area1) {
        cout << "Area in rectangle B is bigger rectangle A." << endl;
    }
    else {
        cout << "Areas are the same." << endl;
    }
}

// Part C Question 8
void calculateMealCost() {
    const double GST_RATE = 0.06;
    double mealCost, tipPercentage;
    
    cout << "\nEnter the cost of the meal (before GST and tipping): $";
    cin >> mealCost;
    cout << "Enter the tip amount (as a percentage): ";
    cin >> tipPercentage;
    
    double gstAmount = mealCost * GST_RATE;
    double tipAmount = mealCost * (tipPercentage / 100);
    
    cout << fixed << setprecision(2);
    cout << "\nThe total cost of the meal BEFORE GST and tipping: $" << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: $" << (mealCost + gstAmount) << endl;
    cout << "The total cost of the meal AFTER GST and tipping: $" << (mealCost + gstAmount + tipAmount) << endl;
}

int main() {
    cout << "=== Question 7: Rectangle Area Comparison ===\n";
    compareRectangles();
    
    cout << "\n=== Question 8: Meal Cost Calculator ===\n";
    calculateMealCost();
    
    return 0;
}