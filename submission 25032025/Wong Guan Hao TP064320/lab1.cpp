//Part A Q1
/*#include <iostream>
using namespace std;

int main() {
    cout << "Student Name       : Mien May \n" ;
    cout << "Student Gender     : Female \n";
    cout << "Student Age        : 23 \n";
    cout << "Student Home Address: Selangor \n";
    cout << "E-wallet Amount    : RM 23.12 \n";

    cout << "\nStudent details as below:\n";
    cout << "-----------------------------------------------\n";
    cout << "Name       | Age | Gender | Address | E-wallet \n";
    cout << "-----------------------------------------------\n";
    cout << "Mien May   | 23  | Female | Selangor | RM23.12 \n";
    cout << "-------------------------------------------\n";

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    cout << "Student Name       : Test";
    cout << "Student Gender     : Female";
    cout << "Student Age        : 23";
    cout << "Student Home Address: Selangor";
    cout << "E-wallet Amount    : RM 25.77";

    cout << "\nStudent Details as below:\n";
    cout << "-------------------------";
    cout << "Name    : Test";
    cout << "Age     : 23";
    cout << "Gender  : Female";
    cout << "Address : Selangor";
    cout << "E-Wallet: RM 25.77";
    cout << "-------------------------";

    return 0;
}*/

//Part A Q2
/*#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

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

    cout << "E-wallet ammount: ";
    cin >> amount;

    cout << "Press any key to continue...";
    cin.ignore();
    cin.get();

    cout << "\n==========================================\n";
    cout << "|                 Student Details           |\n";
    cout << "| " << left << setw(15) << "Name" << ": " << name << right<< setw(15) << " |\n";
    cout << "| " << left << setw(15) << "Age" << ": " << age << right<< setw(15) << " |\n";
    cout << "| " << left << setw(15) << "Gender" << ": " << gender << right<< setw(15) << " |\n";
    cout << "| " << left << setw(15) << "Home Address" << ": " << homeAddress << right<< setw(15) << " |\n";
    cout << "| " << left << setw(15) << "E-wallet amount" << ": " << amount << right<< setw(15) << " |\n";
    cout << "\n==========================================\n";
}*/


//Part B Q1
/*#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool isValidTime(int hh, int mm, int ss){
    return (hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >=0 && ss < 60);

}

int main(){
    string input;
    int hh, mm, ss;
    char colon1, colon2;

    while (true){
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> input;

        //use stringstream to parse the input
        stringstream ssInput(input);
        if (ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':') {
            if (isValidTime(hh, mm, ss)){
                break; //valid inout, exit loop
            }        
        }

        cout << "Invalid input! Please enter a valid time in HH:MM:SS format.\n";
    }


    int totalSeconds = (hh * 3600) + (mm * 60) + ss;
    cout << "Elapsed time in second = " << totalSeconds << " seconds\n";

    return 0;
}*/

/*#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool isValidTime(int hh, int mm, int ss) {
    return (hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
}

int main() {
    string input;
    int hh, mm, ss;
    char colon1, colon2;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> input;

        // Use stringstream to parse the input
        stringstream ssInput(input);
        if (ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':') {
            if (isValidTime(hh, mm, ss)) {
                break; // Valid input, exit loop
            }
        }

        cout << "Invalid input! Please enter a valid time in HH:MM:SS format.\n";
    }

    int totalSeconds = (hh * 3600) + (mm * 60) + ss;
    cout << "Elapsed time in seconds = " << totalSeconds << " seconds\n";

    return 0;
}*/


//PartB Q2
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int lower, upper, secretNumber, userGuess;

    cout << "Guess Number Game Started Now!" << endl;

    //set a range for the random number
    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    //Generate a random number in the given range
    secretNumber = lower + rand() % (upper - lower + 1);

    cout << "Guess a number between " << lower << " and " << upper << endl;

    //Loop until the correct guess is made
    do{
        cout << "Your answer: ";
        cin >> userGuess;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again. \n";
        }else if (userGuess > secretNumber) {
            cout << "Too high! Try again.\n";
        }else {
            cout << "Congratulations!" << endl;
        }
    }while (userGuess != secretNumber);

    return 0;
}





