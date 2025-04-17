# include <iostream>
using namespace std;

int arr [10];
void Input();
bool LinearSearch(int number, int currentSize);
void Output();

int main(){
    cout << "Enter 10 numbers: " << endl;
    Input();
    Output();
    return 0;
}

bool LinearSearch(int number, int currentSize) {
    // Only check elements up to the current size of the filled array
    for (int i = 0; i < currentSize; i++) {
        if (arr[i] == number) {
            return true; // Found a duplicate
        }
    }
    return false; // No duplicate found
}

//wrong
//the function is checking all 10 positions, and if any position that hasn't been assigned yet happens to contain 0
//it will incorrectly flag your input as a duplicate.
// bool LinearSearch(int number) {
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == number) {
//             return true; 
//         }
//     }
//     return false; 
// }

void Input(){
    int i = 0;
    int number;
    while(i<10){
        cout << "Enter number " << i+1 << ": ";
        cin >> number;
        if (LinearSearch(number, i)){
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
