#include <iostream>
#include <string>
#include <ctime>
#include <random>

using namespace std;

bool isValidTime(int hr, int min, int sec){
    return (0 <= hr && hr < 24) && (0 <= min && min < 60) && (0 <= sec && sec< 60);
}
void partBno1(){
    const char delim = ':';
    string hr_s, min_s, sec_s;  
    int hr, min, sec;

    while (true)
    {
        cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
        
        std::getline(cin, hr_s, delim);
        std::getline(cin, min_s, delim);
        std::getline(cin, sec_s);
        
        hr = stoi(hr_s);
        min = stoi(min_s);
        sec = stoi(sec_s);

        if (isValidTime(hr,min,sec))
        {
            int elapsed = (hr*360) + (min*60) + sec;
            cout << "Elapsed Time: " + elapsed;
            break;
        }
        else{
            cout << "Invalit input!";
        }
        
        
    
}

partBno2(){
    srand(time(0));

    int lower, upper, secretNumber, userGuess;

    cout << "Guess Number game start!"
    cout << "Enter lower bound: "
    cin >> lower;
    cout << "Enter upper bound: "
    cin >> upper;

    secretNumber = lower + rand() % (upper - lower +1);

    cout << "Guess the number between" << lower << "and" << upper;

    do
    {
        cout << "Your answer: "
        cin >> userGuess;

        if(userGuess < secretNumber){
            cout >> "Too low!"
        }else if (userGuess > secretNumber)
        {
            cout >> "Too upper!"
        }else{
            cout >> "You won"
        }
        
    }while (userGuess != secretNumber)
    
    return 0;

}

int main(){
    // partBno1();
    partBno2();
}


