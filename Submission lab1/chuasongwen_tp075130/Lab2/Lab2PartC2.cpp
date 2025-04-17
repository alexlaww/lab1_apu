#include <iostream>
#include <sstream>
using namespace std;

string ConvertLetterString();
int FindDaysInMonth();
void weatherReport();
void displayReport();

string month, Input;
int year, days, H=0, R=0, C=0;

int main(){
    cout << "Enter your month (E.g. August 2019): ";
    getline(cin, Input);

    stringstream ss(Input);
    ss >> month >> year;

    month = ConvertLetterString();
    days = FindDaysInMonth();
    weatherReport();
    displayReport();

    return 0;
}

string ConvertLetterString(){
    string result = "";
    result += toupper(month[0]);  
    for (int i = 1; i < month.length(); i++) {
        result += tolower(month[i]);
    }
    
    return result;
}

bool isLeapYear(){
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int FindDaysInMonth(){
    string lowercaseMonth = month;
    for(int i = 0; i < lowercaseMonth.length(); i++) {
        lowercaseMonth[i] = tolower(lowercaseMonth[i]);
    }
    
    if (lowercaseMonth == "february") {
        return (isLeapYear()) ? 29 : 28;
    } else if (lowercaseMonth == "april" || lowercaseMonth == "june" || 
               lowercaseMonth == "september" || lowercaseMonth == "november") {
        return 30;
    } else if (lowercaseMonth == "january" || lowercaseMonth == "march" || 
               lowercaseMonth == "may" || lowercaseMonth == "july" || 
               lowercaseMonth == "august" || lowercaseMonth == "october" || 
               lowercaseMonth == "december") {
        return 31;
    } else {
        return 0; 
    }
}

void weatherReport(){
    char choice;
    
    H = 0;
    R = 0;
    C = 0;
    
    for(int i = 1; i <= days; i++){
        cout << "Day " << i << ": Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> choice;  
        
        choice = toupper(choice);
        
        if(choice == 'H'){
            H++;
        } else if(choice == 'R'){
            R++;
        } else if(choice == 'C'){
            C++;
        } else {
            cout << "Invalid input! Please enter H, R, or C." << endl;
            i--;  
        }
    }
}

void displayReport(){
    int count = 0;
    cout << "\nWeather Report Results:" << endl;
    cout << "Number of hot days: " << H << endl;
    cout << "Number of rainy days: " << R << endl;
    cout << "Number of cloudy days: " << C << endl << endl;
    
    cout << "Hot: ";
    while(count < H){
        cout << "* ";
        count++;
    }
    cout << endl;

    count = 0;
    cout << "Rainy: ";
    while(count < R){
        cout << "* ";
        count++;
    }
    cout << endl;

    count = 0;
    cout << "Cloudy: ";
    while(count < C){
        cout << "* ";
        count++;
    }
    cout << endl;
}