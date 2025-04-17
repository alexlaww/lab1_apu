#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to check if a year is a leap year
bool isLeap(int year) {
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeap(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Function to get the name of the month
string getMonthName(int month) {
    switch (month) {
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
        default: return "Invalid Month";
    }
}

// Function to calculate the day of the week for the 1st of the month
// (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
// This is a simplified calculation based on days since 1/1/1 (assuming it was a Monday=1)
// Note: Real-world calendar calculations can be more complex due to historical changes.
int getStartDay(int month, int year) {
    int totalDays = 0;
    // Days from year 1 up to the year before the target year
    for (int y = 1; y < year; ++y) {
        totalDays += isLeap(y) ? 366 : 365;
    }
    // Days from months in the target year up to the month before the target month
    for (int m = 1; m < month; ++m) {
        totalDays += daysInMonth(m, year);
    }
    // Add 1 because we want the day for the 1st of the month
    // Assuming Jan 1, 1 was Monday (day 1). Adjust if using a different reference.
    // (totalDays % 7) gives day of week for Dec 31st of previous month (0=Sun, 6=Sat if Jan 1 was Mon)
    // So, ((totalDays + 1) % 7) should give the day of the week for Jan 1st.
    // Let's refine: Reference: Jan 1, 1900 was a Monday.
    // Simpler: Calculate days from a known reference. Let's use standard Zeller's or similar logic if needed.
    // Or, keep it simple for the lab: Use a basic calculation, acknowledging potential inaccuracies for very old dates.
    
    // --- Simplified Zeller's Congruence variation (for Gregorian calendar) ---
    // Adjust month and year for Zeller's formula: Jan/Feb are months 13/14 of previous year
    int m = month;
    int y = year;
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100; // Year of the century
    int j = y / 100; // Century
    int day = 1; // We need the day for the 1st of the month

    int h = (day + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    // Convert Zeller's result (0=Sat, 1=Sun, ..., 6=Fri) to desired (0=Sun, ..., 6=Sat)
    // Zeller: Sat(0) Sun(1) Mon(2) Tue(3) Wed(4) Thu(5) Fri(6)
    // Target: Sun(0) Mon(1) Tue(2) Wed(3) Thu(4) Fri(5) Sat(6)
    // Mapping: (h + 6) % 7 seems right?
    // Zeller 0->6, 1->0, 2->1, 3->2, 4->3, 5->4, 6->5
    return (h + 6) % 7; 
}


int main() {
    int year, month, choice;

    do {
        // Get input
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month (1-12): ";
        cin >> month;

        // Validate month
        if (month < 1 || month > 12 || year <= 0) {
            cout << "Invalid year or month input." << endl;
            continue; // Ask again
        }

        // Get calendar data
        string monthName = getMonthName(month);
        int numDays = daysInMonth(month, year);
        int startDay = getStartDay(month, year); // 0=Sun, 1=Mon, ..., 6=Sat

        // Print header
        cout << endl;
        cout << "    Calendar Title : " << monthName << " " << year << endl;
        cout << "====================================" << endl;
        cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
        cout << "====================================" << endl;


        // Print leading spaces
        for (int i = 0; i < startDay; ++i) {
            cout << "    "; // 4 spaces per day slot
        }

        // Print days
        for (int day = 1; day <= numDays; ++day) {
            cout << setw(4) << day;
            // Check if we need to wrap to the next line (after Saturday)
            if ((startDay + day) % 7 == 0) {
                cout << endl;
            }
        }
        cout << endl; // Newline after the last day if it wasn't a Saturday
        cout << "====================================" << endl;

        // Ask to continue
        cout << "Do you want to see other month? (1 = Yes, others = No): ";
        cin >> choice;
        cout << endl;

    } while (choice == 1);

    cout << "Exiting Calendar Application." << endl;

    return 0;
}