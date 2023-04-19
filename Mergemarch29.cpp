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

node* mid(node* head)
{
    if(head==NULL or head->next==NULL) return head;

    node* slow=head,*fast=head->next;
    while(fast!=NULL && fast->next!=NULL) //M1
    {
        //M2 (fast->next!=NULL && fast!=NULL) 
        fast=fast->next->next;
        slow=slow->next;
    }
    // M1 is better because it might happen that fast=NULL, which in M2 might create a 
    // runtime error as we would be checking fast->next!=NULL, where fast=NULL
    return slow;
}

node* mergeTwoSortedLinkedList(node* head1, node* head2) {

        if(head1==NULL)
        {
            return head2;
        }
        if(head2==NULL)
        {
            return head1;
        }

        node* mergedList=NULL;
        if(head1->data < head2->data)
        {
            mergedList=head1;
            mergedList->next=mergeTwoSortedLinkedList(head1->next,head2);
        }
        else
        {
            mergedList=head2;
            mergedList->next=mergeTwoSortedLinkedList(head1,head2->next);
        }
        return mergedList;
    }

node* mergeSort(node* head)
{
    if(head==NULL or head->next==NULL) return head;
    node* middle=mid(head);
    node* head2=middle->next;
    middle->next=NULL;
    head=mergeSort(head);
    head2=mergeSort(head2);
    node* mergedList=mergeTwoSortedLinkedList(head,head2);
    return mergedList;
}

int main(){
    node* head=NULL;
    int n;cin>>n;
 for(int i=0;i<n;i++){
int d;cin>>d;
    insertatTail(head,d);    
    }
    head=mergeSort(head);
    display(head);

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