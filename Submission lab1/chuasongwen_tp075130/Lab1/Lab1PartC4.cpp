# include <iostream>
using namespace std;

void draw(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";           
        }
        for (int j=0; j<(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl; 
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<(n-i);j++){
            cout<<" ";
        }
        for(int j=0;j<(i*2-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
   
}

int main(){
    cout<<"Enter number of rows (for diamond (triangle) dimension): ";
    int n;
    cin>>n;
    draw(n);

    return 0;
}