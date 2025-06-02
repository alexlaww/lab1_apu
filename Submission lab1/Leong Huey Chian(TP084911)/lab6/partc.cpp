#include<iostream>
using namespace std;

struct Node{
    int data;
    string name;
    int age;
    Node *next;
};

class LinkList{
    Node *head,*tail,*temp;

public:
    LinkList(){
    head=tail=nullptr;
    }
    int empty(){
        if(head==nullptr){
            return 1;
        }
        return 0;
    }

    void append(int data,string name,int a){
        if(empty()){
            head=new Node;
            tail=head;

        }else{
            tail=head;
            while(tail->next!=nullptr){
                tail=tail->next;
            }
            tail->next=new Node;
            tail=tail->next;
        }
            tail->data=data;
            tail->name=name;
            tail->age=a;
            tail->next=nullptr;
    }
    void pushfront(int data,string name,int a){
            temp=new Node;
            temp->data=data;
            temp->name=name;
            temp->age=a;
            temp->next=head;
            head=temp;
    }

    void pop(){
        if(empty()){
            cout<<"Error!The list is empty."<<endl;
        }else{
            tail=head;
            while(tail->next!=nullptr){
                temp=tail;
                tail=tail->next;
            }
            cout<<tail->data<<" ";
            cout<<tail->name<<" ";
            cout<<tail->age<<" ";
            temp->next=nullptr;

        }
    }

    void popfront(){
        if(empty()){
            cout<<"Error!The list is empty."<<endl;
        }else{
            cout<<head->data<<" ";
            cout<<head->name<<" ";
            cout<<head->age<<" ";
            head=head->next;
        }
    }

    void print(){
        int i=0;
        while(!empty()){
            i++;
            cout<<"Student "<<i<<": ";
            popfront();
            cout<<endl;
        }
    }



};

int main(){

    LinkList prt;
    prt.append(123,"Leong",18);
    prt.append(456,"Huey",20);
    prt.print();

return 0;
}
