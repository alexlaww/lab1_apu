# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    for (int i=1; i<=50;i++){
        cout << fixed << left << setw(5);
        if (i%2 == 0){
            cout << i;
        }
        if (i%10 == 0){
            cout << "\n";
        }

    }
}