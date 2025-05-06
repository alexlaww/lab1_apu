#include<iostream>
using namespace std;

bool duplicate(int ary[],int u,int num){
    for(int i=0;i<u;i++){
        if(ary[i]== num)
            return true;
    }
    return false;
}

int binarySearch(int ary[],int size,int goal){
    int h=0,l=size-1,mid;
    while(h<=l){
        mid=(h+l)/2;
        if(ary[mid]==goal){
            return mid;
        }else{
            if(goal<ary[mid]){
                l=mid-1;
            }else if(goal>ary[mid]){
                h=mid+1;
            }
        }
    }
    return -1;
}

int linearSearch(int ary[],int size,int goal){

    for(int i=0;i<size;i++){
        if(ary[i]==goal)
            return i;
    }
    return -1;
}

//insertsort
void sortary(int *ary,int size){
    int temp;
     for(int i=0;i<size;i++){

         for(int u=i;u>0;u--){

            if(ary[u]<ary[u-1]){

                temp=ary[u];
                ary[u]=ary[u-1];
                ary[u-1]=temp;
         }
        }
     }
}

int main(){
    int num[10],temp,goal;
    for(int i=0;i<10;i++){
        cout<<"Enter value "<<i+1<<": ";
        cin>>temp;
        if(duplicate(num,i,temp)){
           cout<<"Value already in the list !Please choose other value!"<<endl;
           i--;
           }else{
            num[i]=temp;
           }
    }
    sortary(num,10);

    for(int o=0;o<10;o++){
        cout<<num[o]<<" ";
    }

    cout<<"\nEnter the number u want to search :";
    cin>>goal;
    int index=binarySearch(num,10,goal);
    if(index==-1)
        cout<<"sorry not found.";
    else
        cout<<"The number is at index :"<<index;
}
