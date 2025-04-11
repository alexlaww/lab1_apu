#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// 验证时间输入格式是否正确
bool validateTimeInput(const string& timeStr) {
    if (timeStr.size() != 8) {
        return false;
    }
    if (timeStr[2] != ':' || timeStr[5] != ':') {
        return false;
    }
    for (int i = 0; i < 8; ++i) {
        if (i != 2 && i != 5) {
            if (!isdigit(timeStr[i])) {
                return false;
            }
        }
    }
    return true;
}

// 计算从午夜开始经过的秒数
int calculateElapsedSeconds(const string& timeStr) {
    int hours, minutes, seconds;
    stringstream ss(timeStr);
    char colon;
    ss >> hours >> colon >> minutes >> colon >> seconds;
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
    string timeInput;
    cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
    cin >> timeInput;
    while (!validateTimeInput(timeInput)) {
        cout << "Invalid format. Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> timeInput;
    }
    int elapsedSeconds = calculateElapsedSeconds(timeInput);
    cout << "Elapsed time in seconds = " << elapsedSeconds << " seconds" << endl;
    return 0;
}