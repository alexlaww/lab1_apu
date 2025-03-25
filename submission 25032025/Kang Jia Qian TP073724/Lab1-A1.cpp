# include <iostream>
# include <string>
# include <iomanip>
# include <ctime>

using namespace std;

void getInput(const string& promt, string& input) {
    cout << promt;
    getline(cin, input);
}

void displayStudentDetails(const string& name, int age, const string& gender, const string& address, double amount) {
    const string line = "========================================";
    const int labelWidth = 12;
    const int valueWidth = 25;

    cout << "\n\nStudent details as below: \n";
    cout << line << endl;
    cout << left << setw(labelWidth) << "| Name     : " << setw(valueWidth) << right << name << "|" << endl;
    cout << left << setw(labelWidth) << "| Age      : " << setw(valueWidth) << right << age << "|" << endl;
    cout << left << setw(labelWidth) << "| Gender   : " << setw(valueWidth) << right << gender << "|" << endl;
    cout << left << setw(labelWidth) << "| Address  : " << setw(valueWidth) << right << address << "|" << endl;
    cout << left << setw(labelWidth) << "| E-wallet : " << setw(valueWidth-5) << right << "RM " << fixed << setprecision(2) << amount << "|" << endl;
    cout << line << endl;

}

int main() {
    string StudentName, StudentGender, StudentHomeAddress;
    int StudentAge;
    double Amount = 0;

    getInput("Student Name            : ", StudentName);
    getInput("Student Gender          : ", StudentGender);

    cout << "Student Age             : ";
    cin >> StudentAge;
    cin.ignore(); 

    getInput("Student Home Address    : ", StudentHomeAddress);

    cout << "E-wallet Amount         : ";
    cin >> Amount;

    displayStudentDetails(StudentName, StudentAge, StudentGender, StudentHomeAddress, Amount);

    return 0;
    }