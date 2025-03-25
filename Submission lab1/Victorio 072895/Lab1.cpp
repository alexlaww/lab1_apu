#include <iostream>
#include <string>
#include <algorithm>
#include <chrono>
#include <random>
#include <iomanip>


void Part1First() {
    std::string name, gender, address;
    int age;
    float wallet;

    std::cout << "Student Name\t\t:";
    std::getline(std::cin, name);

    std::cout << "Student Gender\t\t:";
    std::getline(std::cin, gender);

    std::cout << "Student Age\t\t:";
    std::cin >> age;

    std::cout << "Student Home Address\t:";
    std::getline(std::cin >> std::ws, address);

    std::cout << "E-wallet Amount\t\t:RM ";
    std::cin >> wallet;

    std::cout << "Student details as below:\n";
    std::cout << "=================================================================================\n";
    std::cout << "|Name \t\t| Age\t | Gender \t| Address\t| E-wallet amount\t|\n";
    std::cout << "=================================================================================\n";
    std::cout << "|" << name << "\t| " << age << "\t | " << gender << "\t| " << address << "\t| RM" << wallet << "\t\t\t|\n";
    std::cout << "=================================================================================\n";
}


void Part1Second() {
    std::string name, gender, address;
    int age;
    float wallet;

    std::cout << "Student Name\t\t:";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Student Gender\t\t:";
    std::getline(std::cin, gender);

    std::cout << "Student Age\t\t:";
    std::cin >> age;

    std::cout << "Student Home Address\t:";
    std::getline(std::cin >> std::ws, address);

    std::cout << "E-wallet Amount\t\t:RM ";
    std::cin >> wallet;

    std::cout << "Press any key to continue . . .\n";
    
    std::cout << "=========================================================\n";
    std::cout << "|Student details as below: \t\t\t\t|\n";
    std::cout << "=========================================================\n";
    std::cout << "| Name      :                                 " << std::setw(10) << std::right << name << "|\n";
    std::cout << "| Age       :                                 " << std::setw(10) << std::right << age << "|\n";
    std::cout << "| Gender    :                                 " << std::setw(10) << std::right << gender << "|\n";
    std::cout << "| Address   :                                 " << std::setw(10) << std::right << address << "|\n";
    std::cout << "| E-Wallet  : RM                              " << std::setw(10) << std::right << wallet << "|\n";
    std::cout << "=========================================================\n";
}


bool hasInteger(std::string& str) {
    return std::any_of(str.begin(), str.end(), ::isdigit);
}


bool validtime(int timeinput, int operands) {

    switch (operands)
    {
        case 0: 
            return (timeinput >= 0 && timeinput <= 23);
        case 1: 
            return (timeinput >= 0 && timeinput <= 59);
        default:
            return false;
    }
}


void Part2First() {
    std::string time;
    int result;

    do
    {
        std::cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        std::getline(std::cin >> std::ws, time);

        if (time.length() != 8 || time[2] != ':' || time[5] != ':') {
            std::cout << "Invalid input format!\n";
            continue;
        }

        std::string hour = time.substr(0, 2);
        std::string minute = time.substr(3, 2);
        std::string second = time.substr(6, 2);

        if(hasInteger(hour) && hasInteger(minute) && hasInteger(second)) {
            int inthour = std::stoi(hour);
            int intminute = std::stoi(minute);
            int intsecond = std::stoi(second);

            if (validtime(inthour, 0) && validtime(intminute, 1) && validtime(intsecond, 1)) {
                result = inthour * 3600 + intminute * 60 + intsecond;
                break;
            }
        }

        std::cout << "Invalid input!\n";
        
    } while (true);
    
    std::cout << "Elapse time is: " << result << " seconds.\n";
}


void Part2Second() {
    int low = 1; 
    int high = 100;
    int guess;

    //randomize the secret answer
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);
    std::uniform_int_distribution<> dist(low, high);
    int random = dist(gen);

    do
    {    
        std::cout << "Guess Number Game Started Now!\n";
        std::cout << "-------------------------------------------\n";
        std::cout << "Guess Number between " << low << " to " << high << "\n";
        std::cout << "Your Answer: ";
        std::cin >> guess;

        if (guess == random)
        {
            break;
        }
        else if (guess < random)
        {
            low = guess + 0;
        }
        else if (guess > random)
        {
            high = guess + 0; 
        }
    } while (true);
    
    std::cout << "Congratulations! You won!\n";
}


void Part3First() {
    int year, month, again = 1;

    std::string months_name[12] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"};

    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    do {
        std::cout << "Enter calendar's year: ";
        std::cin >> year;
        std::cout << "Enter calendar's month: ";
        std::cin >> month;

        if (month < 1 || month > 12) {
            std::cout << "Invalid month! Please enter a value between 1 and 12.\n";
            continue;
        }

        if (month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
            month_days[1] = 29;
        } else {
            month_days[1] = 28;
        }

        std::cout << "\n\tCalendar: " << months_name[month - 1] << " - " << year << "\n";
        std::cout << "-------------------------------------------------------------\n";
        std::cout << "  Sun    Mon    Tue    Wed    Thu    Fri    Sat\n";
        std::cout << "-------------------------------------------------------------\n";

        int total_days = 0;
        for (int y = 1900; y < year; y++) {
            total_days += (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 366 : 365;
        }
        for (int m = 0; m < month - 1; m++) {
            total_days += month_days[m];
        }
        int start_day = (total_days + 1) % 7; 

        for (int i = 0; i < start_day; i++) {
            std::cout << "       ";
        }

        for (int day = 1; day <= month_days[month - 1]; day++) {
            std::cout << std::setw(6) << day << " ";
            if ((start_day + day) % 7 == 0) {
                std::cout << "\n";
            }
        }
        std::cout << "\n-------------------------------------------------------------\n";

        std::cout << "Do you want to see another month? (1 = Yes, others = No): ";
        std::cin >> again;

    } while (again == 1);
}


void Part3Second() {
    int hot = 0, rainy = 0, cloud = 0, days = 0, year = 0;
    std::string month;
    char answer;
    std::string months_name[12] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"};

    std::cout << "Enter your year and month: ";
    std::cin >> year >> month;    
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < 12; i++)
    {
        if (month == months_name[i])
        {
            if(month == months_name[2] && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
                days = 29;
            } else {
                days = month_days[i];
            }
            
            break;
        }
    }
    
    for (int i = 0; i < days; i++)
    {
        std::cout << "Day " << i+1 << " : Enter \"H\" for hot, \"R\" for rainy, \"C\" for cloudy (\"E\" to end): ";
        std::cin >> answer;

        if (answer == 'H')
        {
            hot++;
        } else if (answer == 'R')
        {
            rainy++;
        } else if (answer == 'C')
        {
            cloud++;
        } else if (answer == 'E')
        {
            break;
        } else {
            i--;
        }
    }
    
    std::cout << "Number of hot days this month: " << hot << std::endl;
    std::cout << "Number of rainy days this month: " << rainy << std::endl;
    std::cout << "Number of cloud days this month: " << cloud << std::endl;
}


void Part3Third() {
    float rmb, usd, choice, exchange;
    std::cout << "Enter the exchange rate from dollars to RMB: ";
    std::cin >> exchange;
    std::cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    std::cin >> choice;

    if(choice == 0) {
        std::cout << "Enter the dollar ammount: ";
        std::cin >> usd;
        std::cout << "$" << usd << " is " << exchange * usd << " yuan\n";
    } else {
        std::cout << "Enter the yuan ammount: ";
        std::cin >> rmb;
        std::cout << rmb << " yuan is $" << rmb / exchange << "\n";
    }
}


void Part3Fourth() {
    int rows;
    std::cout << "Enter number of rows (for diamond (triangle) dimension): ";
    std::cin >> rows;

    int height = 2 * rows - 1;  // Correct diamond height

    for (int i = 1; i <= height; i++) {
        int stars = (i <= rows) ? (2 * i - 1) : (2 * (height - i + 1) - 1);
        int spaces = (i <= rows) ? (rows - i) : (i - rows);

        for (int j = 0; j < spaces; j++) {
            std::cout << " ";
        } 
        for (int j = 0; j < stars; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}


void Part3Fifth() {
    int even = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            even +=2;
            std::cout << even << "\t";
        }
        std::cout << std::endl;
    }
    
}


void Part3Sixth() {
    float quiz, mid, final, average;
    char grade;
    std::cout << "Enter 3 Scores values seperated by space: ";
    std::cin >> quiz >> mid >> final;

    average = (quiz + mid + final)/3; 


    if (average >= 90) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    std::cout << "Grade " << grade << std::endl;
}

void Part3Seventh() {
    float widtha, heighta, widthb, heightb, totala, totalb;

    std::cout << "Rectangle A: \n";
    std::cout << "Width = ";
    std::cin >> widtha;
    std::cout << "Height = ";
    std::cin >> heighta;

    std::cout << "\nRectangle B: \n";
    std::cout << "Width = ";
    std::cin >> widthb;
    std::cout << "Height = ";
    std::cin >> heightb;

    totala = widtha * heighta;
    totalb = widthb * heightb;

    std::cout << ((totala > totalb) ? "Rectangle A is bigger than B\n" : "Rectangle B is bigger than A\n");
}


void Part3Eighth() {
    float money = 0, tip = 0, total = 0;
    std::cout << "Input your total meal: RM";
    std::cin >> money;
    std::cout << "Input your tip: RM";
    std::cin >> tip;

    total = money;
    std::cout << "Total Cost Before GST and Tipping: RM" << total << std::endl;

    total += 6/total;
    std::cout << "Total Cost After GST: RM" << total << std::endl;

    total += tip;
    std::cout << "Total Cost After GST and Tipping: RM" << total << std::endl;
}


int main () {
    //Part1First();
    //Part1Second();
    //Part2First();
    //Part2Second();
    Part3First();
    //Part3Second();
    //Part3Third();
    //Part3Fourth();
    //Part3Fifth();
    //Part3Sixth();
    //Part3Seventh();
    //Part3Eighth();
}

