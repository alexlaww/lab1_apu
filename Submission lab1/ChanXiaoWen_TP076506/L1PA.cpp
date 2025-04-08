#include<iostream>
#include<string>
using namespace std;

/*Question2*/
#include<conio.h> //getch
#include<iomanip> // setw

void Question1(){

    string studentName, studentGender, homeAddress;
    int studentAge;
    double eWallet;

    cout << "Student Name        :"; //Chan Xiao Wen\n
    getline(cin, studentName); // getline for string

    cout << "Student Gender      :"; //Female\n
    getline(cin, studentGender);

    cout << "Student Age         :"; //23\n
    cin >> studentAge; // \n
    /*1->number of character on the input buffer || \n -> encounter the first new line */
    cin.ignore(1,'\n'); // ignore the newline character,\n (OR cin.ignore(numeric_limits<streamsize>::max(), '\n')
    
    cout << "Student Home Address:"; // 75,jalan indah 5, taman pelangi\n
    getline(cin, homeAddress);
    
    cout << "E-wallet Amount     : RM"; //23.50 \n
    cin >> eWallet; //\n

    cout << " Student details as below:";
    cout << "\n=========================================================================================================";
    cout << "\n|Name\t\t\t| Age\t| Gender | Address\t\t\t\t\t|E-wallet amount|";
    cout << "\n=========================================================================================================";
    cout << "\n|" << left << setw(23) << studentName << "|" << setw(7) << studentAge << "|" << setw(8) << studentGender << "|"
    << setw(46) << homeAddress << "|" << setw(11) << "RM" << eWallet << "|";
    cout << "\n=========================================================================================================";

}





void Question2(){

    string studentName, studentGender, homeAddress;
    int studentAge;
    double eWallet;

    cout << "Student Name        :"; //Chan Xiao Wen\n
    getline(cin, studentName); // getline for string

    cout << "Student Gender      :"; //Female\n
    getline(cin, studentGender);

    cout << "Student Age         :"; //23\n
    cin >> studentAge; // \n
    /*1->number of character on the input buffer || \n -> encounter the first new line */
    cin.ignore(1,'\n'); // ignore the newline character,\n (OR cin.ignore(numeric_limits<streamsize>::max(), '\n')
    
    cout << "Student Home Address:"; // 75,jalan indah 5, taman pelangi\n
    getline(cin, homeAddress);
    
    cout << "E-wallet Amount     :RM"; //23.50 \n
    cin >> eWallet; //\n

    cout << "Press any key to continue . . .";
    getch();
    cout << "\nExecution halted.";
    
    //Printing Output
    cout << "\n======================================================================";
    cout << "\n| Student Details as below:                                          |";
    cout << "\n======================================================================";
    cout << "\n| Student Name        : " << setw(45) << studentName << "|";
    cout << "\n| Student Gender      : " << setw(45) << studentGender << "|";
    cout << "\n| Student Age         : " << setw(45) << studentAge << "|";
    cout << "\n| Student Home Address: " << setw(45) << homeAddress << "|";
    cout << "\n| E-wallet Amount     : RM " << setw(42) << eWallet << "|";
    cout << "\n======================================================================";

    /*setw -> set the width of the output OR formatting the alignment of the output 
    library: #include <iomanip>
    
    setfill('')-> fill up the empty space with the character*/ 

}

int main(){
    
    Question1();
    // Question2();
}