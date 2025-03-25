#include<iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
using namespace std;


//Part C 
//Q1

// bool isLeapYear(int year){
//     return(year % 4 ==0 && year % 100 != 0)||(year % 400 == 0);

// }

// int getDaysinMonth(int year, int month){
//     if(month = 2){
//         return isLeapYear(year)? 29:28;
//     }

//     if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
//         return 31;
//     }
    
//     return 30;
// }

// int getFirstDayOfMonth(int year, int month){
//     struct tm timestruct ={};
//     timestruct.tm_year = year - 1900;
//     timestruct.tm_mon = month - 1;
//     timestruct.tm_mday = 1;    
//     mktime(&timestruct); 
//     return timestruct.tm_wday;


// }

// void displayCalendar(int year, int month) {
//     const string months[] = {"January", "February", "March", "April", "May", "June",
//                              "July", "August", "September", "October", "November", "December"};
//     int daysInMonth = getDaysinMonth(year, month);
//     int firstDay = getFirstDayOfMonth(year, month);

//     cout << "\nCalendar Title: " << months[month - 1] << " - " << year << endl;
//     cout << "-----------------------------------------" << endl;
//     cout << "  Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday\n";
//     cout << "-----------------------------------------\n";

  
//     for (int i = 0; i < firstDay; ++i) {
//         cout << "        ";
//     }

  
//     for (int day = 1; day <= daysInMonth; ++day) {
//         cout << setw(8) << day;
//         if ((day + firstDay) % 7 == 0) { // New line after Saturday
//             cout << endl;
//         }
//     }
//     cout << "\n-----------------------------------------\n";
// }

// int main() {
//     int year, month;
//     char choice;
//     do {
//         cout << "Enter calendar's year: ";
//         cin >> year;
//         cout << "Enter calendar's month (1-12): ";
//         cin >> month;

//         if (month < 1 || month > 12) {
//             cout << "Invalid month. Please enter a value between 1 and 12.\n";
//             continue;
//         }

//         displayCalendar(year, month);

//         cout << "Do you want to see another month? 1 = Yes, others = No: ";
//         cin >> choice;
//     } while (choice == '1');

//     cout << "Goodbye!\n";
//     return 0;
// }

// Q2
// int getDaysInMonth(string month,int year){
//     if(month == "January"||month == "March"||month == "May"||month == "July"||month == "August"||month == "October"||month == "December"){
//         return 31;
//     }else if(month == "April"||month == "June"||month == "September"||month == "November"){
//         return 30;
//     }else if (month == "February") {
//         // Check for leap year
//         if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//             return 29; // Leap year
//         } else {
//             return 28; // Non-leap year
//         }
//     }else{
//         return 0;
//     }
// }
// int main(){
//     cout << "Enter Your Month (e.g August 2019): ";
//     string input;
//     getline(cin,input);
    
//     stringstream ss(input);
//     string month;
//     string str_year;
//     ss >> month >> str_year;

//     int year = stoi(str_year);
//     int day = getDaysInMonth(month,year);

//     if (day == 0) {
//         cout << "Invalid month entered." << endl;
//         return 1;
//     }

//     int hot_day = 0, rainy_day = 0,cloudy_day = 0;

    
//     for(int i = 1; i <= day;i++){
//         cout << "Day " << i << ": Enter \"H\" for Hot,\"R\" for Rainy, \"C\" for Cloudy,(\"E\" to end):  ";
//         char forecast;
//         cin >> forecast;
//         forecast = toupper(forecast);

//         if(forecast == 'C'){
//             cloudy_day +=1;
            

//         }else if(forecast == 'H'){
//             hot_day +=1;
            
//         }else if(forecast == 'R'){
//             rainy_day +=1;
            
//         }else if(forecast == 'E'){
//             cout << "Exiting program early." << endl;
//             cout << "Number of hot days of this month: "<< hot_day << endl;
//             cout << "Number of rainy days of this month: "<< rainy_day << endl;
//             cout << "Number of cloudy days of this month: "<< cloudy_day << endl;
//             cout << "Press any key to continue: ";
//             return 0;
//         }else{
//             cout << "Invalid input. Please enter 'H', 'R', 'C', or 'E'." << endl;
//         }
//     }
//     cout << "\nNumber of hot days this month: " << hot_day << endl;
//     cout << "Number of rainy days this month: " << rainy_day << endl;
//     cout << "Number of cloudy days this month: " << cloudy_day << endl;
//     cout << "Press any key to continue . . .";
//     cin.ignore(); // Clear any leftover input
//     cin.get();    // Wait for any key press
//     return 0;
    
//     }

//Q3
// int main(){
    
//     cout << "Enter the exchange rate from dollars to RMB: ";
//     double rate;
//     cin >> rate;
//     cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
//     int input;
//     cin >> input;
//     if (input == 0){
//         cout << "Enter the dollar amount: ";
//         double dollar;
//         cin >> dollar;
//         double amount = rate * dollar;
//         cout << "$" << dollar << " is " << amount << " yuan";

//     }else if(input == 1){
//         cout << "Enter the  RMB amount: ";
//         double RMB;
//         cin >> RMB;
//         double amount = rate * RMB;
//         cout << RMB << " is " <<"$" << amount ;
//     }else{
//         cout << "Invalid input. Please type 0 or 1!";
//     }
//     return 0;
    

// }

//Q4

// int main() {
//     int rows;
//     cout << "Enter number of rows (for diamond (triangle) dimension): ";
//     cin >> rows;

//     for(int i = 1;i <= rows; i++){
//         for(int j = 1;j <=rows -i; j++){
//             cout << " ";
//         }
//         for(int j = 1;j <= 2*i-1 ;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i = rows -1; i >= 1; i--){
//         for(int j =1; j<=rows - i;j++ ){
//             cout << " ";
//         }
//         for(int j =1;j<= 2*i-1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//    return 0;
// }

//Q5
// int main(){
//     cout << "Even numbers between 1 and 50 are:" << endl;
//     for(int i = 1; i <= 50; i++){
//         if (i % 2 == 0){
//             cout << i << " ";
//             if(i == 10){
//                 cout << endl;
//             }else if(i == 20){
//                 cout << endl;
//             }else if(i == 30){
//                 cout << endl;
//             }else if(i == 40){
//                 cout << endl;
//             }else if(i == 50){
//                 cout << endl;
//             }
            
//         }
//     }
//     return 0;

// }

//Q6
// char grade(int average){
//     if (average >= 90){
//         return 'A';
//     }else if (average >= 70 && average < 90){
//         return 'B';
//     }else if (average >= 50 && average < 70){
//         return 'C';
//     }else if (average < 50){
//         return 'F';
//     }

// }
// int main(){
//     cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
//     string scores;
//     getline(cin,scores);
//     stringstream ss(scores);
//     string strquiz, strmid_term,strfinal;
//     ss >> strquiz >> strmid_term >>strfinal;
//     int quiz = stoi(strquiz);
//     int mid_term = stoi(strmid_term);
//     int final = stoi(strfinal);
//     int averageScores = (quiz + mid_term + final)/3;
//     cout << "Grade " << grade(averageScores) << endl;
//     cout << "Press any key to continue . . .";
//     cin.ignore();
//     cin.get();
//     return 0;

// }
    

//Q7
// string compareArea(int widthA, int heightA,int widthB, int heightB){
//     int areaA = widthA * heightA;
//     int areaB = widthB * heightB;
//     if(areaA > areaB){
//         return "Area in rectangle A is bigger than rectangle B.";
//     }else{
//         return "Area in rectangle B is bigger than rectangle A.";
//     }

// }
// int main(){
//     cout << "Rectangle A: "<< endl;
//     cout << "Width = ";
//     int widthA;
//     cin >> widthA;
//     cout << "Height = ";
//     int heightA;
//     cin >> heightA;
//     cout << "Rectangle B: "<< endl;
//     cout << "Width = ";
//     int widthB;
//     cin >> widthB;
//     cout << "Height = ";
//     int heightB;
//     cin >> heightB;
//     cout << compareArea(widthA,heightA,widthB,heightB);
//     return 0;


// }

//Q8
int main(){
    cout << "The total cost of the meal BEFORE GST and tipping: ";
    double cost;
    cin >> cost;
    double costAfGst = cost * 1.06;
    cout << "The total cost of the meal AFTER GST: " << costAfGst << endl;
    cout << "Enter the tip in percentage: ";
    double tip;
    cin >> tip;
    double tipAmount = (tip/100) * costAfGst;

    cout << "The total cost of the meal AFTER GST and tipping : "<< costAfGst + tipAmount;

}
    


