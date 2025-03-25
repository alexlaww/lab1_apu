#include <iostream>

using namespace std;

int main(){
    bool ships[4][4]={
        {0,0,1,0},
        {0,0,0,0},
        {1,0,0,1},
        {0,0,1,0}
    };

    int hits = 0, turn = 0, row, col;

    while (true){

        cout << "Enter row: ";
        cin >> row;
        cout << "Enter column: ";
        cin >> col;
    
        if(ships[row-1][col-1]){
            ships[row-1][col-1] = 0;
            hits++;
            cout << "Hit! Ship left: " << 4-hits << "\n";
        }else{
            cout << "Miss\n";
        }
    
        turn++;
    
        if(hits==4){
            cout << "You win!\n";
            break;
        }
    }
}