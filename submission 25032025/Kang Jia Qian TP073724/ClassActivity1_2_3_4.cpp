# include <iostream>
# include <cctype>
using namespace std;

const int NUMBER = 12;

int main() {
    int firstNum = 12;
    int secondNum;

    firstNum = 18;
    cout << "Line 9: firstNum = " << firstNum
        << endl;

    cout << "Line 10: Enter an integer: ";
    cin >> secondNum;
    cout << endl;

    cout << "Line 13: secondNum = " << secondNum
        << endl;
    
    firstNum = firstNum + NUMBER + 2 * secondNum;

    cout << "Line 15: The new value of "
        << "firstNum = " << firstNum << endl;
    

    // Class activity 1:
    float length;
    
    cout << "Input an length (feet and inches): ";
    cin >> length;

    cout << "Feet: " << length*12 << endl;
    cout << "Centimeters: " << length * 12 * 2.54 << endl;


    // Class activity 2:
    // Q1
    int x, y;

    cout << "\nEnter y: ";
    cin >> y;

    if (y > 0){
        cout << "x = " << (x = 1) << endl;
    }

    // Q2
    double score;

    cout << "\nEnter score: ";
    cin >> score;

    if (score > 80 & score < 90){
        score += 5;
        cout << score;
    }

    //Q3
    cout << "\nEnter x: ";
    cin >> x;

    if (x > 0 & x%2 != 0){
        cout << "x = " << x << endl;
    }

    //Q4
    if (x > 0 & y > 0){
        cout << "x = " << x << "\ny = "<< y << endl;
        cout << "true" << endl;
    }

    //Q5
    int speed = 65;
    int ticket = (speed > 55) ? 1:0;
    cout << "Ticket: " << ticket << endl;

    // Class Activity 3:
    int number = 100;
    cout << "**1**  ";

    while (number > 10){
        cout << number << " ";
        number -= 5;
    }
    cout << endl << "**2**  ";

    number = 100;
    for (int i=100; i>10; i-=5){
        cout << number << " ";
        number = number - 5;
    }

    cout << endl << "**3**  ";
    number = 100;
    do {
        cout << number << " ";
        number -= 5;
    }while (number > 10);


    // Class Activity 3: 
    for (int i=100; i>10; i-=5){
        cout << i << endl;
    }

    int i = 100;
    do {
        cout << i << endl;
        i -= 5;
    } while (i > 10);

    // Class Activity 4:
    string input;
    int count = 0; 
    cout << "Enter a string: ";
    getline(cin, input);
    
    for (char c : input){
        if (isupper(c)){
            count ++;
        }
    }
    cout << "The number of uppercase letter is " << count << endl;

    return 0;
}