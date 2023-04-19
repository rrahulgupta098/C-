#include<iostream>
using namespace std;
class node{
 public:
    int data;
    node* next;
    node* prev;
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};

void insertatHead(node* &head,int val){
    node* newNode=new node(val);
    newNode->next=head;//jb koi node na ho to iski requirement ni h 
    if(head!=NULL){
     head->prev=newNode;
    }
    head=newNode;
    //using temp pointer not woriking
    // node* temp=head;
    // temp->prev=newNode;
    // newNode->next=temp;
    // head=newNode;
}

void insertatTail(node* &head,int val){
   if(head==NULL){
    insertatHead(head,val);
    return ;
   }
   node* newNode=new node(val);
   node* temp=head;
   while(temp->next!=NULL){
    temp=temp->next;
   } 
   temp->next=newNode;
   newNode->prev=temp;
   //newNode->next=NULL; already NULL because of constructor
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void deleteatHead(node* &head){
    node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete(temp);
}

void deleteatposi(node* &head,int pos){
   if(pos==1){
    deleteatHead(head);
    return;
   }
    node* temp=head;
    int cnt=1;
    while(cnt!=pos && temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){//agr last node h to
     temp->next->prev=temp->prev;
    }
    delete(temp);
}

int main(){
node* head=NULL;
insertatTail(head,1);
insertatTail(head,2);
insertatTail(head,3);
// display(head);cout<<endl;
// insertatHead(head,10);
// display(head);
// deleteatposi(head,1);cout<<endl;
display(head);
    return 0;

}
