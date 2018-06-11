#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
void insert(int x,node *head){
node *temp=new node;
temp->data=x;
temp->next=NULL;
if (head==NULL){
    head=temp;
    cout<<"i";
}
else{
    temp->next=head;
    head=temp;
    cout<<"p";
}



}
void print(node *head){
node *temp;
temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;

}
int main(){

    node *head=NULL;
insert(1,head);
insert(2,head);
insert(3,head);

print(head);

}



