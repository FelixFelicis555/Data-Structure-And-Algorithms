//insert element at the end of the linked list and
// print all the elements of linked list.
#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
struct node *head;
void print(){
    node *temp=head;
    cout<<"Printing the element"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
void insert(int x){
    node *temp=new node;

    temp->data=x;
    if(head==NULL){
        head=temp;
    }
    else{
        struct node* a=head;
        while(a->next!= NULL){

            a=a->next;
            cout<<"hi ";
        }
        temp->next=NULL;
        a->next=temp;
    }
}
int main(){

    head=NULL;
int n,a;
cout<<"Number of character to inserted :"<<endl;
cin>>n;
cout<<"Start insertion :"<<endl;
while(n--)
{
    cin>>a;
    insert(a);
}
print();







return 0;
}

