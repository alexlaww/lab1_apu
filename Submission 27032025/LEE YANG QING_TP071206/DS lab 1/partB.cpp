/*1.
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;


//check for correct format
//function need to be at top if not system cannot dectect
bool correctTime (int hh, int mm, int ss){
    return (hh >=0 && hh<24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
}

int main(){
string time;
int hh,mm,ss;
char colon1, colon2;

while (true)
{
    cout << "enter elapsed time (in HH:MM:SS format) = ";
    cin >> time;

    //ss is to parse the input
    stringstream ssTime(time);
    if (ssTime >> hh >> colon1 >> mm >> colon2 >> ss && colon1 ==':' && colon2==':'){
        if (correctTime(hh,mm,ss)){
            break;//exit loop
        }
    }
    cout<<"Invalid input!\n";
    
}
    //convert time to second    
    int elapsedSeconds = (hh * 3600) + (mm * 60) + ss;
    cout << "Elapsed time in seconds = " << elapsedSeconds << " seconds\n";
    
    return 0; 
}*/

#include <iostream>
#include <cstdlib> //random number generation
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // random number generator (from cstdlib)
    int secretNumber = rand() % 100 + 1; // Generate a random number
    int guess;*
    
    cout << "Guess Number Game Started Now!" << endl;
    cout << "---------------------------------" << endl;
    cout << "\nGuess Number between 1 to 100" << endl;
    
    do {
        cout << "Your answer: ";  //ask first 
        cin >> guess;
        
        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    } while (guess != secretNumber); //checked after the guess
    
    return 0;
}

