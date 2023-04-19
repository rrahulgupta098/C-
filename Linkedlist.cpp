#include<bits\stdc++.h>
using namespace std;

class node
{
    public : 
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};


void insertAthead(node* & head,node* & tail,int data)
{
if(head==NULL){
    head=new node(data);
    tail=head;
    return;
}
node* nayinode=new node(data);
nayinode->next=head;
head=nayinode;
}

void insertAttail(node *& head,node*& tail,int data){
    if(head==NULL){
        insertAthead(head,tail,data);
        return;
    }
    tail->next=new node(data);
    tail=tail->next;
}



void print(node* head){
node * temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}

void printrecursively(node *head){
    if(head==NULL){
       return ;
    }
   cout<<head->data<<" ";
        printrecursively(head->next);
}

int length(node *head){
    node *temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

int lengthrecursivily(node *head){
    if(head==NULL){
        return 0;
    }
    return lengthrecursivily(head->next)+1;
}

void insertAtpos(node* &head,node* & tail,int data,int pos){
    if(pos==0 or head==NULL){
        insertAthead(head,tail,data);
        return ;
    }
    node *temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
        if(temp==NULL){
            insertAttail(head,tail,data);
            return ;
        }
    }
    node* nayinode=new node(data);
    nayinode->next=temp->next;
    temp->next=nayinode;
}

void deleteathead(node* &head,node* &tail){
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
    delete(head);
    head=NULL;
    tail==NULL;
    return ;   
    }
node *temp=head;
head=head->next;
delete(temp);
}

void deleteattatil(node * &head,node* &tail){
if(head==NULL){
    return ;
}
if(head->next==NULL){
delete(head);
head=NULL;
tail=NULL;
return ;
}
node* prev=head;
node* temp=head->next;
while(temp!=tail){
    prev=prev->next;
    temp=temp->next;
}
tail=prev;
prev->next=NULL;
delete(temp);
}

void deleteall(node*  &head,node* &tail){
    while(head!=NULL){
        deleteathead(head,tail);
    }
}

node* reverse(node * head){
     if(head==NULL or head->next==NULL) return head;
    node * prev=NULL;
    node* cur=head;
    while(cur!=NULL){
        node* temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    return prev;
}

node* reverse1(node* head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node *newhead = reverse(head->next);
    node* headnext=head->next;
    headnext->next=head;
    head->next=NULL;
    return newhead;
}

int main(){

node* head=NULL;
node* tail=NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        insertAttail(head, tail, d);
    }
printrecursively(head);
cout<<endl;
//insertAthead(head,tail,5);
//deleteattatil(head,tail);
//deleteall(head,tail);
//cout<<lengthrecursivily(head);
//insertAtpos(head,tail,0,2);
head=reverse1(head);
printrecursively(head);
    return 0;
}