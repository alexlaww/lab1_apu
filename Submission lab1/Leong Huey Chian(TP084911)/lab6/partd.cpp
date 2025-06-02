#include<iostream>
#include<iomanip>
using namespace std;

struct Node{
    string name;
    string song;
    int year,no;
    string genre;
    double length;
    Node *next;
};

class llist{
    Node *head;
    Node * tail;
    Node * temp;

public:
    llist(){
    head=tail=temp=nullptr;
    }

    int empty(){
        if(head==nullptr)
            return 1;
        return 0;
    }

    void push(int i,string a,string b,int c,string d,double e){
        if(empty()){
            head= new Node;
            tail=head;
        }else{
            tail->next=new Node;
            tail=tail->next;
        }
            tail->no=i;
            tail->name=a;
            tail->song=b;
            tail->year=c;
            tail->genre=d;
            tail->length=e;
            tail->next=nullptr;
    }
    void pushFront(int i,string a,string b,int c,string d,double e){
        temp=new Node;
        temp->no=i;
        temp->name=a;
        temp->song=b;
        temp->year=c;
        temp->genre=d;
        temp->length=e;
        temp->next=head;
        if(empty()){
        head=tail=temp;
        }else{
            head=temp;
        }

    }

    void pop(){
        if(temp!=nullptr){
            cout<<temp->no<<" | "<<temp->name<<" | "<<setw(10)<<temp->song<<" | "<<setw(10)<<
            temp->year<<" | "<<setw(10)<<temp->genre<<" | "<<setw(10)<<temp->length<<" | ";
            temp=temp->next;
        }else{
            cout<<"The list is empty.";
        }
    }
    void print(){
        cout<<"No|"<<setw(10)<<"Artist|"<<setw(10)<<"Song |"<<setw(10)<<"Released |"<<setw(10)<<"Genre |"<<setw(10)<<"Length |"<<endl;
        int i=0;
        temp=head;
        while(temp!=nullptr){
            i++;
            pop();
            cout<<endl;
        }
    }

    void add(int c){
        string name,song,genre;
        int year,no;
        double length;
        cout<<"No : ";
        cin>>no;
        fflush(stdin);
        cout<<"Artist : ";
        getline(cin,name);
        cout<<"Song : ";
        getline(cin,song);
        cout<<"Released : ";
        cin>>year;
        fflush(stdin);
        cout<<"Genre : ";
        getline(cin,genre);
        cout<<"Length : ";
        cin>>length;
        if(c==1){
            pushFront(no,name,song,year,genre,length);
        }else{
            push(no,name,song,year,genre,length);
        }
}

};

void menu(){
    cout<<"\n1.Add in front"<<endl;
    cout<<"2.Add to back"<<endl;
    cout<<"3.Print"<<endl;
}


int main(){

    llist l;
    l.push(1,"Celine Dion","Just Walk Away",1993,"Pop",4.58);
    l.push(2,"Taylor Swift","You Belong With Me",2008,"Pop",3.48);
    l.push(3,"The Cranberries","Promises",1999,"Rock",4.30);
    int c=0;
    do{
        menu();
        cout<<"Choose :";
        cin>>c;
        if(c==1||c==2){
            l.add(c);
        }else if(c==3){
            l.print();
        }
    }while(c<4);



}
