#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

void calendarApplication() {
  int year, month;
  cout << "Enter calendar's year: ";
  cin >> year;
  cout << "Enter calendar's month: ";
  cin >> month;
  tm time_in = {};
  time_in.tm_year = year - 1900;
  time_in.tm_mon = month - 1;
  time_in.tm_mday = 1;
  mktime(&time_in);
  int start_day = time_in.tm_wday;
  int days_in_month =
      (month == 2)
          ? (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? 29 : 28)
          : (month == 4 || month == 6 || month == 9 || month == 11 ? 30 : 31);
  cout << "\nCalendar Title : " << month << " - " << year << "\n";
  cout << "--------------------------------------\n";
  cout << "Sunday   Monday   Tuesday  Wednesday  Thursday  Friday   Saturday\n";
  cout << "--------------------------------------\n";
  for (int i = 0; i < start_day; i++)
    cout << "         ";
  for (int day = 1; day <= days_in_month; day++) {
    cout << setw(5) << day << "   ";
    if ((start_day + day) % 7 == 0)
      cout << "\n";
  }
  cout << "\n--------------------------------------\n";
}

void weatherForecastCount() {
  int days, hot = 0, rainy = 0, cloudy = 0;
  string weather;
  cout << "Enter number of days: ";
  cin >> days;
  for (int i = 0; i < days; i++) {
    cout << "Day " << i + 1 << " weather (hot/rainy/cloudy): ";
    cin >> weather;
    if (weather == "hot")
      hot++;
    else if (weather == "rainy")
      rainy++;
    else if (weather == "cloudy")
      cloudy++;
  }
  cout << "Hot days: " << hot << ", Rainy days: " << rainy
       << ", Cloudy days: " << cloudy << endl;
}

void currencyConversion() {
  double rate, rmb;
  cout << "Enter conversion rate from RMB to USD: ";
  cin >> rate;
  cout << "Enter amount in RMB: ";
  cin >> rmb;
  cout << "Equivalent in USD: " << fixed << setprecision(2) << rmb * rate
       << endl;
}

void diamondPattern() {
  int n;
  cout << "Enter diamond dimension: ";
  cin >> n;
  for (int i = 1; i <= n; i += 2)
    cout << string((n - i) / 2, ' ') + string(i, '*') << endl;
  for (int i = n - 2; i >= 1; i -= 2)
    cout << string((n - i) / 2, ' ') + string(i, '*') << endl;
}

void printEvenNumbers() {
  for (int i = 2; i <= 50; i += 2)
    cout << i << (i % 10 == 0 ? "\n" : " ");
  cout << endl;
}

void gradeDetermination() {
  double quiz, mid, final;
  cout << "Enter quiz, mid-term, final scores: ";
  cin >> quiz >> mid >> final;
  double avg = (quiz + mid + final) / 3;
  cout << "Grade: "
       << (avg >= 90   ? 'A'
           : avg >= 70 ? 'B'
           : avg >= 50 ? 'C'
                       : 'F')
       << endl;
}

void rectangleAreaComparison() {
  double w1, h1, w2, h2;
  cout << "Rectangle A Width and Height: ";
  cin >> w1 >> h1;
  cout << "Rectangle B Width and Height: ";
  cin >> w2 >> h2;
  double a1 = w1 * h1, a2 = w2 * h2;
  cout << (a1 > a2   ? "Area in rectangle A is bigger."
           : a1 < a2 ? "Area in rectangle B is bigger."
                     : "Areas are equal.")
       << endl;
}

void gstCalculation() {
  double meal, tip;
  cout << "Enter meal cost and tip percentage: ";
  cin >> meal >> tip;
  double gst = meal * 0.06, tipAmt = meal * (tip / 100);
  cout << "Total BEFORE GST and tipping: " << fixed << setprecision(2) << meal
       << endl;
  cout << "Total AFTER GST: " << meal + gst << endl;
  cout << "Total AFTER GST and tipping: " << meal + gst + tipAmt << endl;
}

int main() {
  calendarApplication();
  weatherForecastCount();
  currencyConversion();
  diamondPattern();
  printEvenNumbers();
  gradeDetermination();
  rectangleAreaComparison();
  gstCalculation();
}
