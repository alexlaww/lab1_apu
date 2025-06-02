# include <iostream>
using namespace std;

void reverseDisplayNumber(int number1, int number2, int number3);
int reverseDisplayNumberandSum(int number1, int number2);
int main(){
    int startvalue, endvalue;
    cout << "Enter the start value: ";
    cin >> startvalue;
    cout << "Enter the end value: ";
    cin >> endvalue;
    cout << endl;

    reverseDisplayNumber(startvalue,endvalue,startvalue);
    cout << "=" << reverseDisplayNumberandSum(startvalue, endvalue) << endl;
    return 0;

}

//Recursion instead of Repetition loop
void reverseDisplayNumber(int number1, int number2, int number3){
    if (number2<number1){//base case, stop recursion
        return;
    }
    if (number2==number1){
        cout << number2;
    }else{
        cout << number2 << "+";
    }
    reverseDisplayNumber(number1, number2-1, number3);//next recursion number2-1 update to number2
}

int reverseDisplayNumberandSum(int number1, int number2){
    if(number1>number2){
        return 0;
    }
    
    return number2+reverseDisplayNumberandSum(number1, number2-1);
}