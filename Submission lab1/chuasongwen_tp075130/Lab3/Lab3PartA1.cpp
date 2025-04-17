# include <iostream>
using namespace std;

int arr [10];
void Input();
bool Duplicate(int number, int currentIndex);
void Output();

int main(){
    cout << "Enter 10 numbers: " << endl;
    Input();
    Output();
    return 0;
}

bool Duplicate(int number, int currentIndex) {
    //currentIndex just check index before
    for (int i = 0; i < currentIndex; i++) {
        if (arr[i] == number) {
            return true; 
        }
    }
    return false; 
}

// bool Duplicate(){
//     for (int i = 0; i < 10; i++){
//         for (int j = i + 1; j < 10; j++){
//             if (arr[i] == arr[j]) {
//                 return true;
//             }else{
//                 return false;
//             }
//         }
//     }
// }

void Input(){
    int i = 0;
    int number;
    while(i<10){
        cout << "Enter number " << i+1 << ": ";
        cin >> number;
        if (Duplicate(number, i)){
            cout << "Duplicate number, try again.\n ";
            
        }else{
            arr[i] = number;
            i++;
        }
    }
}

void Output(){
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}
