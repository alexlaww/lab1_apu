#include<iostream>
using namespace std;
//Count Uppercase, Lowercase, special character and numeric values
void count(string str){
   int Uppercase = 0;

   for (int i = 0; i < str.length(); i++){
      if (str[i] >= 'A' && str[i] <= 'Z'){   // access them at ASCII value if between 65 and 90
         Uppercase++;
      }
      else{
         break;
      }
   }
   cout<<"Total Upper case letters in a string are: "<<Uppercase<< endl;
}

int main(){
    string str;
    cout << "Enter your sentence: ";
    cin >> str;
    count(str);
    return 0;
}