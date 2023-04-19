#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
     data=d;
     next=NULL;
    }
};

void insertathead(node* &head,node* &tail,int d){
if(head==NULL){
    head=new node(d);
    tail=head;
   return;
}
node* nayinode=new node(d);
nayinode->next=head;
head=nayinode;
}

void insertattail(node* &head,node* &tail,int d){
    
     //node* nayinode=new node(d);
    // node* temp=head;
    // while(temp->next!=NULL){
    //     temp=temp->next;
    // }
    // temp->next=nayinode;
    if(head==NULL)
    {
        insertathead(head,tail,d);
        return;
    }
tail->next=new node(d);
tail=tail->next;
}

void insetatPos(node* &head,node* &tail,int pos,int d){
    if(head==NULL){
        insertathead(head,tail,d);
        return ;
    }
node* nayinode=new node(d);
node* temp=head;
for(int i=1;i<=pos-2;i++){
temp=temp->next; 
if(tail==NULL){
    insertattail(head,tail,d);
    return;
}   
}
nayinode->next=temp->next;
temp->next=nayinode;
}

void display(node* head){
 node* temp=head;   
 while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
 }
}

int length(node* head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
   temp=temp->next;
    }
    return count;
}
void deleteathead(node* &head,node* &tail){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
     delete(head);
     head=NULL;
     tail=NULL;
     return;
    }

node* temp=head;
head=head->next;
delete(temp);
}

void deleteatTail(node* &head,node* &tail){
    if(head==NULL)return;
    if(head->next==NULL){
        delete(head);
        head=NULL;
        tail==NULL;
        return ;
    }
    node* temp=head->next;
    node* prev=head;
    while(temp->next!=NULL){
        prev=prev->next;
        temp=temp->next;
    }
    delete(temp);
    prev->next=NULL;
    tail=prev;

    // while(temp->next->next!=NULL){
    //     temp=temp->next;
    // }
    // delete(tail);
    // temp->next=NULL;
    // tail=temp;
    }

   void delteatPos(node* &head,node* &tail,int pos){
    if(head==NULL){
        return;
    }
if(head->next==NULL ){
node* temp=head;
head=head->next;
delete(head);
head=NULL;
tail==NULL;
return ;
    }
   node * curr=head;
   for(int i=0;i<pos-1;i++){
     curr=curr->next;
     }
     node* temp=curr->next;
     curr->next=temp->next;
     delete(temp);
   } 




int main(){
    node* head=NULL;
    node* tail=NULL;
    node* q=NULL;
    node* p=NULL;
    // int n;cin>>n;
    // for(int i=0;i<n;i++){int d;cin>>d; insertathead(head,tail,d);}
//insertathead(head,tail,10);
insertattail(head,tail,20);
insertattail(head,tail,30);
insertattail(head,tail,40);
insertattail(head,tail,50);
    display(head);cout<<endl;
    // insetatPos(head,tail,6,55);
    // display(head);
    // cout<<length(head);
    // cout<<"jlkhkj"<<endl;
    // deleteatTail(head,tail);
   // delteatPos(head,tail,0);
   //recabbari(q,p,head);
    display(head);

    return 0;
}