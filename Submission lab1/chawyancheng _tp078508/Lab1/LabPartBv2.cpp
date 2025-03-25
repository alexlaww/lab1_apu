#include<iostream>

using namespace std;

int main(){
    int num[3];
    int sum = 0;

    for (int i =0; i < 3; i++){
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> num[i];
        cout <<endl;

    }
    sum += (num[0] * 3600) + (num[1] * 60) + num[2];

    cout << "Elapsed time is: " << sum << "seconds" << endl;

    return 0;
}