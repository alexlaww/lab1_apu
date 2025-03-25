# include <iostream> 
# include <sstream>


using namespace std;

bool isValidTime(int hh, int mm, int ss){
    return (hh >= 0 && hh < 24) && (mm >=0 && mm < 60) && (ss >=0 && ss <60);
}


int main() {
    string timeInput;
    int hh, mm, ss;
    char colon1;

    while (true){
        cout << "Enter time (HH:MM:SS) = ";
        getline(cin, timeInput);

        stringstream ssInput(timeInput);
        if (ssInput >> hh >> colon1 >> mm >> colon1 >> ss 
            && colon1 == ':' 
            && isValidTime(hh,mm,ss)){
               break;
            }
        cout << "Invalid input! Please enter time in HH:MM:SS format (24-hour format).\n";  
    }
    
    int totalSecond = hh * 3600 + mm * 60 + ss;

    cout << "Second since midnight: " << totalSecond << " second\n";

    return 0;
}