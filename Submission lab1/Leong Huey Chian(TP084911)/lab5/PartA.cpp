#include <iostream>
#include <string>
using namespace std;

/*
//1
int main()
{
 // Simple declarations
 string word = "abc";
 int integer = 1;
 float real = 10.4f;
 long long biginteger = 989898989ll;

 // Print variable value with their memory address
 string *w=&word;
 int *i=&integer;
 float *f=&real;
 long long *l=&biginteger;

 cout<<"Value of character = "<<*w<<", Address of character = "<<w<<endl;
 cout<<"Value of integer = "<<*i<<", Address of integer = "<<i<<endl;
 cout<<"Value of real = "<<*f<<", Address of real = "<<f<<endl;
 cout<<"Value of biginteger = "<<*l<<", Address of biginteger = "<<l<<endl;

 //complete this section

 return 0;
}
*/
//2
int main(){
 int num = 10;
 int * ptr;

 /* Stores the address of num to pointer type */
 ptr = &num;

 cout << "Address of num  = " << &num << endl;
 cout << "Value of num  = " << num << endl << endl;

 cout << "Address of ptr = " << &ptr << endl;
 cout << "Value of ptr = " << ptr << endl;
 cout << "Value pointed by ptr = " << *ptr << endl;

 return 0;
}

/*
//try yourself Part A
//1
int main(){

    int num1,num2,sum;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;

    cout<<"Enter any two numbers :";
    cin>>num1>>num2;

    cout<<"Address of num1 = "<<&num1;
    cout<<" ; Value of num1 = "<<num1<<endl;
    cout<<"Address of num2 = "<<&num2;
    cout<<" ; Value of num2 = "<<num2<<endl;
    cout<<"Address of ptr1 = "<<ptr1;
    cout<<" ; Value of ptr1 = "<<*ptr1<<endl;
    cout<<"Address of ptr2 = "<<ptr2;
    cout<<" ; Value of ptr2 = "<<*ptr2<<endl;
    sum=num1+num2;
    cout<<"Sum = "<<sum<<endl;

return 0;
}

/*
//2
void swap(int *n1,int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
    cout<<"\nAfter swapping in swap function:"<<endl;
     cout<<"Value of value1 = "<<*n1<<endl;
     cout<<"Value of value2 = "<<*n2<<endl;
}

int main(){
     int numb1,numb2,temp;
    cout<<"Enter any two numbers :";
    cin>>numb1>>numb2;

     cout<<"Before swapping in main function:"<<endl;
     cout<<"Value of value1 = "<<numb1<<endl;
     cout<<"Value of value2 = "<<numb2<<endl;
     swap(&numb1,&numb2);
     cout<<"\nAfter swapping in main function:"<<endl;
     cout<<"Value of value1 = "<<numb1<<endl;
     cout<<"Value of value2 = "<<numb2<<endl;
    return 0;
}
*/
