#include <iostream>
#include <iomanip>
using namespace std;

/*
// Write your function prototype here
void convert(double *m);

int main ()
{
double measurement;
cout << "Enter a length in inches, and I will convert\n";
cout << "it to centimeters: ";
cin >> measurement;
convert(&measurement);
cout << fixed << setprecision(4);
cout << "Value in centimeters: " << measurement << endl;
}

// Write your function convert here
void convert(double *m){
    *m*= 2.54;
}
*/

//q2
double getLength(){
    double l;
    cout<<"Enter the length : ";
    cin>>l;
    return l;
}

double getWidth(){
    double l;
    cout<<"Enter the width : ";
    cin>>l;
    return l;
}

double getArea(double l,double w){

    return l*w;
}

void displayData(double l,double w,double &a){
    cout<<"\nLength = "<<fixed<<setprecision(2)<<l<<endl;
    cout<<"Width = "<<fixed<<setprecision(2)<<w<<endl;
    cout<<"Area = "<<fixed<<setprecision(2)<<a<<endl;
}
/*
int main(){
    double l,w,area;

    l=getLength();
    w=getWidth();
    area=getArea(l,w);
    displayData(l,w,area);
    return 0;
}
*/
/*
//3
double clacAverage(double r[],int s){
    double sum=0;
    for(int i=0;i<s;i++){
        sum+=r[i];
    }
    return sum/s;
}

double findLowest(double r[],int s){
    double mini=r[0];
    for(int i=1;i<s;i++){
        if(r[i]<mini)
            mini=r[i];
    }
    return mini;
}

int main(){
    int s,pass=0;
    do{
    cout<<"Enter the number of subjects :";
    cin>>s;
    if(s<0)
        pass=1;
    }while(pass);

    double r[s];
    do{
    cout<<"Enter the elements of array :";
    for(int i=0;i<s;i++){
        cin>>r[i];
        if(r[i]<0){
           pass=1;
           break;
           cout<<"Cannot negative value!!";
        }
    }
    }while(pass);

    cout<<"The average score ="<<clacAverage(r,s)<<endl;
    cout<<"The minimum score ="<<findLowest(r,s)<<endl;


}
*/
//4

void calResult(char a[],char in[],int s){
    int total=0;
    for(int u=0;u<s;u++){
        if(in[u]==a[u]){
            total++;
        }
    }

    cout<<"correct : "<<total<<" /20"<<endl;
    if(total>=15){
        cout<<"pass"<<endl;
    }else{
        cout<<"fail"<<endl;
    }
}

int main(){
 char *ans[20]={"b","d","a","a","c","a","b","a","c","d","b","c","d","a","d","c","c","b","d","a"};
 char in[20];

 for(int i=0;i<20;i++){
    cout<<"Question "<<i+1<<" : ";
    cin>>in[i];
    if(in[i]!='a'&&in[i]!='b'&&in[i]!='c'){
        cout<<"Invalid answer"<<endl;
        i--;
    }
 }
calResult(*ans,in,20);

}
