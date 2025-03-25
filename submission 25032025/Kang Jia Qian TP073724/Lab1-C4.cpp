# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    int n;

    cout << "Enter number of rows (for diamond (triangle) dimension) : ";
    cin >> n;
    int w = n*2-1;

    for (int i = 1; i <= w; i += 2) {  
        for (int j = 0; j < (w - i) / 2; j++) {
            cout << " "; 
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = w - 2; i >= 1; i -= 2) {  
        for (int j = 0; j < (w - i) / 2; j++) {
            cout << " "; 
        }
        for (int j = 0; j < i; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
}