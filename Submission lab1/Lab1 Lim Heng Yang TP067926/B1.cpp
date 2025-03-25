#include <iostream>
#include <string>
#include <limits>
#include <iomanip> // input output manipulation 
#include <sstream> 
#include <ctime> 
using namespace std;

int main() { 
int h, m, s; 
char separator1, separator2;
cout << "Enter the time in the format HH:MM:SS: " <<endl;
cin >> h >> separator1 >> m >> separator2 >> s;

while(cin.fail() || separator1 != ':' || separator2 != ':' || h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. Please enter the time in the format HH:MM:SS: " << endl;
    cin >> h >> separator1 >> m >> separator2 >> s;
}

int totalSeconds = h * 3600 + m * 60 + s;
cout << "Total seconds: " << totalSeconds << endl;
}