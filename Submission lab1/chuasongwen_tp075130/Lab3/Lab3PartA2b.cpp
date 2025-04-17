# include <iostream>
using namespace std;

int arr [10];
void Input();
bool BinarySearch(int number, int currentSize);
void Output();

int main(){
    cout << "Enter 10 numbers: " << endl;
    Input();
    Output();
    return 0;
}

bool BinarySearch(int number, int currentSize) {
    int bottom = 0;
    int top = currentSize - 1;

    while(bottom <= top) {
        int mid = (bottom + top) / 2;
        if(arr[mid] == number){
            return true;
        }
        else if(arr[mid] < number){
            bottom = mid + 1;
        }
        else {
            top = mid - 1;
        }

    }
    return false;
}

void Input(){
    int i = 0;
    int number;
    while(i<10){
        cout << "Enter number " << i+1 << ": ";
        cin >> number;
        if (BinarySearch(number, i)){
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
