#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Question 1: Program to display student details in table format
void displayStudentDetails1() {
    // Student information
    string name = "Mien May";
    string gender = "Female";
    int age = 23;
    string address = "Selangor";
    double eWallet = 23.12;

    // Display basic information
    cout << "Student Name          :" << name << endl;
    cout << "Student Gender        :" << gender << endl;
    cout << "Student Age          :" << age << endl;
    cout << "Student Home Address  :" << address << endl;
    cout << "E-wallet Amount      :RM " << fixed << setprecision(2) << eWallet << endl;
    cout << endl;

    // Display table header
    cout << "Student details as below:" << endl;
    cout << "===============================================================================" << endl;
    cout << "|Name            | Age   | Gender      | Address      | E-wallet amount     |" << endl;
    cout << "===============================================================================" << endl;
    
    // Display table content
    cout << "|" << left << setw(16) << name 
         << "| " << setw(6) << age 
         << "| " << setw(11) << gender 
         << "| " << setw(12) << address 
         << "| RM" << right << setw(15) << fixed << setprecision(2) << eWallet << "    |" << endl;
    cout << "===============================================================================" << endl;
}

// Question 2: Modified version with different display format
void displayStudentDetails2() {
    // Student information
    string name = "Test";
    string gender = "Female";
    int age = 23;
    string address = "Selangor";
    double eWallet = 25.77;

    // Display first format
    cout << "Student Name          :" << name << endl;
    cout << "Student Gender        :" << gender << endl;
    cout << "Student Age          :" << age << endl;
    cout << "Student Home Address  :" << address << endl;
    cout << "E-wallet Amount      :RM " << fixed << setprecision(2) << eWallet << endl;
    cout << "Press any key to continue . . . " << endl;

    // Display second format
    cout << "==========================================================" << endl;
    cout << "| Student Details as below:                               |" << endl;
    cout << "==========================================================" << endl;
    cout << "| Name     : " << right << setw(41) << name << "|" << endl;
    cout << "| Age      : " << right << setw(41) << age << "|" << endl;
    cout << "| Gender   : " << right << setw(41) << gender << "|" << endl;
    cout << "| Address  : " << right << setw(41) << address << "|" << endl;
    cout << "| E-Wallet : RM " << right << setw(38) << fixed << setprecision(2) << eWallet << "|" << endl;
    cout << "==========================================================" << endl;
}

int main() {
    cout << "Question 1 Output:" << endl;
    cout << "==================" << endl << endl;
    displayStudentDetails1();
    
    cout << "\n\nQuestion 2 Output:" << endl;
    cout << "==================" << endl << endl;
    displayStudentDetails2();
    
    return 0;
}
