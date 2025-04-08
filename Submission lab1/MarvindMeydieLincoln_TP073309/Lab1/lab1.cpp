#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <random>

using namespace std;

void partA1(){
        string name, gender, address;
        int age;
        double eWallet;
    

        cout << "Student Name      : ";
        getline(cin, name);
        cout << "Student Gender    : ";
        cin >> gender;
        cout << "Student Age       : ";
        cin >> age;
        cin.ignore();
        cout << "Student Home Address : ";
        getline(cin, address);
        cout << "E-wallet Amount   : RM ";
        cin >> eWallet;

        cout << "\nStudent details as below:\n\n";
        cout << setfill('=') << setw(67) << "=" << endl;
        cout << setfill(' ') << "| " << left << setw(12) << "Name" 
        << "| " << setw(4) << "Age"
        << "| " << setw(8) << "Gender"
        << "| " << setw(16) << "Address"
        << "| " << setw(16) << "E-wallet amount"
        << "|" << endl;
        
        cout << setfill('=') << setw(67) << "=" << endl;
        cout << setfill(' ') << "| " << left << setw(12) << name
        << "| " << setw(4) << age
        << "| " << setw(8) << gender
        << "| " << setw(16) << address
        << "| RM " << setw(13) << fixed << setprecision(2) << eWallet
        << "|" << endl;
        cout << setfill('=') << setw(67) << "=" << endl;

}

bool isValidTime(int hr, int min, int sec){
    return (0 <= hr && hr < 24) && (0 <= min && min < 60) && (0 <= sec && sec< 60);
}
void partBno1(){
    const char delim = ':';
    string hr_s, min_s, sec_s;  
    int hr, min, sec;

    while (true)
    {
        cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
        
        getline(cin, hr_s, delim);
        getline(cin, min_s, delim);
        getline(cin, sec_s);
        
        hr = stoi(hr_s);
        min = stoi(min_s);
        sec = stoi(sec_s);

        if (isValidTime(hr,min,sec))
        {
            int elapsed = (hr*360) + (min*60) + sec;
            cout << "Elapsed Time: " + elapsed;
            break;
        }
        else{
            cout << "Invalit input!";
        }
    }
}

void partBno2(){
    srand(time(0));

    int lower, upper, secretNumber, userGuess;

    cout << "Guess Number game start!";
    cout << "Enter lower bound: ";
    cin >> lower;
    cout << "Enter upper bound: ";
    cin >> upper;

    secretNumber = lower + rand() % (upper - lower +1);

    cout << "Guess the number between" << lower << "and" << upper;

    do
    {
        cout << "Your answer: ";

        if(userGuess < secretNumber){
            cout << "Too low!";
        }else if (userGuess > secretNumber)
        {
            cout << "Too upper!";
        }else{
            cout << "You won";
        }
        
    }while (userGuess != secretNumber);

}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    
    return daysInMonth[month - 1];
}

void partC1(){
    int year, month, choice;
    string months[] = {"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};

    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month (1-12): ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter a number between 1 and 12.\n";
            continue;
        }

        int days = getDaysInMonth(month, year);

        int d = 1, y = year, m = month;
        if (m < 3) {
            m += 12;
            y--;
        }
        int k = y % 100;
        int j = y / 100;
        int startDay = (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;
        startDay = (startDay + 6) % 7;

        // Print calendar
        cout << "\n---------------------------------------------------\n";
        cout << "              " << months[month - 1] << " - " << year << endl;
        cout << "---------------------------------------------------\n";
        cout << "Sun   Mon   Tue   Wed   Thu   Fri   Sat\n";
        cout << "---------------------------------------------------\n";

        for (int i = 0; i < startDay; i++) {
            cout << "      ";
        }

        for (int day = 1, i = startDay; day <= days; i++) {
            cout << setw(3) << day << "   ";
            if ((i + 1) % 7 == 0) cout << endl;
            day++;
        }

        cout << "\n---------------------------------------------------\n";

        cout << "Do you want to see another month? (1 = Yes, 0 = No): ";
        cin >> choice;

    } while (choice == 1);

    cout << "Goodbye!\n";
}

void partC2(){
    int year, month, days;
    string months[] = {"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};
    
    cout << "Enter Your Month (1-12): ";
    cin >> month;
    cout << "Enter Year: ";
    cin >> year;

    if (month < 1 || month > 12) {
        cout << "Invalid month! Please enter a number between 1 and 12.\n";
        return;
    }

    days = getDaysInMonth(month, year);

    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    char weather;

    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> weather;

        weather = toupper(weather);

        if (weather == 'H') {
            hotDays++;
        } else if (weather == 'R') {
            rainyDays++;
        } else if (weather == 'C') {
            cloudyDays++;
        } else {
            cout << "Invalid input. Please enter H, R, or C.\n";
            i--;
        }
    }

    cout << "\nWeather summary for " << months[month - 1] << " " << year << ":\n";
    cout << "Number of hot days: " << hotDays << endl;
    cout << "Number of rainy days: " << rainyDays << endl;
    cout << "Number of cloudy days: " << cloudyDays << endl;
}

void partC4(){
    int rows;
    cout << "Enter the number of rows (for diamond (triangle) dimension): ";
    cin >> rows;

    int height = 2 * rows - 1; 

    for (int i = 1; i <= height; i++) {
        int stars = (i <= rows) ? (2 * i - 1) : (2 * (height - i + 1) - 1);
        int spaces = (i <= rows) ? (rows - i) : (i - rows);

        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }
}

void partC5(){
    int count = 0;

    for (int i = 2; i <= 50; i += 2) {
        cout << setw(4) << left << i;
        count++;

        if (count % 5 == 0) {
            cout << endl;
        }
    }
}

void partC6(){
    double quiz, midterm, finalExam, average;
    
    cout << "Enter 3 scores (quiz, mid-term, and final) separated by space: ";
    cin >> quiz >> midterm >> finalExam;
    
    average = (quiz + midterm + finalExam) / 3.0;

    char grade;
    if (average >= 90)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'F';

    cout << "Grade " << grade << endl;
}

void partC7(){
    double widthA, heightA, widthB, heightB;
    
    cout << "Rectangle A:\n";
    cout << "Width = ";
    cin >> widthA;
    cout << "Height = ";
    cin >> heightA;

    cout << "\nRectangle B:\n";
    cout << "Width = ";
    cin >> widthB;
    cout << "Height = ";
    cin >> heightB;

    double areaA = widthA * heightA;
    double areaB = widthB * heightB;

    cout << "\n";
    if (areaA > areaB)
        cout << "Area in rectangle A is bigger than rectangle B.\n";
    else if (areaA < areaB)
        cout << "Area in rectangle B is bigger than rectangle A.\n";
    else
        cout << "Both rectangles have the same area.\n";
}

void partC8(){
    double mealPrice, tipPercentage;
    const double GST = 0.06;

    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealPrice;
    cout << "Enter the tip percentage: ";
    cin >> tipPercentage;

    double costAfterGST = mealPrice + (mealPrice * GST);
    double tipAmount = (mealPrice * (tipPercentage / 100));
    double totalCost = costAfterGST + tipAmount;

    cout << fixed << setprecision(2);
    cout << "\nThe total cost of the meal BEFORE GST and tipping: RM" << mealPrice << endl;
    cout << "The total cost of the meal AFTER GST: RM" << costAfterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: RM" << totalCost << endl;

}

void classActivity4(){
    string myString;
    int upper;

    cout << "Enter a String: ";
    getline(cin, myString);
    
    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i] >= 'A' && myString[i] <= 'Z')
            upper++;
    }

    cout << "Number of Uppercase Letter: " << upper;
}

int main(){
    // partBno1();
    // partBno2();
    // classActivity4();
    // partA1();
    // partC4();
    // partC1();
    // partC5();
    // partC6();
    // partC7();
    // partC8();
    partC2();
    
}


