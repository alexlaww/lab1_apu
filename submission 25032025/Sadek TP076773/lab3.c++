#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <cctype> 
using namespace std;
//Q1
// int main(){
//     string name;
//     string gender;
//     int age;
//     string address;
//     float wallent_amount;

//     cout<<"please enter your full name:  ";
//     getline(cin,name);

//     cout<<"enter your gender (male/female):  ";
//     cin>>gender;

//     cout<<"enter your age:  ";
//     cin>>age;

//     cout<<"enter your state:  ";
//     cin>>address;

//     cout<< "enter your wallet value:  ";
//     cin>>wallent_amount;

//     cout<<"=====================================================================\n";
//     cout<<" |   name    |   gender   |   age   |   state   |   wallet value   |  \n";
//     cout<<"\t"<<name<<"\t"<<gender<<"\t"<<age<<"\t"<<address<<"\t"<<wallent_amount;
//}


//Q2 P1
// bool validateTime(const std::string& time, int& hours, int& minutes, int& seconds) {
//     if (time.length() != 8) return false; 
//     if (time[2] != ':' || time[5] != ':') return false; 

//     std::string strHours = time.substr(0, 2);
//     std::string strMinutes = time.substr(3, 2);
//     std::string strSeconds = time.substr(6, 2);

//     try {
//         hours = std::stoi(strHours);
//         minutes = std::stoi(strMinutes);
//         seconds = std::stoi(strSeconds);
//     } catch(...) {
//         return false; 
//     }

//     if (hours < 0 || hours > 23) return false;
//     if (minutes < 0 || minutes > 59) return false;
//     if (seconds < 0 || seconds > 59) return false;

//     return true; 
// }

// int main() {
//     std::string inputTime;
//     int hours, minutes, seconds;

//     while (true) {
//         std::cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
//         std::cin >> inputTime;
        
//         if (validateTime(inputTime, hours, minutes, seconds)) {
//             break; 
//         } else {
//             std::cout << "Invalid input!\n";
//         }
//     }

//     int totalSeconds = hours * 3600 + minutes * 60 + seconds;
//     std::cout << "Elapsed time in seconds = " << totalSeconds << " seconds\n";
    
//     return 0;
// }

//Q2 P2
// int main() {
//     std::srand(std::time(0)); 
//     int secretNumber = std::rand() % 100 + 1; 
//     int guess = 0;
//     int low = 1, high = 100;

//     std::cout << "Guess Number Game Started Now!\n";
//     std::cout << "----------------------------------------\n";

//     while (guess != secretNumber) {
//         std::cout << "Guess Number between " << low << " to " << high << "\n";
//         std::cout << "Your answer: ";
//         std::cin >> guess;

//         if (guess < low || guess > high) {
//             std::cout << "Please enter a number within the range!\n";
//         } else if (guess < secretNumber) {
//             low = guess + 1;
//             std::cout << "Too low, try again.\n";
//         } else if (guess > secretNumber) {
//             high = guess - 1;
//             std::cout << "Too high, try again.\n";
//         } else {
//             std::cout << "Congratulations! You won!\n";
//         }
//     }

//     return 0;
// }


int main() {
    std::string input;
    int uppercaseCount = 0;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  

    for (char c : input) {
        if (std::isupper(c)) {  
            uppercaseCount++;
        }
    }

    std::cout << "Number of uppercase letters: " << uppercaseCount << std::endl;

    return 0;
}