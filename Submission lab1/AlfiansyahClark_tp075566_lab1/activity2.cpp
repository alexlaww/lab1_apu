#include <iostream>
using namespace std;

int main(){


    //Activity 2
        //1
        /*
        int y, x;
        cout << "Enter Y Value: ";
        cin >> y;
        if(y>0){
            x = 1;
            cout << "X is: " << x;
        }else{
            x=0;
            cout << "X is: " << x;
        }
        
        //2
        double score;
        cout << "Enter the Score: ";
        cin >> score;

        if(score>=80 && score<=90){
            score = score + 5;
            cout << "Score is now: " << score;
        }else{
            cout << "Score was not between 80 and 90: " << score;
        }
        
        
        //3
        int x1;  // Declare the variable

        cout << "Enter a number: ";
        cin >> x1;  // Take user input

        if (x1 != 0 && x1 % 2 == 0) {  // Check if x1 is nonzero and even
            cout << x1 << " is an even number.\n";
            cout << "\nTrue";
        } 
        else if (x1 == 0) {  // Check if x1 is zero
            cout << "\nThe number is zero";
        } 
        else {  // If neither even nor zero, it must be odd
            cout << x1 << " is an odd number.\n";
            cout << "\nFalse";
        }
        
        
        //4
        int num1, num2;
        cout << "Enter First Number: ";
        cin >> num1;
        cout << "Enter Second Number: ";
        cin >> num2;

        if(num1>0 && num2>0){
            cout<<"True";
        }else{
            cout <<"False";
        }
        
        */
        //5
        int speed;
        bool ticket;

        cout << "Enter Speed: ";
        cin >> speed;

        if(speed>55){
            ticket = 1;
            cout << ticket;
        }else{
            ticket = 0;
            cout << ticket;
        }
        
    return 0;
}
        