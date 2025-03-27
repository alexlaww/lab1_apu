// LAB1 PART A Q1
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string name, gender,address;
//     int age;
//     double balance;

//         cout<<"please insert your name:";
//         getline(cin,name);
        
//         cout<<"please insert your age:";
//         cin>>age;

//         cout<<"please insert your gender:";
//         cin>>gender;
//         cin.ignore();

//         cout<<"please insert your address:";
//         getline(cin,address);

//         cout<<"please insert your E-wallet-balance:";
//         cin>>balance;

//         cout<<"Student details as below:\n";
//         cout<<"=======================================================================================\n";
//         cout<<"|       Name      |   Age   | Gender | Address |             E-wallet amount          |\n";
//         cout<<"=======================================================================================\n";
//         cout<<"|"<<name<<"\t|"<<age<<"\t|" <<gender<< "\t|" <<address<< "\t|"<<balance<<"\t|\n";
//         cout<<"=======================================================================================";
    
//     return 0;
// }

// LAB1 PART A Q2
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string name, gender,address;
//     int age;
//     double balance;

//         cout<<"please insert your name:";
//         getline(cin,name);
        
//         cout<<"please insert your age:";
//         cin>>age;

//         cout<<"please insert your gender:";
//         cin>>gender;
//         cin.ignore();

//         cout<<"please insert your address:";
//         getline(cin,address);

//         cout<<"please insert your E-wallet-balance:";
//         cin>>balance;

//         cout<<"=======================================================================================\n";
//         cout<<"Student details as below:\n";
//         cout<<"=======================================================================================\n";
//         cout<<"Name:\t\t\t"<<name<<"|\n";
//         cout<<"Age:\t"<<age<<"|\n";
//         cout<<"Gender:\t"<<gender<<"|\n";
//         cout<<"Address:\t"<<address<<"|\n";
//         cout<<"E-wallet Balance:\t"<<balance<<"|\n";
    
//     return 0;
// }

// Lab1 PART B Q1
// #include<iostream>
// #include<sstream>
// #include<iomanip>

// using namespace std;

// Function to valid the time range
// bool ValidTime(int hours, int minutes, int seconds){
//     return (hours >= 0 && hours < 24) && (minutes >= 0 && minutes < 60) && (seconds >= 0 && seconds < 60);
// }

// int main(){
//     string timeInput;
//     int hours, minutes, seconds;
//     char colon1, colon2;
//     cout<< "Please enter your elapsed time (in HH:MM:SS format) = ";
//     cin >> timeInput;
//     stringstream ss(timeInput);
//     if (ss >> hours >> colon1 >> minutes >> colon2 >> seconds && colon1 == ':' && colon2 == ':') {
//         if (ValidTime(hours, minutes, seconds)) {
//             int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
//             cout << "Elapsed time is: " << totalSeconds << " seconds."<<endl;
//         } else {
//             cout << "Invalid time entered. Please enter a valid time in HH:MM:SS format." << endl;
//         }
//     } else {
//         cout << "Invalid format. Please enter time in HH:MM:SS format." << endl;
//     }
    
//     return 0;
// }

// int main(){
//     srand(time(0)); 
//     int secretNumber = rand() % 100 + 1; 
//     int guess;
//     int f_num = 1, l_num = 100;
//     int attempts = 0;
    
//     cout << "Guess Number Game Started Now!" << endl;
//     for(int i = 0; i < 70; i++){
//         cout << "-";
//     }
//     cout << "\n";
//     cout << "Guess Number between " << f_num << " to " << l_num << endl;
//     do {
//         cout << "Your answer: ";
//         cin >> guess;
//         attempts++;
//         if (guess > secretNumber) {
//             cout << "Too high! Try again." << endl;
//             l_num = guess - 1;
//         } else if (guess < secretNumber) {
//             cout << "Too low! Try again." << endl;
//             f_num = guess + 1;
//         } else {
//             cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
//             break;
//         }
//         cout << "Guess Number between " << f_num << " to " << l_num << endl;
//     } while (guess != secretNumber);
    
//     return 0;
// }


// Lab1 PART C Q1
// #include<iostream>
// #include<iomanip>

// using namespace std;

// bool isLeapYear(int year){
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }

// int getDaysInMonth(int month, int year) {
//     int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     if (month == 2 && isLeapYear(year)) {
//         return 29;
//     }
//     return daysInMonth[month - 1];
// }

// void displayCalendar(int month, int year) {
//     string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
//     cout << "\n"<< "\tCalendar Title : " << months[month - 1] << "-" << year << endl;
//     cout << "------------------------------------------------------------------------" << endl;
//     string weekDays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//     for (const string& day : weekDays) {
//         cout << setw(10) << day;
//     }
//     cout << "\n";
//     cout << "------------------------------------------------------------------------" << endl;
    
//     int days = getDaysInMonth(month, year);
    
//     int totalDays = 0;
//     for (int y = 1900; y < year; y++) {
//         totalDays += isLeapYear(y) ? 366 : 365;
//     }
//     for (int m = 1; m < month; m++) {
//         totalDays += getDaysInMonth(m, year);
//     }
//     int startDay = (totalDays + 1) % 7;

//     for (int i = 0; i < startDay; i++) {
//         cout << setw(10) << " ";
//     }
    
//     for (int day = 1; day <= days; day++) {
//         cout << setw(10) << day;
//         if ((startDay + day) % 7 == 0 || day == days) {
//             cout << endl;
//         }
//     }
//     cout << "------------------------------------------------------------------------" << endl;
// }

// int main(){
//     int month , year;
//     cout << "Enter calendar's year:";
//     cin >> year;
//     cout << "Enter calendar's month: ";
//     cin >> month;

//     if(month < 1 || month > 12 || year < 1900){
//         cout << "Invapid Input." << endl;
//     }else{
//         displayCalendar(month, year);
//     }
//     return 0;
// }


// Lab1 PART C Q2
// #include<iostream>
// #include<iomanip>

// using namespace std;

// int main(){
//     int daysInMonth, hotDays = 0, rainyDays = 0, cloudyDays = 0;
//     string weather;

//     cout << "Enter Your Month (e.g. Augusst 2019): ";
//     cin >> daysInMonth;

//     for (int day = 1; day <= daysInMonth; day++) {
//         cout << "Enter weather forecast for day " << day << " (hot/rainy/cloudy): ";
//         cin >> weather;
        
//         if (weather == "hot") {
//             hotDays++;
//         } else if (weather == "rainy") {
//             rainyDays++;
//         } else if (weather == "cloudy") {
//             cloudyDays++;
//         } else {
//             cout << "Invalid input. Please enter hot, rainy, or cloudy." << endl;
//             day--; // Repeat the input for the current day
//         }
//     }
    
//     cout << "\nWeather Summary for the Month:" << endl;
//     cout << "Hot days: " << hotDays << endl;
//     cout << "Rainy days: " << rainyDays << endl;
//     cout << "Cloudy days: " << cloudyDays << endl;
    

//     return 0;
// }
