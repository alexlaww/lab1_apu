/*#include<iostream>

using namespace std;

int main(){
    //int, double, float, string, boolean, char
    int num1=0;//declare and assign value
    string gp="say no to assignment";

    cout << gp;

    int feet=1;
    int 
    return 0;
}*/

/*#include <iostream>
using namespace std;
const int Number = 12;

int main()
{
    int firstNum;
    int secondNum;

    firstNum = 18;  
    cout << "Line 9: firstNum = " << firstNum  
<< endl;  
 
    cout << "Line 10: Enter an integer: ";  
    cin >> secondNum;  
    cout << endl;  
 
    cout << "Line 13: secondNum = " << secondNum  
<< endl;  
 
    firstNum = firstNum + Number + 2 * secondNum;  
 
    cout << "Line 15: The new value of "  
<< "firstNum = " << firstNum << endl;  
 
    return 0;  
}*/

/*#include <iostream>

int main() {
    int x, y, ticket;
    double score, speed;

    // Assign 1 to x if y is greater than 0
    std::cout << "Enter value for y: ";
    std::cin >> y;
    x = (y > 0) ? 1 : 0;
    std::cout << "Value of x: " << x << std::endl;

    // Increase score by 5 if it's between 80 and 90
    std::cout << "Enter score: ";
    std::cin >> score;
    if (score > 80 && score < 90) {
        score += 5;
    }
    std::cout << "Updated score: " << score << std::endl;

    // Print true if x is an odd number and positive
    std::cout << "Enter value for x: ";
    std::cin >> x;
    if (x > 0 && x % 2 != 0) {
        std::cout << "x is an odd and positive number (true)" << std::endl;
    }

    // Print true if both x and y are positive
    std::cout << "Enter values for x and y: ";
    std::cin >> x >> y;
    if (x > 0 && y > 0) {
        std::cout << "Both x and y are positive (true)" << std::endl;
    }

    // Use a conditional operator to set ticket to 1 if speed > 55, else 0
    std::cout << "Enter speed: ";
    std::cin >> speed;
    ticket = (speed > 55) ? 1 : 0;
    std::cout << "Ticket: " << ticket << std::endl;

    return 0;
}*/

#include <iostream>

using namespace std;
 
int main() {

    int feet, inches;

    // Get input from user

    cout << "Enter length in feet: ";

    cin >> feet;

    cout << "Enter additional inches: ";

    cin >> inches;

    // Convert feet to inches (1 foot = 12 inches)

    int totalInches = (feet * 12) + inches;

    // Convert total inches to centimeters (1 inch = 2.54 cm)

    double centimeters = totalInches * 2.54;

    // Output the result

    cout << "Length in centimeters: " << centimeters << " cm" << endl;

    return 0;

}
 


