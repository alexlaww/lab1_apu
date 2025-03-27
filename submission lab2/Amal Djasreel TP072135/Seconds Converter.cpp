#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

bool isValidTime(int h, int m, int s){
    return (h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59);
}

bool parseTime(const std::string& input, int& h, int& m, int& s) {
    char colon1, colon2;
    std::istringstream ss(input);
    if (ss >> h >> colon1 >> m >> colon2 >> s) {
        if (colon1 == ':' && colon2 == ':' && ss.eof()) {
            return isValidTime(h, m, s);
        }
    }
    return false;
}

int main() {
    std::string input;
    int hours, minutes, seconds;

    while (true) {
        std::cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        std::getline(std::cin, input);

        if (parseTime(input, hours, minutes, seconds)) {
            int totalSeconds = hours * 3600 + minutes * 60 + seconds;
            std::cout << "Elapsed time in seconds = " << totalSeconds << " seconds" << std::endl;
            break;
        } else {
            std::cout << "Invalid input!" << std::endl;
        }
    }

    return 0;
}