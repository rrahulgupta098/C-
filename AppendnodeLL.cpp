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

void insetatPositon(node* &head,int data,int posi){
    node* nayinode=new node(data);
    node* temp=head;
    for(int i=0;i<posi-1;i++){
        temp=temp->next;
    }
    nayinode->next=temp->next;
    temp->next=nayinode;
}
 void display(node *head){
node *temp=head;
while(temp!=NULL){ //temp->next!=NULL; difference and temp node h ya pointer h
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
 }
int length(node* head){
    int cnt=1;
   node* temp=head;
    while(temp->next!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

node* kappend(node* &head,int k){
node* Tail=head;
node* newTail;
node* newHead;

int l=length(head);
k=k%l;
int cnt=1;
while(Tail->next!=NULL){
if(l-k==cnt){
    newTail=Tail;
}
if(l-k+1==cnt){
    newHead=Tail;
}
Tail=Tail->next;
cnt++;
}
newTail->next=NULL;
Tail->next=head;
return newHead; 
}

int main(){
    node* head=NULL;
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++){cin>>a[i];}
//    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<n;i++){
    insertatTail(head,a[i]);    
    }
    //int k;cin>>k;
    //display(head);cout<<endl;
    //cout<<length(head);cout<<endl;
    //node* Nhead=kappend(head,k);
    display(head);
    return 0;
}