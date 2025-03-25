#include<iostream>
#include <string> 
#include <cctype>  

using namespace std;

//Exercise:
// const int NUMBER = 12;

// int main()
// {
//     int firstNum;
//     int secondNum;
    
//     firstNum = 18;
//     cout << "Line 9: firstnum = " << firstNum;
//     cout << endl;

//     cout << "Line 10: Enter an integer: ";
//     cin >> secondNum;
//     cout << endl;

//     cout << "Line 13: secondNum = " << secondNum << endl;

//     firstNum = firstNum + NUMBER + 2 * secondNum;

//     cout << "Line 15: The new value of " << "firstNum = " << firstNum << endl;
    
//     return 0;
// }

//Class Activity 1:
// int main()
// {
//     int feet, inches;
//     double centimeters;

//     cout << "Enter the length in feet: ";
//     cin >> feet;
//     cout << "Enter the length in inches: ";
//     cin >> inches;

//     int totalInches = (feet * 12) + inches;

//     centimeters =  totalInches * 2.54;

//     cout << "Length of feet in centimeters: " << centimeters << " cm" << endl;

//     return 0;
// }

//Class Activity 2: Q1
// int main()
// {
//     int x, y;

//     if(y > 0)
//     {
//         x = 1;
//     }
// }

//Class Activity 2: Q2
// int main()
// {
//     double score;

//     cout << ("Enter the score: ");
//     cin >> score;

//     if(score <= 90 && score >= 80)
//     {
//         score += 5;
//     }

//     cout << "Your score is: " << score;
// }

//Class Activity 2: Q3
// int main()
// {
//     int x;

//     cout << "Enter the number: ";
//     cin >> x;

//     if(x > 0 && x % 2 != 0)
//     {
//         cout << "The number is: " << x;
//     }

//     else
//     {
//         cout << "It is false!";
//     } 
// }

//Class Activity 2: Q4
// int main()
// {
//     int x, y;

//     cout << "Enter the value of x: ";
//     cin >> x;

//     cout << "Enter the value of y; ";
//     cin >> y;

//     if(x > 0 && y > 0)
//     {
//         cout << "The value of x: " << x << "\nThe value of y: " << y;
//     }

//     else
//     {
//         cout << "The value x or y is negative!";
//     }
// }

//Class Activity 2: Q5 - method 1
// int main()
// {
//     int ticket;
//     int speed;

//     cout << "Enter the speed: ";
//     cin >> speed;

//     if (speed > 55)
//     {
//         ticket = 1;
//         cout << ticket;
//     }

//     else
//     {
//         ticket = 0;
//         cout << ticket;
//     }   
// }

//Class Activity 2: Q5 - method 2
// int main()
// {

//     int x,y;
    
//     cout << "Enter value 1:";
//     cin >> x;
//     cout << "Enter value 2:";
//     cin >> y;
//     //if-statement 
//     // before "?", statement     after "?", if statement is true( : -> left) ,if statement is false (: -> right) 
//     cout << ( (x>0) && (y>0) ) ? "True\n" : "False" ;   
// }

//Class Activity 3(i): for loop
// int main() 
// {
//     for (int number2 = 100; number2 > 10; number2 = number2 - 5) 
//     {
//         cout << number2 << endl;
//     }

//     return 0;
// }

//Class Activity 3(i): do while loop
// int main() 
// {
//     int number3 = 100;

//     do 
//     {
//         cout << number3 << endl;
//         number3 = number3 - 5;
//     } 
//     while (number3 > 10);

//     return 0;
// }

//Class Activity 4:
// int main()
// {
//     string input;
//     int count = 0;

//     cout << "Enter a String: ";
//     getline(cin, input); 

//     for (int i = 0; i < input.length(); i++)
//     {
//         if (input[i] >= 'A' && input[i] <= 'Z')
//         {
//             count++;
//         }
//     }

//     cout << "The number of uppercase letters is " << count << endl;

//     return 0;
// }

//Class Activity 5:
bool isPrime(int number) 
{
    if (number < 2) return false;

    for (int i = 2; i * i <= number; i++) 
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

void printPrimes(int start, int end)
{
    cout << "\nPrime Numbers between " << start << " to " << end << "\n";
    cout << "======================================================================================================================================================\n";

    for (int i = start; i <= end; i++) 
    {
        if (isPrime(i)) 
        {
            cout << i << "\t";
        }
    }
    cout << "\n";

    cout << "======================================================================================================================================================\n";
}

int main()
{
    int startValue, endValue;

    cout << "Start value: ";
    cin >> startValue;

    cout << "End value: ";
    cin >> endValue;

    printPrimes(startValue, endValue);

    return 0;
}
