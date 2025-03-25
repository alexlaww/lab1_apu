# include <iostream>
# include <sstream>

using namespace std;


int H = 0, R = 0, C = 0;
bool isLeapYear(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int days(){
    cout << "Enter your month (E.g. August 2019): ";
    string Input;
    getline(cin,Input);

    stringstream ss(Input);
    string month;
    int year;

    ss >> month >> year;
    
    if (!ss.fail() && ss.eof()) {
        if (month == "January") return 31;
        else if (month == "February") return isLeapYear(year) ? 29 : 28;
        else if (month == "March") return 31;
        else if (month == "April") return 30;
        else if (month == "May") return 31;
        else if (month == "June") return 30;
        else if (month == "July") return 31;
        else if (month == "August") return 31;
        else if (month == "September") return 30;
        else if (month == "October") return 31;
        else if (month == "November") return 30;
        else if (month == "December") return 31;
        else return -1;  // Invalid month
    }
}

void weather(){
    int day = days();
    char record;
    
    for(int i = 1; i <= day; i++){
        cout << "Day " << i << ": " << "Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy ('E' to end) : ";
        cin >> record;

        if (record == 'E') {
            break;
        }else if (record == 'H'){
            H++;
        }else if (record == 'R'){
            R++;
        }else if (record == 'C'){
            C++;
        }

    }

    
}

int main(){
    weather();
    cout << "Number of hot days this month: " << H << endl;
    cout << "Number of rainy days this month: " << R << endl;
    cout << "Number of cloudy days this month: " << C << endl;
    
    return 0;
}