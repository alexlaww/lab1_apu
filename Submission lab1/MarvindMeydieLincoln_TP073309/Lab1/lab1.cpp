#include <iostream>
#include <string>
#include <ctime>
#include <random>


// bool isValidTime(int hr, int min, int sec){
//     return (0 <= hr && hr < 24) && (0 <= min && min < 60) && (0 <= sec && sec< 60);
// }
// void partBno1(){
//     const char delim = ':';
//     string hr_s, min_s, sec_s;  
//     int hr, min, sec;

//     while (true)
//     {
//         cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
        
//         std::getline(cin, hr_s, delim);
//         std::getline(cin, min_s, delim);
//         std::getline(cin, sec_s);
        
//         hr = stoi(hr_s);
//         min = stoi(min_s);
//         sec = stoi(sec_s);

//         if (isValidTime(hr,min,sec))
//         {
//             int elapsed = (hr*360) + (min*60) + sec;
//             cout << "Elapsed Time: " + elapsed;
//             break;
//         }
//         else{
//             cout << "Invalit input!";
//         }
        
        
    
// }

void partBno2(){
    srand(time(0));

    int lower, upper, secretNumber, userGuess;

    std::cout << "Guess Number game start!";
    std::cout << "Enter lower bound: ";
    std::cin >> lower;
    std::cout << "Enter upper bound: ";
    std::cin >> upper;

    secretNumber = lower + rand() % (upper - lower +1);

    std::cout << "Guess the number between" << lower << "and" << upper;

    do
    {
        std::cout << "Your answer: ";

        if(userGuess < secretNumber){
            std::cout << "Too low!";
        }else if (userGuess > secretNumber)
        {
            std::cout << "Too upper!";
        }else{
            std::cout << "You won";
        }
        
    }while (userGuess != secretNumber);

}

void classActivity4(){
    std::string myString;
    int upper;

    std::cout << "Enter a String: ";
    std::getline(std::cin, myString);
    
    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i] >= 'A' && myString[i] <= 'Z')
            upper++;
    }

    std::cout << "Number of Uppercase Letter: " << upper;
}

int main(){
    // partBno1();
    // partBno2();
    classActivity4();
}


