#include <iostream>
using namespace std;
int main(){
    int row=6,u;
    cout<<"Enter number of rows(for diamond (triangle) dimension) : ";
    cin>>row;
    row*=2;

    for(int i=1;i<=row/2;i++){
        for(u=0;u<row;u++){
            if(u>(row/2)-i&&u<(row/2)+i){
             cout<<"*";
            }else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=(row/2)-1;i>0;i--){
        for(u=row;u>0;u--){
            if(u>(row/2)-i&&u<(row/2)+i){
             cout<<"*";
            }else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}
