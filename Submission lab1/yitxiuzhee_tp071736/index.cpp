#include <iostream>
 using namespace std;
 
// const int NUMBER = 12;
 
// int main()
// {
//     int firstNum;
//     int secondNum;
   
//     firstNum = 18;
//     cout << "Line 9: firstNum = " << firstNum
//          << endl;
   
//     cout << "Line 10: Enter an integer: ";
//     cin >> secondNum;
//     cout << endl;
   
//     cout << "Line 13: secondNum = " << secondNum
//          << endl;
   
//     firstNum = firstNum + NUMBER + 2 * secondNum;
   
//     cout << "Line 15: The new value of "
//          << "firstNum = " << firstNum << endl;
   
//     return 0;
// }


//Activity 1
// using namespace std;
 
// int main()
// {
//     int feet, inches;
    
//     cout << "Please enter your feet = "; 
//     cin >> feet;
    
//     cout << "Please enter your inches = "; 
//     cin >> inches;

//     int totalInches = (feet * 12) + inches;  
//     float totalCentimeters = totalInches * 2.54;  

//     cout << "Your equivalent length in centimeters is " << totalCentimeters << " cm" << endl;

//     return 0; 
// }

    


// Class Activity 2:

//Question 1
// #include <iostream>
// int main(){
//     int y;
//     int x;

//     if (y > 0) {
//     x = 1; 
// }
// std::cout << "x = " << x << '\n';

// return 0;
// }



// // //Question 2
// #include <iostream>
// int main(){
//     int score;
//     std::cout << "Enter your score: ";
//     std::cin >> score;  
//     if (score >= 80 && score <= 90) {
//         score += 5; 
//     } 
//     std::cout<<"final score: "<<score <<'\n';
// }

//Question 3
// using namespace std;
// #include<iostream>
// int main(){
//     int x;
//     cout<<"Enter the number: ";
//     cin >> x;
//     if (x > 0 && x %2 !=0){

//         std::cout<<"True"<<'\n';
//     }
    
//     return 0;
// }

//Question 4
// #include <iostream>
// using namespace std; 

// int main() {
//     int x, y;  

//     cout << "Enter numbers for x and y: ";
//     cin >> x >> y;  

//     if (x > 0 && y > 0) {  
//         cout << "true" << '\n';
//     } else {
//         cout << "false" <<'\n';  
//     }

//     return 0;
// }

//Question 5
// #include <iostream>
// using namespace std; 

// int main() {
//     int speed, ticket;

//     std::cout << "Enter speed: ";
//     std::cin >> speed;

//     ticket = (speed > 55) ? 1 : 0;

//     std::cout << "Ticket: " << ticket << '\n';

//     return 0;
// }


//Part C
//Question 1

// #include <iostream>
// using namespace std;

// void printCalendar(int days, int startDay) {
//     cout << "Sun Mon Tue Wed Thu Fri Sat\n";
//     int day = 1;

//     for (int i = 0; i < startDay; i++) {
//         cout << "    ";
//     }

//     for (int i = startDay; day <= days; i++) {
//         cout << (day < 10 ? "  " : " ") << day << " ";
//         if ((i + 1) % 7 == 0) cout << endl;
//         day++;
//     }
//     cout << endl;
// }

// int main() {
//     int days, startDay;
//     cout << "Enter number of days in the month: ";
//     cin >> days;
//     cout << "Enter the starting day of the week (0 for Sun, 1 for Mon... 6 for Sat): ";
//     cin >> startDay;
    
//     printCalendar(days, startDay);
//     return 0;
// }

//Question 2
// int main(){
//     int days,hot=0,Rain=0,Cloudy=0;
//     char weather;

//     cout<<"Enter the day of this month: ";
//     cin>>days;

//     for (int i = 0; i < days; i++)
//     {
//         cout<<"Enter the weather for the day: "<<"(H=hot,R=rain,C=cloudy,E to end)";
//         cin>>weather;

//         switch (weather)
//         {
//         case 'H' : hot++;break;
//         case 'C' : Cloudy++;break;
//         case 'R' : Rain++;break;
//         case 'E' : 
//             cout<<"\nExit programm..";
//             return 0;
//         default:
//             cout << "\nInvalid input, try again!"; i--;
//             break;
//         }
//     }

//     cout<<"\nHot days: " << hot << "\nRain days: " << Rain <<"\nCloudy days: "<<Cloudy;
//     return 0;


    
// }

//Question 3

// int main(){
//     double exchangeRate,amout,convertAmount;
//     int number;

//     cout<<"Enter the exchange rate form dollars to RMB: ";
//     cin>>exchangeRate;

//     cout<<"Enter 0 to convert dollars to RMB and 1 vica versa: ";
//     cin>> number;

//     if (number==0)
//     {
//         cout << "Enter the dollar amout: ";
//         cin >> amout;
//         convertAmount=exchangeRate*amout;
//         cout<<amout<<"is"<<convertAmount<<"yuan";

//     }else if(number==1)
//     {
//         cout <<"Enter your Yuan amout: ";
//         cin >> amout;
//         convertAmount=exchangeRate*amout;
//         cout << amout << "is"<<convertAmount<<"dollar";
//     } else{
//         cout<<"invelid please enter again!!";
//     }
    

// }

//Question 4 
// int main(){
//     int n;
//     cout<<"Enter number of row(for diomand (triangele) dimension):  ";
//     cin>>n;

//     for (int i = 1; i < n ; i+=2)
//     {
//         cout<<string((n-i)/2,' ') << string(i,'*')<<endl;
//     }
//     for (int i=n-2; i > 0; i-=3)
//     {
//         cout<<string((n-i)/3,' ') << string(i,'*')<<endl;
//     }
    
// }

//Question 5

// int main(){
//     for (int i = 1; i <=50; i+=2)
//     {
//         cout<<i<<" ";
//         if(i% 10 ==0)cout << endl;
//     }
    
// }

//Question 6
// int main() {
//     float quiz, midTerm, finalExam, avg;
    
//     cout << "Enter quiz score: ";
//     cin >> quiz;
//     cout << "Enter mid-term score: ";
//     cin >> midTerm;
//     cout << "Enter final exam score: ";
//     cin >> finalExam;
    
//     avg = (quiz + midTerm + finalExam) / 3;

//     cout << "Grade: " << (avg >= 90 ? "A" : avg >= 70 ? "B" : avg >= 50 ? "C" : "F") << endl;
//     return 0;
// }

//Question 7
// #include <iostream>
// using namespace std;

// int main() {
//     float w1, h1, w2, h2, area1, area2;

//     cout << "Enter width and height for rectangle A: ";
//     cin >> w1 >> h1;
//     cout << "Enter width and height for rectangle B: ";
//     cin >> w2 >> h2;

//     area1 = w1 * h1;
//     area2 = w2 * h2;

//     if (area1 > area2)
//         cout << "Rectangle A is larger.\n";
//     else if (area1 < area2)
//         cout << "Rectangle B is larger.\n";
//     else
//         cout << "Both rectangles are the same size.\n";

//     return 0;
// }

//Question 8
#include <iostream>
using namespace std;

int main() {
    double mealCost, tipPercentage, totalBeforeGST, totalAfterGST, finalTotal;

    cout << "Enter meal cost: ";
    cin >> mealCost;
    cout << "Enter tip percentage: ";
    cin >> tipPercentage;

    totalAfterGST = mealCost * 1.06;  
    finalTotal = totalAfterGST * (1 + tipPercentage / 100); 

    cout << "Total cost BEFORE GST and tipping: " << mealCost << endl;
    cout << "Total cost AFTER GST: " << totalAfterGST << endl;
    cout << "Total cost AFTER GST and tipping: " << finalTotal << endl;

    return 0;
}



