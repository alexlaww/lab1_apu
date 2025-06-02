# include <iostream>
using namespace std;

int billy [] = {4, 2, 1, 3, 5};
void insertionSort();
int main(){

    insertionSort();
    for (int i = 0; i < 5; i++){
        cout << billy[i] << " ";
    }
    return 0;
}

void insertionSort(){
    int key, i, j;
    for (i = 1; i < 5; i++){
        key = billy[i];
        j = i - 1;

        while(billy[j]>key){
            key = billy[j];
            j-=1;
        }
        billy[j+1] = key;
    }
    
}