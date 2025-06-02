#include<iostream>
using namespace std;
#define size 5

double quizToPercent(double q){
    return q*20/100;
}

double midTermToPercent(double q){
    return q*50/100;
}

double FinalToPercent(double q){
    return q*40/100;
}

char Checkgrade(double q){
    if(q>=90)
        return'A';
    else if(q>=70)
        return 'B';
    else if(q>=50)
        return 'C';
    else
        return 'F';

}


int main(){
    string name[size]={"Tan","Lim","Jason","Monday","Holiday"};
    string id[size]={"TP1","TP2","TP3","TP4","TP5"};
    double score[size][3]={{70,88,45},{88,66,70},{45,55,66},{22,66,34},{55,88,94}};
    int scoreA=0,scoreB=0,maxin,minin;
    double q,m,f,total,maxs=0,mins=100;
    char g;

    cout<<"Student Name\t|StudentTP\t|Quiz(20)\t|MidTerm(50)\t|Final Exam(40)\t|Total Score(100)\t|Grade\t|"<<endl;
    for(int i=0;i<size;i++){
        cout<<name[i]<<"\t\t|"<<id[i]<<"\t\t|";
        q=quizToPercent(score[i][0]);
        m=midTermToPercent(score[i][1]);
        f=FinalToPercent(score[i][2]);
        cout<<q<<"\t\t|";
        cout<<m<<"\t\t|";
        cout<<f<<"\t\t|";
        total=q+m+f;
        if(total>maxs){
            maxs=total;
            maxin=i;
        }
        if(total<mins){
            mins=total;
            minin=i;
        }
        g=Checkgrade(total);
        if(g=='A')
            scoreA++;
        else if(g=='B')
            scoreB++;
        cout<<total<<"\t\t\t|";
        cout<<g<<"\t|";
        cout<<endl;
    }

    cout<<endl;
    cout<<"The highest score :"<<endl;
    cout<<"Name :"<<name[maxin]<<endl;
    cout<<"Total mark :"<<maxs<<endl<<endl;

    cout<<"The lowest score :"<<endl;
    cout<<"Name :"<<name[minin]<<endl;
    cout<<"Total mark :"<<mins<<endl<<endl;
    fflush(stdin);
    cout<<"The total number of student get A :"<<scoreA<<endl;
    cout<<"The total number of student get B :"<<scoreB<<endl;



}
