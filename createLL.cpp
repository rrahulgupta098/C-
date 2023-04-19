#include<iostream>
using namespace std;
class node{
public :
int data;
node* next;
node(int d){
    data=d;
    next=NULL;
}
};

void insertatTail(node* &head,int data){
node *newnode = new node(data);
if(head==NULL){
head=newnode;
return;
}
node * temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newnode;
}

void display(node *head){
node *temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}

}

void insetatHead(node* &head,int data){
   node * nayinode=new node(data);
nayinode->next=head;
head=nayinode;

}

bool search(node * head,int key){
node* temp=head;
while(temp!=NULL){
if(temp->data==key){
    return true;
}
temp=temp->next;
}
return false;
}

void insetatPositon(node* &head,int data,int posi){
    node* nayinode=new node(50);
    node* temp=head;
    for(int i=0;i<posi-1;i++){
        temp=temp->next;
    }
    nayinode->next=temp->next;
    temp->next=nayinode;
}

void deletefirstnode(node* &head){
    node* temp=head;
    head=head->next;
    delete(temp);
}
void deletelastnode(node* &head){
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    delete(temp);
}

int main(){
node *head=NULL;
insertatTail(head,1);
insertatTail(head,2);
insertatTail(head,3);
insertatTail(head,4);
insertatTail(head,5);
display(head);
cout<<endl;
cout<<"Hello";
// deletelastnode(head);
// display(head);

// insetatHead(head,1);
// insetatHead(head,2);
// insetatHead(head,3);
// insetatHead(head,4);
// insetatHead(head,5);
// display(head);
// cout<<endl;
// cout<<search(head,5);
// insetatPositon(head,10,2);
//  display(head);
    return 0;
}