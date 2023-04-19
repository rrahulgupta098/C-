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
void insertatTail(node* &head,int val){
node* n=new node(val);
if(head==NULL){
    head=n;
    return;
}
node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
 int getMiddle(node *head)
    {
        node* fast=head; node* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow->data;
        
        // Your code here
    }
int main(){
    node* head=NULL;
    node* head2=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
       int n;cin>>n;
       int a[n];
       //int n=sizeof(a)/sizeof(a[0]);
       for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
    insertatTail(head2,a[i]);    
    }
    cout<<getMiddle(head);
    //display(head);
    return 0;
}