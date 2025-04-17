# include <iostream>
using namespace std;

int billy [] = {4, 2, 1, 3, 5};
void bubbleSort();
int main(){
    
    bubbleSort();
    for (int i = 0; i < 5; i++){
        cout << billy[i] << " ";
    }
    return 0;
}

void bubbleSort(){
    int n = sizeof(billy) / sizeof(billy[0]);

    // Outer loop to control number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparison and swapping
        for (int j = 0; j < n - i - 1; j++) {
            if (billy[j] > billy[j + 1]) {
                // Swap elements
                int temp = billy[j];
                billy[j] = billy[j + 1];
                billy[j + 1] = temp;
            }
        }
    }
    // for (int j = 0; j < n- 1; j++) {
    //   if (billy[j] > billy[j+1]) {
    //     int temp = billy[j];
    //     billy[j] = billy[j+1];
    //     billy[j+1] = temp;
    //   }
    // }
}