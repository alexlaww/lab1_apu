#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
//Part A: Qs 1
string name, gender, address;
int age;
float amount;



int main()
{
    cout << "Student Name            :";
    getline(cin, name);
    cout << "Student Gender          :";
    cin >> gender;
    cout << "Student Age             :";
    cin >> age;
    cout << "Student Home Address    :";
    cin >> address;
    cout << "E-wallet Amount         :RM ";
    cin >> amount;

    cout << "\nStudent details as below:\n";
    cout << "===========================================================================\n";
    cout << "|Name          | Age    | Gender     | Address        | E-wallet amount    |\n";
    cout << "===========================================================================\n";
    cout << "|"+name+"      |"+to_string(age)+"      |"+gender+"      |"+address+"        | RM";
    cout << fixed << setprecision(2) << amount << "            |\n";
    cout << "============================================================================";
    return 0;
}
*/

/*
// Part A: Qs 2
int main () {

    cout << "Student Name            :";
    getline(cin, name);
    cout << "Student Gender          :";
    cin >> gender;
    cout << "Student Age             :";
    cin >> age;

    // Clear the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Student Home Address    :";
    getline(cin,address);
    cout << "E-wallet Amount         :RM ";
    cin >> amount;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Press any key to continue . . .\n";
    cin.get();

    cout << "===================================" << endl;
    cout << "| Student Details as below:       |" << endl;
    cout << "===================================" << endl;
    cout << "| Name    : " << setw(20) << right << name << " |" << endl;
    cout << "| Age     : " << setw(20) << right << age << " |" << endl;
    cout << "| Gender  : " << setw(20) << right << gender << " |" << endl;
    cout << "| Address : " << setw(20) << right << address << " |" << endl;
    cout << "| E-Wallet : RM" << setw(17) << right << fixed << setprecision(2) << amount << " |" << endl;
    cout << "===================================" << endl;
}
*/

/*
// Part B : Qs 1
bool isValidTime(int hh, int mm, int ss){
    return (hh>= 0&& hh < 24) && (mm >= 0 && mm < 60) && (ss>=0 && ss<60);
}

int main () {

    string input;
    int hh,mm,ss;
    char colon1, colon2;

    while(true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format} = ";
        cin >> input;

    // Use stringstream to parse the input
    stringstream ssInput(input);
    if (ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':')
        if (isValidTime (hh, mm, ss)) {
            break;
        }; // valid input exit loop
        cout << "Invalid input! Please enter a valid time in HH:MM:SS format.\n";
    }
    
    // Convert time to seconds 
    int totalSeconds = (hh * 3600) + (mm * 60) + ss;
    cout << "Elapsed time in seconds = " << totalSeconds << endl;
    
}
    */

// Part B: Qs 2
/*
int main(){
    srand(time(0));

    int lower, upper, secretNumber, userGuess;

    cout << " Guess Number Game Started Now !" << endl;
    cout << "---------------------------------------" << endl;

    // Set a range for the random number
    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    // Generate a random number in the given range
    secretNumber = lower + rand() % (upper-lower + 1);

    cout << "Guess a number between " << lower << "and" << upper << endl;

    //loop until the correct guess is made
    do {
        cout << " Your answer: ";
        cin >> userGuess;

        if(userGuess < secretNumber) {
            cout << "Too low! Try again.\n";
        }
        else if(userGuess > secretNumber){
            cout << "Too high! Try again.\n";
        }
        else {
            cout << "Congratulations! You won!" << endl;
        }
    }while (userGuess != secretNumber);

    return 0;
}
    */

// Part C: Qs 1
/*
int main() {
    int year, month;
    string months[] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    cout << "Enter calendar's year: ";
    cin >> year;

    cout << "Enter calendar's month: ";
    cin >> month;

    cout << "\nCalendar Title : " << months[month-1] << " - " << year << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "   Sunday     Monday     Tuesday    Wednesday   Thursday    Friday     Saturday" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;

    cout << setw(10) << " " << setw(10) << 1 << setw(10) << 2 << setw(10) << 3 
         << setw(10) << 4 << setw(10) << 5 << setw(10) << 6 << endl;
    cout << setw(10) << 7 << setw(10) << 8 << setw(10) << 9 << setw(10) << 10 
         << setw(10) << 11 << setw(10) << 12 << setw(10) << 13 << endl;
    cout << setw(10) << 14 << setw(10) << 15 << setw(10) << 16 << setw(10) << 17 
         << setw(10) << 18 << setw(10) << 19 << setw(10) << 20 << endl;
    cout << setw(10) << 21 << setw(10) << 22 << setw(10) << 23 << setw(10) << 24 
         << setw(10) << 25 << setw(10) << 26 << setw(10) << 27 << endl;
    cout << setw(10) << 28 << setw(10) << 29 << setw(10) << 30 << setw(10) << 31 << endl;

    cout << "------------------------------------------------------------------------------------" << endl;

    return 0;
}
*/

// Part C: Qs 2

// int days, hotDays = 0, rainyDays = 0, cloudyDays = 0;
// char weather;
// string month;

// int main(){
//     cout << "Enter Your Month (e.g. August 2019): ";
//     getline(cin, month);

//     cout << " Enter number of days in the month: " ;
//     cin >> days;

//     for (int i = 1; i <= days; i++){
//         cout << "Day" << i <<": Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy:";
//         cin >> weather;

//     weather = toupper(weather);

//     switch(weather) {
//         case 'H':
//             hotDays++;
//             break;
//         case 'R':
//             rainyDays++;
//         case 'C':
//             cloudyDays++;
//             break;
//         default:
//             cout << "Invalid input! Please enter 'H, 'R', or 'C'.\n";
//             i--; // Repeat the same day input
//             break;
//         }
//     }


//     cout << "\nWeather Summary for " << month << ":\n";
//     cout << "Number of hot days: " << hotDays << endl;
//     cout << "Number of rainy days: " << rainyDays << endl;
//     cout << "Number of cloudy days: " << cloudyDays << endl;

//     return 0;
// }

// Part C: Qs 3

// int main() {
//     double rate, amount, converted;
//     int choice;

//     cout << "Enter the exchange rate from dollars to RMB: ";
//     cin >> rate;

//     cout << "Enter 0 to convert dollars to RMB and 1 to convert RMB to dollars: ";
//     cin >> choice;

//     if (choice == 0) {
//         cout << "Enter the dollar amount: ";
//         cin >> amount;
//         converted = amount * rate;
//         cout << "$" << amount << " is " << converted << " yuan" << endl;
//     } 
//     else if (choice == 1) {
//         cout << "Enter the RMB amount: ";
//         cin >> amount;
//         converted = amount / rate;
//         cout << amount << " yuan is $" << converted << endl;
//     } 
//     else {
//         cout << "Invalid choice!" << endl;
//     }

//     return 0;
// }

//Part C: qs 4
// int main() {
//     int n;
//     cout << "Enter number of rows (for diamond dimension): ";
//     cin >> n;

//     for (int i = 1; i <= n; i += 2) {
//         for (int j = n; j > i; j -= 2) 
//             cout << " ";
//         for (int j = 0; j < i; j++) 
//             cout << "*";
//         cout << endl;
//     }

//     for (int i = n - 2; i >= 1; i -= 2) {
//         for (int j = n; j > i; j -= 2) 
//             cout << " ";
//         for (int j = 0; j < i; j++) 
//             cout << "*";
//         cout << endl;
//     }

//     return 0;
// }

// Part C: qs 5
// int main() {
//     int count = 0; 

//     for (int i = 2; i <= 50; i += 2) {
//         cout << i << "\t";
//         count++;

//         if (count % 5 == 0) 
//             cout << endl;
//     }

//     return 0;
// }


//Part C: qs 6
// int main() {
//     float quiz, midterm, finalExam;
    
//     cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
//     cin >> quiz >> midterm >> finalExam;

//     float avg = (quiz + midterm + finalExam) / 3;

//     int category = (avg >= 90) ? 1 :
//                     (avg >= 70) ? 2 :
//                     (avg >= 50) ? 3 : 4;

//     switch (category) {
//         case 1: 
//             cout << "Grade A" << endl; 
//             break;
//         case 2: 
//             cout << "Grade B" << endl; 
//             break;
//         case 3:
//             cout << "Grade C" << endl; 
//             break;
//         case 4: 
//             cout << "Grade F" << endl;
//             break;
//         default: 
//             cout << "Invalid input" << endl; 
//             break;
//     }
// }

//Part C: qs 7
// int main() {
//     float widthA, heightA, widthB, heightB;

//     cout << "Rectangle A:" << endl;
//     cout << "Width = ";
//     cin >> widthA; 
//     cout << "Height = ";
//     cin >> heightA;

//     cout << "\nRectangle B:" << endl;
//     cout << "Width = ";
//     cin >> widthB; 
//     cout << "Height = ";
//     cin >> heightB;

//     float areaA = widthA * heightA;
//     float areaB = widthB * heightB;

//     if (areaA > areaB)
//         cout << "\nArea in Rectangle A is bigger than Rectangle B." << endl;
//     else if (areaB > areaA)
//         cout << "\nArea in Rectangle B is bigger than Rectangle A." << endl;
//     else
//         cout << "\nBoth rectangles have the same area." << endl;
// }

// Part C: qs 8
int main() {
    double mealCost, tip;
    double gstRate = 0.06;

    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealCost;
    cout << "Enter the tip amount: ";
    cin >> tip;

    double gstAmount = mealCost * gstRate;
    double totalAfterGST = mealCost + gstAmount;
    double total = totalAfterGST + tip;

    cout << fixed << setprecision(2);
    cout << "\nThe total cost of the meal BEFORE GST and tipping: RM " << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: RM " << totalAfterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: RM " << total << endl;

    return 0;
}