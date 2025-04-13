# include <iostream>
using namespace std;

int num=2;
int main(){
    for (int r = 0; r < 5; r++){
        for (int c = 0; c < 5; c++){
            cout<<num<<"\t";
            num+=2;
        }
        cout<<endl;
            
    }
    
    return 0;
}