#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    int t; // Counter for uppercase letters

    cout << "Enter a string: ";
    cin.getline(str, 100); // Get input from user

    // Loop through the array and count uppercase letters
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            count++;

    cout << "The number of uppercase letters is " << count << endl;

    return 0;
}








// bool isValidTime(int hh, int mm, int ss){
//     return(hh >= 0 && hh < 24)
// }
// //function without parameter
    // string name;
    // string gender;
    // int age;
    // string address;
    // double EwalletAmount;

    // cout<<"hello! please enter your name: " <<"\n";
    // cin>> name;

    // cout<<"please enter your gender: " <<"\n";
    // cin>> gender;

    // cout<<"please enter your age: " <<"\n";
    // cin>> age;

    // cout<<"please enter your home address: " <<"\n";
    // cin>> address;

    // cout<<"please enter your E-wallet Amount: " <<"\n";
    // cin>> EwalletAmount;

    // cout<<"Student Name                  :"<<name<<"          \n";
    // cout<<"Student Gender                :"<<age<<"           \n";
    // cout<<"Student Age                   :"<<gender<<"        \n";
    // cout<<"Student Home Address          :"<<address<<"       \n";
    // cout<<"E-wallet Amount               :"<<EwalletAmount<<" \n"; 

    // cout<<"Student details as below:" <<"\n";
    // cout<<"============================================================================\n";
    // cout<<"|Name       |Age         |Gender       |Address        |E-wallet Amount    |\n";
    // cout<<"============================================================================\n";
    // cout<<"|"<<name<<"      |"<<age<<"          |"<<gender<<"         |"<<address<<"       |"<<EwalletAmount<<"                |\n";                                                                           "|";
    // cout<<"============================================================================\n";
