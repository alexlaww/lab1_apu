#include <iostream> 

using namespace std;  
 
const int NUMBER = 12;

/*int main() { 
    int firstNum; 
    int secondNum;
    firstNum = 18;  
    cout << "Line 9: firstNum = " << firstNum
<< endl; 
    cout << "Line 10: Enter an integer: ";  
    cin >> secondNum; 
    cout << endl;  
    cout << "Line 13: secondNum = " << secondNum 
<< endl;
    firstNum = firstNum + NUMBER + 2 * secondNum; 
    cout << "Line 15: The new value of "
<< "firstNum = " << firstNum << endl;
    return 0;

}*/

//Activity 1
/*int main() {
        int feet inches;
        double centimeters;
   
        cout << "Enter length in feet: ";
        cin >> feet;
    
        cout << "Enter additional inches";
        int total_inches = (feet * 12) + inches;

        centimeters =total_inches * 2.54;

        cout << "Equivalent length in centimeters: " << centimeters << " cm" << endl;
    
        return 0;
}*/

//Activity 2
/*int main(){
//1
    int num1;
    cout << "Enter a number:";
    cin >> num1;

    if(num1 > 0){
        cout <<"1"<<endl;
    }else{
        cout <<"0"<<endl;
    }
//2
    double score;
    cout << "Enter a score:";
    cin >> score;

    if(score >= 80 && score <= 90){
        score += 5;
    }cout <<"The total score is: " << score <<endl;
//3
    int x, y;
    cout << "Enter a number: ";
    cin >> x;

    if(x%2 ==0 && x>0){
        cout << "true"<<endl;
    }else{
        cout << "false"<<endl;
    }
//4
    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;

    if(x>0 && y>0){
        cout << "true"<<endl;
    }else{
        cout << "false"<<endl;
    }
//5
    int speed;
    cout << "Enter speed; ";
    cin >> speed;

    if(speed>55){
        cout << "Ticket = 1"<<endl;
    }else{
        cout << "Ticket = 0"<<endl;
    }

}*/
     

int main(){
    int grade;
    switch(grade){
    case 'A':
        cout << "The grade is 4.0" << endl;
        break;
    case 'B':
        cout << "The grade is 3.0" << endl;
        break;
    case 'C':
        cout << "The grade is 2.0" << endl;
        break;
    case 'D':
        cout << "The grade is 1.0" << endl;
        break;
    case 'F':
        cout << "The grade is 0.0" << endl;
        break;
    default:
        cout << "The grade is invalid" << endl;
    }
}

 