#include <iostream>
#include <string>
using namespace std;

int year, month;

// Function to get the day number (0=Sunday, 1=Monday, ..., 6=Saturday)
int dayNumber(int day, int month, int year)
{
	static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	year -= month < 3;
	return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

// Function to return the month name
string getMonthName(int monthNumber)
{
	string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	return months[monthNumber - 1];  
}

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

// Function to return number of days in a given month
int numberOfDays(int monthNumber, int year)
{
	switch (monthNumber) {
        case 1: return 31;
        case 2: return isLeapYear(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return -1;  
    }
}

// Function to print the calendar
void printCalendar()
{
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the month: ";
	cin >> month;
	cout << endl;
	
	string getMonth = getMonthName(month);
	cout << string(10, ' ') << "Calendar for " << getMonth << " " << year << endl;
	cout << string(40, '-') << endl;
	cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
	cout << string(40, '-') << endl;

	int days = numberOfDays(month, year);  
	int current = dayNumber(1, month, year);

	// Print appropriate spaces before the first day
	int k;
	for (k = 0; k < current; k++)  
		printf("     ");  

	// Print all days of the month
	for (int j = 1; j <= days; j++) 
	{
		printf("%5d", j);
		if (++k > 6) // Move to next row after Saturday
		{
			k = 0;
			printf("\n");
		}
	}

	if (k) 
		printf("\n");  
		cout << string(40, '-') << endl;

    cout<< "Do you want to see other months? 1 = Yes, others/No = 0"<<endl;
	int choice;
	cin >> choice;
	if (choice == 1){
		printCalendar();
	}
}

// Driver Program
int main()
{
	printCalendar();
	
	return 0;
}
