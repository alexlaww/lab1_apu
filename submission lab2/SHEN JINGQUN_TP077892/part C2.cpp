#include <iostream>
#include <iomanip>
using namespace std;

// 将月份字符串首字母转换为大写
string ConvertLetterString(const string& month) {
    string result = month;
    if (!result.empty()) {
        result[0] = toupper(result[0]);
    }
    return result;
}

// 根据月份获取该月天数
int FindDaysInMonth(const string& month) {
    if (month == "january" || month == "march" || month == "may" || month == "july" ||
        month == "august" || month == "october" || month == "december") {
        return 31;
    } else if (month == "april" || month == "june" || month == "september" || month == "november") {
        return 30;
    } else if (month == "february") {
        return 28;
    }
    return 0;
}

// 统计每月不同天气的天数
void weatherReport(const string& month, int& hotDays, int& rainyDays, int& cloudyDays) {
    int daysInMonth = FindDaysInMonth(month);
    char weather;
    for (int i = 1; i <= daysInMonth; ++i) {
        cout << "Day " << i << " - Enter 'h' for Hot, 'r' for Rainy, 'c' for Cloudy, ('t' to end): ";
        cin >> weather;
        if (weather == 't') {
            break;
        }
        switch (weather) {
            case 'h':
                hotDays++;
                break;
            case 'r':
                rainyDays++;
                break;
            case 'c':
                cloudyDays++;
                break;
            default:
                cout << "Invalid input. Please try again." << endl;
                i--;
        }
    }
}

// 以图表形式展示结果
void displayReport(int hotDays, int rainyDays, int cloudyDays) {
    cout << "The analysis star design as below:" << endl;
    cout << "Hot days: ";
    for (int i = 0; i < hotDays; ++i) {
        cout << "*";
    }
    cout << endl;
    cout << "Rainy days: ";
    for (int i = 0; i < rainyDays; ++i) {
        cout << "*";
    }
    cout << endl;
    cout << "Cloudy days: ";
    for (int i = 0; i < cloudyDays; ++i) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    string month;
    cout << "Enter your month (e.g. August 2023): ";
    cin >> month;
    month = ConvertLetterString(month);
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    weatherReport(month, hotDays, rainyDays, cloudyDays);
    cout << "Number of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;
    displayReport(hotDays, rainyDays, cloudyDays);
    return 0;
}