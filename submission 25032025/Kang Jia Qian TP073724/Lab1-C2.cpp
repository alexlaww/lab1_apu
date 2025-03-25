# include <iostream>
# include <string>
# include <sstream>
# include <cctype>
# include <list>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

int getMonthInNum(string month) {
    string Months[12] = {"January", "February", "March", "April", "May", "June", "July",
                         "August", "September", "October", "November", "December"};
    for (int i=0; i<12; i++){
        if (month == Months[i]){
            return i + 1;
        }
    }
}


int main(){
    string input, month, weathers[] = {};
    char w;
    int year;
    int countH = 0, countR = 0, countC = 0;

    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, input); 
    stringstream ss(input);

    ss >> month >> year;

    int days = getDaysInMonth(year, getMonthInNum(month));

    for (int i = 0; i < days; i++){
        cout << "Day " << i + 1 << " : " << "Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
        cin >> w;
        if (toupper(w) == 'E'){
            break;
        }
        if (toupper(w) == 'H'){
            countH ++;
        }
        else if (toupper(w) == 'R'){
            countR ++;
        }
        else if (toupper(w) == 'C'){
            countC ++;
        }
    }

    cout << "Number of hot days this month: " << countH << endl;
    cout << "Number of rainy days this month: " << countR << endl;
    cout << "Number of cloudy days this month: " << countC << endl;
    cout << "Press any key to continue ... ";
    
    
}