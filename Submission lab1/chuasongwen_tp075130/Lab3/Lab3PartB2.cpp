# include <iostream>
# include <random>
# include <string>
using namespace std;

int Input;
// int arr[];
int* arr;

void BuildArray();
void PrintStar(int count);
void DiffElements();
void CheckRange();

int main(){
    cout << "Enter the number of elements in the array: ";
    cin >> Input;
    cout << "Array: " << endl;
    arr = new int[Input];
    BuildArray();
    cout << string(50,'-') << endl;
    DiffElements();
    cout << string(50,'-') << endl;
    CheckRange();

    delete[] arr; //fix

    return 0;
}

void BuildArray(){

    random_device rd; //fix
    mt19937 gen(rd()); //fix
    uniform_int_distribution<> distr(1, 50); //fix

    for (int i = 0; i < Input; i++){
        arr[i] = distr(gen); //fix
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

void PrintStar(int count){
    for (int i = 0; i < count; i++){
        cout << "* ";
    }
    cout << endl;
}

void DiffElements(){
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;

    for (int i = 0; i < Input; i++){

        if(arr[i] >= 1 && arr[i] <= 10){ 
            count1++;
        }else if(arr[i] >= 11 && arr[i] <= 20){
            count2++;
        }else if(arr[i] >= 21 && arr[i] <= 30){
            count3++;
        }else if(arr[i] >= 31 && arr[i] <= 40){
            count4++;
        }else if(arr[i] >= 41 && arr[i] <= 50){
            count5++;
        }else{
            cout << "Error";
        }

        // if(i>=1 && i<=10){
        //     count1++;
        // }else if(i>=11 && i<=20){
        //     count2++;
        // }else if(i>=21 && i<=30){
        //     count3++;
        // }else if(i>=31 && i<=40){
        //     count4++;
        // }else if(i>=41 && i<=50){
        //     count5++;
        // }else{
        //     cout << "Error";
        // }
    }

    cout << "1-10: " << count1 << endl;
    PrintStar(count1);
    cout << "11-20: " << count2 << endl;
    PrintStar(count2);
    cout << "21-30: " << count3 << endl;
    PrintStar(count3);
    cout << "31-40: " << count4 << endl;
    PrintStar(count4);
    cout << "41-50: " << count5 << endl;
    PrintStar(count5);
    
}

void CheckRange(){
    cout << "Number between 41-50: " << endl;
    for (int i = 0; i < Input; i++){ 
        if(arr[i] >= 41 && arr[i] <= 50){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    // for (int i : arr){
    //     if(i>=41 && i<=50){
    //         cout << i << " ";
    //     }
    // }
}