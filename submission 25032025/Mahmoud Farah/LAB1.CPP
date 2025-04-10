#include <iostream>
using namespace std;

#include <iomanip> 

int main() {

    // QUESTION1 2333

    // cout << "STUDENT Name: ";
    // string name;
    // getline(cin, name);  // Allows full name input

    // cout << "STUDENT Gender: ";
    // string gender;
    // cin >> gender;

    // cout << "STUDENT Age: ";
    // int age;
    // cin >> age;

    

    // cout << "STUDENT Home Address: ";
    // string address;
    // getline(cin, address);  // Allows full address input

    // cout << "STUDENT Amount: ";
    // double amount;
    // cin >> amount;

    // // Display entered details
    // cout << "-----------------------------------------------------------------\n";
    // cout << "| " << setw(12) << name
    //      << "| " << setw(4) << age
    //      << "| " << setw(8) << gender
    //      << "| " << setw(10) << address
    //      << "| RM" << fixed << setprecision(2) << setw(12) << amount
    //      << " |\n";
    // cout << "=================================================================\n";


    //QUESTION 1 prt b

    // int hh, mm, ss;
    // char colon1, colon2;

    // cout << "Please enter your elapsed time (in HH:MM:SS format): ";
    // cin >> hh >> colon1 >> mm >> colon2 >> ss;

    // // Validate input format
    // if (cin.fail() || colon1 != ':' || colon2 != ':' || hh < 0 || mm < 0 || mm >= 60 || ss < 0 || ss >= 60) {
    //     cout << "Invalid input!" << endl;
    //     return 1; // Exit with error
    // }

    // int totalSeconds = convertToSeconds(hh, mm, ss);
    // cout << "Elapsed time in seconds = " << totalSeconds << " seconds" << endl;


    



    //question 2 prt b

//    int number;
//    int guess=100;

//    do{
//    cout<<"enter number between 1 to 100";

//    cin>>number;

    

//     if(guess==number){
//         cout<<"congratulaton u won";
//     }
   
//    }
//    while (guess != number);

   


   // question 1 prt c



   // question 2 prt c

   // int totalDays;
   // char weather;
   // int hotDays = 0, rainyDays = 0, cloudyDays = 0;

   // cout << "Enter Your Month  : ";
   // string month;
   // getline(cin, month);

   // cout << "Enter the number of days in the month: ";
   // cin >> totalDays;

   // for (int day = 1; day <= totalDays; day++) {
   //     cout << "Day " << day << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end): ";
   //     cin >> weather;

   //     if (weather == 'E' || weather == 'e') {
   //         break;
   //     }

   //     if (weather == 'H' || weather == 'h') {
   //         hotDays++;
   //     } else if (weather == 'R' || weather == 'r') {
   //         rainyDays++;
   //     } else if (weather == 'C' || weather == 'c') {
   //         cloudyDays++;
   //     } else {
   //         cout << "Invalid input! Try again.\n";
   //         day--; // Repeat the same day if input is invalid
   //     }
   // }

   // cout << "\nNumber of hot days this month: " << hotDays << endl;
   // cout << "Number of rainy days this month: " << rainyDays << endl;
   // cout << "Number of cloudy days this month: " << cloudyDays << endl;

 
   // question 3 prt c


//     int amount;
//     int rate;
//     int choice;
//    cout<<"enter exchange rate from dollar to rmb: "; 
//    cin>>rate;

//    cout<<"enter 0 to change from usd to rmb or 1 for vice verse: ";

//    cin>>choice;

   

//    if(choice== 0){
//     cout<<"enter dollar amount: ";
//     cin>>amount;

//     int total=amount * rate;

//     cout<<total;
//     cout<<amount<<"in dollar is "<<total;
//    }
//    else if (choice== 1)
//    {
//     cout<<"enter rmb amount: ";
//     cin>>amount;

//     int total=amount * rate;

//     cout<<amount<<"in rmb is "<<total;
//    }


   // question 4 prt c

   //  int i=2;
   // while(i<=50){
   //  cout<<i<<" ";

   //  if ((i / 2) % 5 == 0) {
   //      cout << endl;
   //  }
   //  i=i+2;
   // }
   // question 5 prt c



   
   // question 6 prt c
   // double quiz, midterm, finalExam, avg;
   //  cout << "Enter 3 scores (quiz, mid-term, and final) separated by space: ";
   //  cin >> quiz >> midterm >> finalExam;
    

   //  avg = (quiz + midterm + finalExam) / 3;
    

   //  if (avg >= 90)
   //      cout << "Grade A";
   //  else if (avg >= 70)
   //      cout << "Grade B";
   //  else if (avg >= 50)
   //      cout << "Grade C";
   //  else
   //      cout << "Grade F";

   //question 7

   // int widthA, heightA, widthB, heightB;
   // cout << "Rectangle A:\nWidth = ";
   // cin >> widthA;
   // cout << "Height = ";
   // cin >> heightA;

   // cout << "\nRectangle B:\nWidth = ";
   // cin >> widthB;
   // cout << "Height = ";
   // cin >> heightB;

   // int areaA = widthA * heightA;
   // int areaB = widthB * heightB;

   // if (areaA > areaB)
   //     cout << "Area in rectangle A is bigger than rectangle B.\n";
   // else if (areaB > areaA)
   //     cout << "Area in rectangle B is bigger than rectangle A.\n";
   // else
   //     cout << "Both rectangles have the same area.\n";


   //question 8

   // double mealCost, tipPercent, gst = 0.06;
   //  cout << "Enter the cost of the meal (before GST and tipping): ";
   //  cin >> mealCost;
   //  cout << "Enter tip percentage: ";
   //  cin >> tipPercent;

   //  double afterGST = mealCost + (mealCost * gst);
   //  double afterTip = afterGST + (afterGST * tipPercent / 100);

   //  cout << "The total cost of the meal BEFORE GST and tipping: $" << mealCost << endl;
   //  cout << "The total cost of the meal AFTER GST: $" << afterGST << endl;
   //  cout << "The total cost of the meal AFTER GST and tipping: $" << afterTip << endl;
    

}





//function for prt2 q1
// int convertToSeconds(int hh, int mm, int ss) {
//     return (hh * 3600) + (mm * 60) + ss;
// }

