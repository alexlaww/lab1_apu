#include<iostream>
using namespace std;

int main(){
    int arr[4][5] = {{1, 2, 3, 4, 5}, {10,9,8,7,6}, {11, 12, 13, 14, 15}, {20,19,18,17,16}};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}