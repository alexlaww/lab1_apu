#include<iostream>
using namespace std;

//sorting
void insertionSort(int ary[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i;j>0;j--){
            if(ary[j]<ary[j-1]){
                temp=ary[j];
                ary[j]=ary[j-1];
                ary[j-1]=temp;
            }
        }
    }
}

void bubbleSort(int ary[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(ary[j]>ary[j+1]){
                temp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }
}

int main(){
    int bubble[] = {4,2,1,3,5};
    int insertsort[]={4,2,1,3,5};

    cout<<"Before Sort:"<<endl;
    for(int i=0;i<5;i++){
        cout<<bubble[i]<<" ";
    }

    bubbleSort(bubble,5);
    cout<<"\nBubble Sort:"<<endl;
    for(int i=0;i<5;i++){
        cout<<bubble[i]<<" ";
    }

    insertionSort(insertsort,5);
    cout<<"\nInsertion Sort:"<<endl;
    for(int i=0;i<5;i++){
        cout<<insertsort[i]<<" ";
    }

}
