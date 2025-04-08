#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string studentName,studentGender,studentHomeAddress;
    int studentAge;
    double eWallterAmmount;
    cout<<"What is your Name?"<<endl;
    cin>>studentName;
    cout<<"What is your age?"<<endl;
    cin>>studentAge;
    cout<<"What is your Gender?"<<endl;
    cin>>studentGender;
    cout<<"What is your Address?"<<endl;
    cin>>studentHomeAddress;
    cout<<"What is your e-wallet amount?"<<endl;
    cin>>eWallterAmmount;

    int tableWidth = 41;
    cout<<"Please enter aby key to continue......";
    cin.get();
    cout<<endl
        <<string(tableWidth,'=')<<endl  
        << setw(40)<<left<<"Student Details as Below:"<<"|"<<endl
        <<string(tableWidth,'=')<<endl
        <<"|" << setw(18)<< left<<"Name      :"        <<setw(20)<<right<<studentName<<"|"<<endl
        <<"|" << setw(18)<< left<<"Age       :"        <<setw(20)<<right<<studentAge<<"|"<<endl
        <<"|" << setw(18)<< left<<"Gender    :"        <<setw(20)<<right<<studentGender<<"|"<<endl
        <<"|" << setw(18)<< left<<"Address   :"        <<setw(20)<<right<<studentHomeAddress<<"|"<<endl
        <<"|" << setw(18)<< left<<"E-wallet  :RM"        <<setw(20)<<right<<eWallterAmmount<<"|"<<endl
        <<string(tableWidth,'=')<<endl;


    return 0;
}