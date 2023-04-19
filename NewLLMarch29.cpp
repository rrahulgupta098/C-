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

node* mergeTwoSortedLinkedList(node* head1, node* head2) {//sir 

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


node* mergetwosortedlist(node* &head1,node* &head2){ //Mine
      if( head1== NULL) return head2;
    if(head2 == NULL) return head1;
    node* third=NULL;
    node* last=NULL;
    if(head1->data<head2->data){
        third=last=head1;
        head1=head1->next;
        last->next=NULL;
    }else{
         third=last=head2;
         head2=head2->next;
         last->next=NULL;
    }
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            last->next=head1;
            last=head1;
            head1=head1->next;
            last->next=NULL;
        }else{
            last->next=head2;
            last=head2;
            head2=head2->next;
           last->next=NULL;
        }
        
    }
    if(head1!=NULL){last->next=head1;}
        if(head2!=NULL){last->next=head2;}
    return third;

} 

int main(){
    node* head1=NULL;
    node* head2=NULL;

int S;
    cin >> S;
    //cout<<endl;
    while (S--)
    {
       // cout<<"size of F LL";
        int s1;cin>>s1;//cout<<endl;
        for (int i = 0; i < s1; i++)
        {
            int d1; cin>>d1;
           insertatTail(head1, d1);
        }
        //cout<<"size of LL2";
        int s2;cin>>s2;//cout<<endl;
        for(int i=0;i<s2;i++){
            int d2;cin>>d2;
           insertatTail(head2,d2);
        }
    }
    node * final=mergeTwoSortedLinkedList(head1,head2);

 display(final);

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