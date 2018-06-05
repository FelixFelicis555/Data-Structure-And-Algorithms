//deleting a node
#include<bits/stdc++.h>
#include<string>
using namespace std;
struct Node{
//string name;
int roll;
Node* next;
};

struct Node* head;

void insert(int x){
Node *temp=new Node;
//temp->name=name;
temp->roll=x;
temp->next=NULL;
if(head==NULL){
    head=temp;
    cout<<"inserted"<<endl;
}
else{
    temp->next=head;
    head=temp;
    cout<<"inserted"<<endl;
}
}
void print(){
struct Node* temp;
    temp=head;
    if(head==NULL){
        cout<<"Empty linked list"<<endl;
    }
    else{
        while(temp!=NULL){
            cout<<temp->roll<<endl;
            temp=temp->next;
        }
    }



}
int main(){
int n,r;
head=NULL;
cout<<"How many students: ";
cin>>n;
cout<<"Start inserting"<<endl;
while(n--)
{
    cin>>r;
    insert(r);
}
print();

}
