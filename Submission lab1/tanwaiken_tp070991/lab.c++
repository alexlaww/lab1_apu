#include<iostream>
using namespace std;   

int sum();

int main() {
    string food = "Pizza";
    cout << "I love " << *&food << endl;
}


int sum(){
    return 10;
}