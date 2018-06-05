//Insertion of element at the beginning and print the element of linked list
#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};
struct node* head;

void print(node *n){


}
void insert(int x){
node *temp=new node;//created a node by giving memory in heap.
temp->data=x
if(head==NULL){
    head=temp;
}
else{
    temp->next=head;
    head=temp;
}



}
int main(){
int n,a;
head=NULL;
cout<<"How many to insert: "<<endl;
cin>>n;
cout<<"Start inserting "<<endl;
whie(n--){
cin>>a;
insert(a);
}
//print();

return 0;}
