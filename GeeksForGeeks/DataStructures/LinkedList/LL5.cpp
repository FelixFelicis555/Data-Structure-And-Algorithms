#include<bits/stdc++.h>
using namespace std;

struct Node{
int val;
Node* next;
};

Node *head;

void print(){
     Node *temp;
     temp=head;
     while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
     }
     cout<<"\n";
}

int length(){
    Node *temp=head;
    int c=0;
    while(temp){
        c++;
        temp=temp->next;
    }
    return c;
}

void middle_element(){
    int n=length();
    int c=1;
    Node *temp=head;

    if (n%2==0){
        while(c!=n/2){
            temp=temp->next;
            c++;
        }
        cout<<"mid-element : "<<temp->val<<" "<<temp->next->val<<endl;
    }
    else{
        while(c!=n/2){
            temp=temp->next;
            c++;
        }
        cout<<"mid-element : "<<temp->next->val<<endl;
    }
}

void mid_by_pointer(){
Node *first=head;
Node *sec=head;
while((sec->next!=NULL)&&(sec->next->next!=NULL)){
    sec=sec->next->next;
    //cout<<sec->val<<"  ";
    first=first->next;
}
cout<<first->val<<endl;



}

void reverseLL(){
Node *prev=NULL;
Node *next=NULL;
Node *current=head;
while(current){
   next=current->next;
   current->next=prev;
   prev=current;
   current=next;
}
head=prev;


}

void insert_node(int x){
    Node *temp=new Node;
    temp->val=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }

}

int main(){
Node* head;
int n,a;
cin>>n;
while(n--){
    cin>>a;
    insert_node(a);
}
print();
cout<<"Length : "<<length()<<endl;
middle_element();
mid_by_pointer();

reverseLL();
print();
return 0;
}
