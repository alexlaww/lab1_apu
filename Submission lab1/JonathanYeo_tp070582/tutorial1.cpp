#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;
int main() {
    /*
    cout << "Student Name           :Mien May\n";
    cout << "Student Gender         :Female\n";
    cout << "Student Age            :23\n";
    cout << "Student Home Address   :Selangor\n";
    cout << "E-wallet Amount        : RM 23.12\n\n";
    cout << "Student details as below:\n"; 
    cout << "================================================================================\n";
    cout << "|Name           | Age   | Gender       | Address       | E-wallet amount       |\n";
    cout << "================================================================================\n";
    cout << "|Mien May       | 23    | Female       | Selangor      | RM 23.12              |\n";
    cout << "================================================================================\n";


    //2
    string name, gender, home_address;
    int age;
    double e_wallet;

    cout << "Student Name           : ";
    getline(cin, name);
    cout << "Student Gender         : ";
    getline(cin, gender);
    cout << "Student Age            : ";
    cin >> (age);
    cin.ignore();
    cout << "Student Home Address   : ";
    getline(cin, home_address);
    getline(cin, home_address);
    cout << "E-wallet Amount        : ";
    cin >> e_wallet;

    system("pause");
    cout << "================================================================================\n";
    cout << "|Student Details as below:                                                     |\n";
    cout << "================================================================================\n";
    cout << "|" << left << setw(15) << "Name" << ": " << name << right << setw(15) << " |\n";
    cout << "|" << left << setw(15) << "Gender" << ": " << gender << right << setw(15) << " |\n";
    cout << "|" << left << setw(15) << "Age" << ": " << age << right << setw(15) << " |\n";
    cout << "|" << left << setw(15) << "Address" << ": " << home_address << right << setw(15) << " |\n";
    cout << "|" << left << setw(15) << "E-Wallet Amount" << ": " << e_wallet << right << setw(15) << " |\n";
    cout << "================================================================================\n"; */

    //Part B, 1
    /*
    bool valid = false;
    int hours, minutes, seconds, hr , min, total_seconds;
    string time;
    cout << "Please enter your elapsed time in (HH:MM:SS) format = ";
    
    while (!valid)
    {
        cin >> time;
        stringstream ss(time);
        char ch1, ch2;
        if (ss >> hours >> ch1 >> minutes >> ch2 >> seconds && ch1 == ':' && ch2 == ':' && ss.eof())
        {
            valid = true;
        }
        else
        {
            cout << "Invalid input. Please enter your elapsed time in (HH:MM:SS) format = ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    
    hr = hours * 3600;
    min = minutes * 60;
    total_seconds = hr + min + seconds;
    cout << "The total seconds is " << total_seconds << " seconds\n"; */ 

    //Part B, 2
    /*
    int secretNumber;
    cout << "Guess the number game!!!\n";

    int guess;
    bool correct = false;
    srand(time(0));
    secretNumber = 1 + rand() % 100;
    do
    {
        cout << "Enter your guess number (1-100) = ";
        cin >> guess;
        if (guess > secretNumber)
        {
            cout << "The number is lower.\n";
        }
        else if (guess < secretNumber)
        {
            cout << "The number is higher.\n";
        }
        else if (guess == secretNumber)
        {
            cout << "Congratulations! You have guessed the correct number.\n";
            correct = true;
        }
        else
        {
            cout << "Sorry, you have guessed the wrong number.\n";
        }
    } while (guess != secretNumber && !correct); */


    //Class Activity 4
    int count = 0;
    string sentence;
    cout << "Enter a string = ";
    getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++)
    {
        if (isupper(sentence[i]))
        {
            count++;
        }
    }
    cout << "The number of uppercase characters in the string is " << count << " characters.\n";
    
    return 0;
}