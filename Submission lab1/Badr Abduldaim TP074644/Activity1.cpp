# include<iostream>
# include<iomanip>
using namespace std;
int main()
{
    // Declare the variables
    int feet , inches ;
    double totalInches , centimeters ;

    // Get the input from the user
    cout << "Enter length in feet: " ;
    cin >> feet ;
    cout << "Enter length in inches: " ;
    cin >> inches ;

    // Convert feet and inches to total inches
    totalInches = (feet * 12 ) + inches ;

    // Convert inches to centimeters (1 inch = 2.54 cm)
    centimeters = totalInches * 2.54 ;
    

    // Display the output
    cout << fixed << setprecision(2) ;
    cout << "The length in centimeters is " << centimeters << "cm" ;


    return 0;
}