/*
#include<iostream>
using namespace std;


//Part A
//Q1
int main(){
    string name, gender, homeAddress;
    int age;
    float amount;

    cout << "Student Name: ";
    getline(cin, name);

    cout << "Student Gender: ";
    cin >> gender;

    cout << "Student Age: ";
    cin >> age;
    cin.ignore();

    cout << "Student Home Address: ";
    cin >> homeAddress;

    cout << "E-wallet Amount: ";
    cin >> amount;

    cout << "Student details as below: "<<endl;
    cout << "==========================================================================================="<<endl;
    cout << "| Name    | Age     | Gender    | Address   | E-Wallet amout  |"<<endl;
    cout << "| "<< name << "      | " << age << "       | " << gender << "     | " << homeAddress << "       | " << amount<< "     |" <<endl;
    cout << "===========================================================================================";

}
 
//Q2
*/


#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

/*Part B
//Q1


bool isValidTime(int hh, int mm, int ss){
    return (hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
}

int main(){
    string input;
    int hh, mm, ss;
    char colon1, colon2;

    while(true){
        cout << "Please enter your elapsed time (in HH:MM:SS format): ";
        cin >> input;

        stringstream ssInput(input);
        if(ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':'){
            if(isValidTime(hh, mm, ss)){
                break;
            }
    }

    cout << "Invalid input! Please enter a valid time in HH:MM:SS format. \n";
}

int totalSeconds = (hh * 3600) + (mm * 60) + ss;
cout << "Elapsed time in seconds = " << totalSeconds << "seconds\n";
} 



//Q2
int main(){
    srand(time(0)); // funtion to generate random number

    int lower, upper, secretNumber, userGuess;

    cout << "Guess Number Game Started Now! " << endl;
    cout << "-------------------------------------" <<endl;

    cout << "Enter the lowe bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    secretNumber = lower + rand() % (upper - lower + 1);

    cout << "Guess a number between " << lower << " and " << upper << endl;

    do{
        cout << "Your answer: ";
        cin >> userGuess;

        if(userGuess < secretNumber){
            cout << "Too low! Try again.\n";
        }else if(userGuess > secretNumber){
            cout << "Too high! Try again. \n";
        }else{
            cout << "Congratulations! You won!" << endl;
        }
    }while(userGuess != secretNumber);
    return 0;
}

*/


int main() {
    string input;
    int uppercaseCount = 0;

    cout << "Enter  String: ";
    cin >> input;

    for (char ch : input) {
        if (isupper(ch)) {
            uppercaseCount++;
        }
    }

    cout << "Number of uppercase letters: " << uppercaseCount << endl;

    return 0;
}