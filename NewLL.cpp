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
while(temp!=NULL){ //temp->next!=NULL; difference and temp node h ya pointer h
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
    node* nayinode=new node(data);
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
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* temp1=temp->next;
    delete(temp1);
   temp->next=NULL;
}
void deleteatpos(node* &head,int posi){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        node* temp=head;
        head=head->next;
        delete(temp);
        return;
    }

    node* curr=head;
    for(int i=0;i<posi-1;i++){
        curr=curr->next;
    }
    node* temp=curr->next;
    curr->next=temp->next;
    delete(temp);
}

node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* Next=NULL;
    while(curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}

node* revrecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=revrecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

node* reverseknode(node* head, int k){
    node* prev=NULL;
    node* curr=head;
    node* Next;
    int cnt=0;
    while(curr!=NULL && cnt<k){
      Next=curr->next;
      curr->next=prev;
      prev=curr;
      curr=Next;
      cnt++;
    }
    if(Next!=NULL){
    head->next=reverseknode(Next,k);
    }
    return prev;

}

void makeCycle(node* &head,int pos){
    node* temp=head;
    node* startNode;
    int cnt=1;
    while(temp->next!=NULL){
          if(cnt==pos){
            startNode=temp;
          }
          temp=temp->next;
          cnt++;
    }
    temp->next=startNode;
}

bool detectCycle(node* head){
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }

    }
    return false;
}

void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

int main(){
node *head=NULL;
insertatTail(head,1);
insertatTail(head,2);
insertatTail(head,3);
insertatTail(head,4);
insertatTail(head,5);
insertatTail(head,6);
//display(head);cout<<endl;
// makeCycle(head,3);cout<<endl;
// //display(head);
// cout<<detectCycle(head);cout<<endl;
// removeCycle(head);cout<<endl;
// cout<<detectCycle(head);cout<<endl;
// display(head);
node* newhead=revrecursive(head);
display(newhead);
// int k=2;
// node* newhead=reverseknode(head,k);
// display(newhead);

// cout<<endl;
// cout<<"Hello"<<endl;
// deleteatpos(head,1);
//   display(head);

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