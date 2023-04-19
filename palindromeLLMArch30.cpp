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
//cout<<"NULL"<<endl;
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

node* mid(node* head){
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

node* reverse(node* &head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    node* newhead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
bool ispalindrome(node* head){
    node* middle=mid(head);
    node* newhead=reverse(middle);
    node* curr=head;
    while(newhead->next!=NULL){
        if(curr->data!=newhead->data){
            return false;
        }else{
            curr=curr->next;
            newhead=newhead->next;
        }
    }
    return true;
}


int main(){
    node* head=NULL;
    int n;cin>>n;
 for(int i=0;i<n;i++){
       int d;cin>>d;
     insertatTail(head,d);    
      }
      //display(head);
     // node* newhead=reverse(head);
       //              display(newhead);
    //     node* middle=mid(head);
      node* newhead= reverse(head);
        //display(newhead);
    cout<<ispalindrome(head);


//     int size;cin>>size;
//     while(size--){
//     int n;cin>>n;
//     int a[n];for(int i=0;i<n;i++){cin>>a[i];}
// //    int arr[]={1,2,3,4,5,6};
//     for(int i=0;i<n;i++){
//     insertatTail(head1,a[i]);    
//     }
//     int n1;cin>>n1;
//     int a1[n1];for(int i=0;i<n1;i++){cin>>a1[i];}
// //    int arr[]={1,2,3,4,5,6};
//     for(int i=0;i<n1;i++){
//     insertatTail(head2,a1[i]);    
//     }
//     }
    
// node* final=mergetwosortedlist(head1,head2);
//     display(final);
    return 0;
}