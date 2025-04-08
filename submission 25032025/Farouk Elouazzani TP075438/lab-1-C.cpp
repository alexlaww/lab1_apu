#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


void q1(){

    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    tm timeStruct = {0, 0, 0, 1, month - 1, year - 1900};
    mktime(&timeStruct);

    int daysInMonth;
    if (month == 2) {
        daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    cout << "\n  Su Mo Tu We Th Fr Sa\n";
    int dayOfWeek = timeStruct.tm_wday;
    int currentDay = 1;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (i == 0 && j < dayOfWeek) {
                cout << "   ";
            } else if (currentDay > daysInMonth) {
                break;
            } else {
                cout << setw(3) << currentDay++;
            }
        }
        cout << endl;
    }
    return ;
}

void q2(){

    int hot = 0, rainy = 0, cloudy = 0;
    char weather;
    for (int day = 1; day <= 30; day++) {
        cout << "Day " << day << ": Enter weather (H/R/C): ";
        cin >> weather;
        switch (toupper(weather)) {
            case 'H': hot++; break;
            case 'R': rainy++; break;
            case 'C': cloudy++; break;
        }
    }
    cout << "\nHot days: " << hot << "\nRainy days: " << rainy << "\nCloudy days: " << cloudy;
    return;

}

void q3(){
    // Step 1: Input the exchange rate
    double exchangeRate;
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;

    // Step 2: Input the conversion direction
    int choice;
    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> choice;

    // Step 3: Input the amount to be converted
    double amount;
    if (choice == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
    } else if (choice == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
    } else {
        cout << "Invalid choice. Please enter 0 or 1." << endl;
        return ; // Exit the program if invalid choice
    }

    // Step 4: Perform the conversion
    double convertedAmount;
    if (choice == 0) {
        convertedAmount = amount * exchangeRate;
        cout << fixed << setprecision(2);
        cout << "$" << amount << " is " << convertedAmount << " yuan" << endl;
    } else if (choice == 1) {
        convertedAmount = amount / exchangeRate;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << convertedAmount << endl;
    }

}

void q4(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n - i; j > 0; j--) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
}

void q5(){
   
    for (int i = 2; i <= 50; i += 2) {
        cout << i << " ";
    }
}

void q6(){

    float quiz, mid, final, avg;
    cout << "Enter quiz score: ";
    cin >> quiz;
    cout << "Enter mid-term score: ";
    cin >> mid;
    cout << "Enter final score: ";
    cin >> final;
    avg = (quiz + mid + final) / 3;
    cout << "Average: " << avg << "%\nGrade: ";
    if (avg >= 90) cout << "A";
    else if (avg >= 70) cout << "B";
    else if (avg >= 50) cout << "C";
    else cout << "F";

}

void q7(){
    float w1, h1, w2, h2;
    cout << "Rectangle A:\nWidth: ";
    cin >> w1;
    cout << "Height: ";
    cin >> h1;
    cout << "Rectangle B:\nWidth: ";
    cin >> w2;
    cout << "Height: ";
    cin >> h2;
    float area1 = w1 * h1, area2 = w2 * h2;
    if (area1 > area2) cout << "Area in Rectangle A is bigger.";
    else if (area2 > area1) cout << "Area in Rectangle B is bigger.";
    else cout << "Areas are equal.";

}

void q8(){
    float cost, tipPercent;
    cout << "Enter meal cost: $";
    cin >> cost;
    cout << "Enter tip percentage: ";
    cin >> tipPercent;
    float gst = cost * 0.06;
    float totalBeforeTip = cost + gst;
    float tip = totalBeforeTip * (tipPercent / 100);
    cout << fixed << setprecision(2);
    cout << "\nTotal before GST and tip: $" << cost << endl;
    cout << "Total after GST: $" << totalBeforeTip << endl;
    cout << "Total after GST and tip: $" << totalBeforeTip + tip << endl;
}



int main() {
    q3();
    return 0;
}
