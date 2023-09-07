#include <iostream>
using namespace std;


struct node{
int data;
struct node *next;
};
struct node *start=nullptr,*nn,*temp;

void insert_beg(int x){
nn=new node;
nn->data=x;
if(start==nullptr){
    nn->next=nullptr;
    start=nn;

}
else{
    nn->next=start;
    start=nn;
}
}

void display(){
    temp=start;
    while(temp!=nullptr){
    cout<<"address of "<<temp->data<<"is: "<<temp<<endl;
    cout<<"the next address is: "<<temp->next<<endl;
    temp=temp->next;
    }
}

int main(){
    insert_beg(10);
     insert_beg(20);
     display();
}
