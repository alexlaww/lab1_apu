#include <iostream>

using namespace std;

//C1
int getStartDay(int year, int month) {
    int day = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    for (int i = 1; i < month; i++)
        day += daysInMonth[i];

    if ((month > 2) && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        day += 1;

    return (day + 1) % 7;
}

int getDaysInMonth(int year, int month) {
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        return 29;
    return daysInMonth[month];
}

void printCalendar(int year, int month) {
    string monthName[] = { "", "January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December" };

    cout << "\nCalendar Title : " << monthName[month] << " - " << year << "\n";
    cout << "---------------------------------------------\n";
    cout << " Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday\n";

    int startDay = getStartDay(year, month);
    int daysInMonth = getDaysInMonth(year, month);

    for (int i = 0; i < startDay; i++)
        cout << "       ";

    for (int day = 1; day <= daysInMonth; day++) {
        cout << "   " << day << "   ";
        if ((startDay + day) % 7 == 0) cout << endl;
    }

    cout << "\n---------------------------------------------\n";
}

int main()
{
    //C1 !!
    int year, month;
    cout << "Enter calendar's year: ";
    cin >> year;
    cout << "Enter calendar's month: ";
    cin >> month;

    printCalendar(year, month);

    //C2
    int hot = 0, rainy = 0, cloudy = 0;
    char weather;

    for (int i = 1; i <= 28; i++) {
        cout << "Day " << i << ": Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> weather;

        if (weather == 'H' || weather == 'h') hot++;
        else if (weather == 'R' || weather == 'r') rainy++;
        else if (weather == 'C' || weather == 'c') cloudy++;
    }

    cout << "\nNumber of hot days: " << hot << endl;
    cout << "Number of rainy days: " << rainy << endl;
    cout << "Number of cloudy days: " << cloudy << endl;

    //C3
    float rate, amount;
    int choice;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rate;
    cout << "Enter 1 to convert RMB to dollars: ";
    cin >> choice;

    if (choice == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        cout << "$" << amount << " is " << amount * rate << " yuan\n";
    } else {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        cout << amount << " yuan is $" << amount / rate << endl;
    }

    //C4 !!
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) cout << " "; // to align to middle
        for (int j = 0; j < 2 * i - 1; j++) cout << "*";
        cout << endl;
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = n - i; j > 0; j--) cout << " ";
        for (int j = 0; j < 2 * i - 1; j++) cout << "*";
        cout << endl;
    }

    //C5
    for (int i = 2; i <= 50; i += 2) {
        cout << i << " ";
        if (i % 10 == 0) cout << endl;
    }

    //C6
    float quiz, midterm, finalExam;
    cout << "Enter 3 scores (quiz, midterm, final): ";
    cin >> quiz >> midterm >> finalExam; //can do them together, either newline or space

    float avg = (quiz + midterm + finalExam) / 3;

    if (avg >= 90) cout << "Grade A";
    else if (avg >= 70) cout << "Grade B";
    else if (avg >= 50) cout << "Grade C";
    else cout << "Grade F";

    //C7
    int w1, h1, w2, h2;
    cout << "\nEnter width and height of rectangle A: ";
    cin >> w1 >> h1;
    cout << "Enter width and height of rectangle B: ";
    cin >> w2 >> h2;

    int area1 = w1 * h1, area2 = w2 * h2;

    if (area1 > area2) cout << "Rectangle A is bigger.\n";
    else if (area2 > area1) cout << "Rectangle B is bigger.\n";
    else cout << "Both rectangles are equal.\n";

    //C8
    float mealCost, tipPercent, gst, total;

    cout << "Enter the cost of the meal: ";
    cin >> mealCost;
    cout << "Enter tip percentage: ";
    cin >> tipPercent;

    gst = mealCost * 0.06;
    total = mealCost + gst + (mealCost * tipPercent / 100);

    cout << "Total cost before GST and tipping: $" << mealCost << endl;
    cout << "Total cost after GST: $" << mealCost + gst << endl;
    cout << "Total cost after GST and tipping: $" << total << endl;
}
