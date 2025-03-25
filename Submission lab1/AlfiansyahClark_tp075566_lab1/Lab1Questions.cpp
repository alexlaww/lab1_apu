#include <iostream>
using namespace std;
#include <limits>
#include <cstdlib> 
#include <ctime>   
#include <iomanip>

/*
int main(){

    //Question 1
    
    string name, gender, address;
    int age;
    double amount;
    cout << "\nStudent Name: ";
    cin >> name;
    cout << "\nGender: ";
    cin >> gender;
    cout << "\nStudent Age: ";
    cin >> age;
    cout << "\nStudent Home Address ";
    cin >> address;
    cout << "\nE-wallet amount: ";
    cin >> amount;

    cout << "===================================================================\n";
    cout << "Name\t\t| Age | Gender | Address\t| E-wallet amount |\n";
    cout << "===================================================================\n";
    cout << name << "\t\t| " << age << "  | " << gender << "    | " << address << "\t| " << amount << "\t\t|\n";
    cout << "===================================================================";
    
    return 0;
}

//Question 2
    string name, gender, address;
    int age;
    double amount;
    cout << "\nStudent Name: ";
    cin >> name;
    cout << "\nGender: ";
    cin >> gender;
    cout << "\nStudent Age: ";
    cin >> age;
    cout << "\nStudent Home Address ";
    cin >> address;
    cout << "\nE-wallet amount: ";
    cin >> amount;

    cout<<"|-----------------------------------------------------------------|"<<endl;
    cout<<"|Student Details as below:                                        |"<<endl;
    cout<<"|================================================================\n";
    cout<<"|Name    |                           "<<name<<"\t\t\t|"<<endl;
    cout<<"|Age     |                           "<<age<<"\t\t\t\t|"<<endl;
    cout<<"|Gender  |                           "<<gender<<"\t\t\t|"<<endl;
    cout<<"|Address |                           "<<address<<"\t\t\t|"<<endl;
    cout<<"|E-Wallet| RM                        "<<amount<<"\t\t\t\t|"<<endl;
    cout<<"|===============================================================\n";

    return 0;
}
  

    //Part B
    //Question 1
    int hours, minutes, seconds;
    char colon1, colon2;
    bool flag = true;

    while (flag) {
        cout << "Enter your elapsed time in HH:MM:SS format: ";
        cin >> hours >> colon1 >> minutes >> colon2 >> seconds;

        // Check if the input is valid
        if (cin.fail() || colon1 != ':' || colon2 != ':' ||
            hours < 0 || hours > 23 ||
            minutes < 0 || minutes > 59 ||
            seconds < 0 || seconds > 59) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Chatgpt helped with clearing the inputs here
            cout << "Invalid input! " << endl;
        } else {
            // Calculate elapsed seconds
            int elapsedSeconds = hours * 3600 + minutes * 60 + seconds;
            cout << "Elapsed time is: " << elapsedSeconds << " Seconds" << endl;
            flag = false; // Exit the loop
        }
    }

    return 0;
}
    

    //Question 2 
    srand(time(0)); 

    int limit1 = rand() % 100 + 1;
    int limit2 = rand() % 100 + 1;
    int randomNumber;
    int lowerLimit, upperLimit;

    // Determine the range - This part Logic was helped with AI
    if (limit1 > limit2) {
        lowerLimit = limit2;
        upperLimit = limit1;
    } else {
        lowerLimit = limit1;
        upperLimit = limit2;
    }

    // Generate random number within the determined range
    randomNumber = lowerLimit + rand() % (upperLimit - lowerLimit + 1);

    cout << "Guess the number: Between " << lowerLimit << " and " << upperLimit << endl;

    int userGuess;

    while (true) {
        cin >> userGuess;

        if (userGuess < lowerLimit || userGuess > upperLimit) {
            cout << "Out of range! Please enter a number between " << lowerLimit << " and " << upperLimit << ": ";
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again: ";
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Correct! You guessed the number!" << endl;
            break;
        }
    }
    return 0;
}
      
    

    //Part C

//Question 1
// Check if leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Number of days in a month
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29; 
    }
    return daysInMonth[month - 1];
}

// Function to determine the starting day - AI Helped with implementation
// Zeller’s Congruence
//https://www.geeksforgeeks.org/zellers-congruence-find-day-date/ - Learned from here

int getStartDay(int year, int month) {
    int day = 1;
    int y = year;
    int m = month;
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100;
    int j = y / 100;
    int startDay = (day + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    return (startDay + 6) % 7; 
}

// Function to display the calendar
void displayCalendar(int year, int month) {
    string monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    cout << "\n    " << monthNames[month - 1] << " " << year << "\n";
    cout << "Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";
    
    int days = getDaysInMonth(month, year);
    int startDay = getStartDay(year, month);
    
    for (int i = 0; i < startDay; i++) {
        cout << "     "; 
    }
    
    for (int day = 1; day <= days; day++) {
        cout << setw(4) << day << " ";
        if ((startDay + day) % 7 == 0) {
            cout << "\n";
        }
    }
    cout << "\n";
}

int main() {
    int year, month, choice;
    do {
        cout << "\nEnter year: ";
        cin >> year;
        cout << "Enter month (1-12): ";
        cin >> month;
        
        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter a number between 1 and 12.\n";
            continue;
        }
        
        displayCalendar(year, month);
        
        cout << "\nPress 1 to view another month or 0 to exit: ";
        cin >> choice;
    } while (choice == 1);
    
    cout << "PEACE OUT" << endl;

    return 0;
}



//Question 2
int main(){

    string month;
    int year, daysInMonth;
    char weather;
    int hotdays =0, rainydays=0, cloudydays=0;

    cout << " Please Enter your month (e.g. August 2019): ";
    cin >> month >>year;

    //Days in month
    if (month == "April" || month == "June" || month == "September" || month == "November") {
        daysInMonth = 30;
    } else if (month == "February") {
        daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else {
        daysInMonth = 31;
    }

    for(int day=0; day<=daysInMonth; day++){
        cout << "Day "<< day <<" :Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end): ";
        cin >> weather;

        //Since I dont want uppercase or lower case to matter
        weather = toupper(weather);

        if (weather == 'E') {
            break; // Exit input early if user chooses
        } else if (weather == 'H') {
            hotdays++;
        } else if (weather == 'R') {
            rainydays++;
        } else if (weather == 'C') {
            cloudydays++;
        } else {
            cout << "Invalid input! Please enter H, R, or C." << endl;
            day--; // Repeat this day's input
        }
    }
    
    // Display the weather summary
    cout << "\nWeather summary for " << month << " " << year << ":" << endl;
    cout << "Number of Hot Days this month: " << hotdays << endl;
    cout << "Number of Rainy Days this month: " << rainydays << endl;
    cout << "Number of Cloudy days: " << cloudydays << endl;

    return 0;

}   



//Question 3

int main(){
    float exchangerate, amount, total;
    int conversion;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >>exchangerate;

    cout << "\nEnter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >>conversion;

     if(conversion == 0){
        cout <<"\nEnter the dollar amount: ";
        cin >> amount;
        total = amount * exchangerate;
        cout <<"$"<<amount<<" is "<<total<<" yuan";
    }else if(conversion == 1){
        cout <<"\nEnter the RMB amount: ";
        cin >> amount;
        total = amount/exchangerate;
        cout <<amount<<" yuan is $"<<total;
    }else{
        cout<<"Invalid Input! Please enter 1 or 0.";
    }

    return 0;
}




//Question 4
int main() {
    int NumOfRows;
    cout << "Enter number of rows (for diamond dimension): ";
    cin >> NumOfRows;

    // Upper half of diamond
    //Logic is that row 1 will have 1 star
    //Row 2 will have 3 stars
    //Row 3 will have 5 stars
    //Pattern is found where you can do Row number * 2 -1 is number of stars
    //First for loop is for rows
    //Second is for spaces
    //Third is for the actual stars.
    for (int i = 1; i <= NumOfRows; i++) {
        for (int j = i; j < NumOfRows; j++) {
            cout << " "; 
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*"; 
        }
        cout << endl;
    }

    // Lower half of diamond
    for (int i = NumOfRows - 1; i >= 1; i--) {
        for (int j = NumOfRows; j > i; j--) {
            cout << " "; //
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*"; 
        }
        cout << endl;
    }
    
    return 0;
}


//Question 5
int main(){
    int Num=1;

    while(Num<=50){
        if(Num%2 ==0){
            cout << Num << " ";
        }
        Num++;
    }
}
    

//Question 6
int main(){
    int score1, score2, score3;
    float average;
    char grade;

    cout << "Enter 3 scores (Quiz, mid-term, final) values seperated by space: ";
    cin >> score1 >> score2 >> score3;

    average = (score1+score2+score3)/3;

    if(average>=90){
        grade = 'A';
    }else if(average>=70 && average<90 ){
        grade = 'B';
    }else if(average>=50 && average<70){
        grade = 'C';
    }else if(average<50 && average>=0){
        grade = 'F';
    }else{
        cout << "Invalid Results";
    }

    cout<<"Grade: "<<grade;


    return 0;
}
 */   

//Question 7

int main(){
    int width1, height1, width2, height2;
    int area1, area2;


     cout << "Rectangle A:" << endl;
     cout << "Width = ";
     cin >> width1;
     cout << "Height = ";
     cin >> height2;
 
     cout << "\nRectangle B:" << endl;
     cout << "Width = ";
     cin >> width2;
     cout << "Height = ";
     cin >> height2;
 
     area1 = width1 * height1;
     area2 = width2 * height2;
 
     cout << "\n";
     if (area1 > area2) {
         cout << "Area in rectangle A is bigger than rectangle B." << endl;
     } else if (area2 > area1) {
         cout << "Area in rectangle B is bigger than rectangle A." << endl;
     } else {
         cout << "Both rectangles have the same area." << endl;
     }
 
     return 0;
 }
 
/*
 //Question 8
int main(){
    float GST=1.06;
    float tip, initalcost, middlecost, finalcost;

    cout<<"Input the Cost of the meal: ";
    cin>>initalcost;

    cout<<"\nInput the tip: (E.G 10 for 10 percent): ";
    cin>>tip;

    tip = (tip/100)+1;

    middlecost = initalcost*GST;
    
    finalcost = middlecost*tip;

    cout<<"The Inital Cost of the meal is: "<<initalcost;
    cout<<"\nThe total cost of the meal after GST: "<<middlecost;
    cout<<"\nThe Final cost with GST and tipping is:"<<finalcost;

    return 0;
}
    */