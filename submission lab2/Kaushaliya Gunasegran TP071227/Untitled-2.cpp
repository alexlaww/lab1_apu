
#include <iostream>
#include <climits> //For INT_MIN
using namespace std;

int main(){
    int arr[]={12,35,1,10,34,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    if(n<2){
        cout<<"Array should have at least two elements"<<end;
        return-1;
    }

    int max1 = INT_MIN,max2=INT_MIN;

    //Traverse the array
    for (int i=0; i<n; i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2&&arr[i]!=max1){
            max2=arr[i];
        }
    }

    if(max2==INT_MIN){
        cout<<"No second maximum value,"<<end;    
    }else{
        cout<<"Maximum:"<<max1<<end;
        cout<<"Second Maximum:"<<max2<<end;
    }

    return 0;
}