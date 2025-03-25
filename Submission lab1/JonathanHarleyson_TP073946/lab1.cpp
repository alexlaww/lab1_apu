#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int dayNumber(int day, int month, int year)
{
 
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1,
                       4, 6, 2, 4 };
    year -= month < 3;
    return ( year + year/4 - year/100 +
             year/400 + t[month-1] + day) % 7;
}
 
/*
  A Function that returns the name of the month
  with a given month number
 
  Month Number     Name
  0                January
  1                February
  2                March
  3                April
  4                May
  5                June
  6                July
  7                August
  8                September
  9                October
  10               November
  11               December */
string getMonthName(int monthNumber)
{
    string months[] = {"January", "February", "March",
                       "April", "May", "June",
                       "July", "August", "September",
                       "October", "November", "December"
                      };
 
    return (months[monthNumber]);
}
 
/* A Function to return the number of days in
   a month
 
  Month Number     Name        Number of Days
  0                January     31
  1                February    28 (non-leap) / 29 (leap)
  2                March       31
  3                April       30
  4                May         31
  5                June        30
  6                July        31
  7                August      31
  8                September   30
  9                October     31
  10               November    30
  11               December    31
 
*/
int numberOfDays (int monthNumber, int year)
{
    // January
    if (monthNumber == 0) {
      return (31);

    }
 
    // February
    if (monthNumber == 1)
    {
        // If the year is leap then February has
        // 29 days
        if (year % 400 == 0 ||
                (year % 4 == 0 && year % 100 != 0))
            return (29);
        else
            return (28);
    }
 
    // March
    if (monthNumber == 2) {
      return (31);

    }
 
    // April
    if (monthNumber == 3) {
      return (30);

    }
 
    // May
    if (monthNumber == 4) {
      return (31);

    }
 
    // June
    if (monthNumber == 5) {
      return (30);

    }
 
    // July
    if (monthNumber == 6) {
      return (31);

    }
 
    // August
    if (monthNumber == 7) {
      return (31);

    }
 
    // September
    if (monthNumber == 8) {
      return (30);
    }
 
    // October
    if (monthNumber == 9) {
      return (31);
    }
 
    // November
    if (monthNumber == 10) {
      return (30);
    }
    // December
    if (monthNumber == 11) {
      return (31);
    }

    return 0;
}
 
// Function to print the calendar of the given year
void printCalendar(int year, int month)
{
    printf ("         Calendar - %d\n\n", year);
    int days;
 
    // Index of the day from 0 to 6
    int current = dayNumber (1, 1, year);
 
    int i = month-1;
    // i --> Iterate through all the months
    // j --> Iterate through all the days of the
    //       month - i
      days = numberOfDays (i, year);

      // Print the current month name
      printf("\n  ------------%s-------------\n",
              getMonthName (i).c_str());

      // Print the columns
      printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

      // Print appropriate spaces
      int k;
      for (k = 0; k < current; k++)
          printf("     ");

      for (int j = 1; j <= days; j++)
      {
          printf("%5d", j);

          if (++k > 6)
          {
              k = 0;
              printf("\n");
          }
      }

      if (k)
          printf("\n");

      current = k;
 
    return;
}

int main() {
  cout << "Student Name\t:Mien May\nStudent Gender\t:Female\nStudent Age\t:23\nStudent Home Address\t:Selangor\nE-waller Amount\t:RM 23.12\n\nStudent details as below:\n---------------------------------------------------------------------------\n|Name\t|Age\t|Gender\t|Address\t|E-wallet amount\t|\n-----------------------------------------------------------------------------------------------------\n|Mien May\t|23\t|Female\t|Selangor\t|RM23.12\t|\n--------------------------------------------------------------------" << endl;

  system("pause");

  cout << "-----------------------------------------------------------\n|Student Details as below:\t\t\t|\n-------------------------------------------\n|Name\t:\t\t\tTest|\n|Age\t:\t\t\t23|\nGender\t:\t\t\tFemale|\n|Address\t:\t\t\tSelangor|\n|E-wallet\t:\t\t\tRM 25.77|\n---------------------------------------------------------------------" << endl;

  cout << "Enter 3 scores:";

  int a, b, c;

  cin >> a >> b >> c;

  float avg = a + b + c / 3;

  if (avg >= 90) {
    cout << "Grade A" << endl;
  } else if (avg >= 70) {
    cout << "Grade B" << endl;
  } else if (avg >= 50) {
    cout << "Grade C" << endl;
  } else {
    cout << "Grade F" << endl;
  }

  system("pause");

  string s;

  cout << "Please enter your elapsed (in HH:MM:SS format) = ";
  cin >> s;

  stringstream deltaTime(s);

  string colon;
  int h, m, sec;

  if (!(deltaTime >> h >> colon >> m && colon == ":" && deltaTime >> colon >> s && colon == ":" && (0 <= h <= 60) && (0 <= m <= 60)) && (0 <= sec <= 60)) {
    cout << "Invalid Time" << endl;
  } else {
    cout << "Elapsed Time in Seconds : " << h * 3600 + m * 60 + sec << endl;
  }


  int random = 4;

  cout << "Guess Number Between 1 to 33" << endl << "Your answer is: ";
  int ans222 = 0;
  cin >> ans222;

  if (ans222 == random) {
    cout << "Congratulations! you Won!"<< endl;
  } else {
    cout << "You Lost" << endl;
  }


  int y1, m1;
  cout << "Enter calender's year: ";
  cin >> y1;

  cout << "Enter calender's month: ";
  cin >> m1;

  while (true) {
    printCalendar(y1, m1);
    cout << endl << endl << "Do you want to see another month? 1= Yes, Others = No: ";
    int resp;
    cin >> resp;

    if (resp != 1) {
      break;
    }
  }

  int mnd;
  cout << "Enter Your Month (e.g. August 2019): ";
  cin >> mnd;

  char weather;
  int hot, rainy, cloudy = 0;
  for (int i = 0; i< 28; i++) {
    cout << "Day " << i << ": Enter H for Hot, R for Rainy, C for Cloudy, E to end: ";
    cin >> weather;

    if (weather == 'H') {
      hot++;
    }
    if (weather == 'R') {
      rainy++;
    }
    if (weather == 'C') {
      cloudy++;
    }
    if (weather == 'E') {
      break;
    }
  }

  cout << "Number of hot days this month: " << hot << endl << "Number of rainy days this month: " << rainy << endl << "Number of cloudy days this month: " << cloudy << endl;
  system("pause");

  int rate, rateresp, amm;
  cout << "Enter the exchange rate from dollars to RMB: ";
  cin >> rate;

  cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
  cin >> rateresp;

  if (rateresp == 1) {
    cout << "Enter the dollar amount: ";
    cin >> amm;
    cout << amm * rate;
  } else {
    cout << "Enter the RMB amount: ";
    cin >> amm;
    cout << amm / rate;
  }

  int dimensions;
  cout << "Enter number of rows (for diamonds (triangle dimension)) : ";
  cin >> dimensions;
  int n = dimensions;
  int space = n - 1; 

    // run loop (parent loop) 
    // till number of rows 
    for (int i = 0; i < n; i++) 
    { 
        // loop for initially space, 
        // before star printing 
        for (int j = 0;j < space; j++) 
            cout << " "; 

        // Print i+1 stars 
        for (int j = 0; j <= i; j++) 
            cout << "* "; 

        cout << endl; 
        space--; 
    } 

    // Repeat again in reverse order 
    space = 0; 

    // run loop (parent loop) 
    // till number of rows 
    for (int i = n; i > 0; i--) 
    { 
        // loop for initially space, 
        // before star printing 
        for (int j = 0; j < space; j++) 
            cout << " "; 

        // Print i stars 
        for (int j = 0;j < i;j++) 
            cout << "* ";

        cout << endl;
        space++; 
    } 

    for (int i=0; i <5; i++) {
      for (int j=2+10*i; j <10*(i+1); j+=2) {
        if (j % 2 == 0) {
          cout << j << "\t";
        }
      }
      cout << endl;
    }

    int awidth, aheight, bwidth, bheight;
    cout << "Rect A:" << endl;
    cout << "Width=";
    cin >> awidth;
    cout << "Height=";
    cin >> aheight;

    cout << "Rect B:" << endl;
    cout << "Width=";
    cin >> bwidth;
    cout << "Height=";
    cin >> bheight;

    if (awidth * aheight > bwidth * bheight) {
      cout << "Area in rectangle A is bigger than Rectangle B" << endl;
    } else {
      cout << "Area in rectangle B is bigger than Rectangle A" << endl;
    }

    int cost, tip;
    cout << "Cost of Meal: ";
    cin >> cost;
    cout << "Tip: ";
    cin >> tip;

    cout << "Cost Before GST + Tip: " << cost;
    cout << "Cost After GST: " << cost * 1.06;
    cout << "Cost After GST + Tip: " << cost * (1.06 + (tip/100));
}
