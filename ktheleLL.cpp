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




node* reverse(node* &head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    node* newhead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

int kthele(node* head,int k){

node* newhead=reverse(head);
int cnt=1;
while(cnt<k){
    newhead=newhead->next;
    cnt++;
}
return newhead->data;
}

int main(){
    node* head=NULL;
             int x; 
    while(x!=-1)
	{
       cin>>x;
//	   l.push_back(x);
insertatTail(head,x); 
 	}
//     int n;cin>>n;
//  for(int i=0;i<n;i++){
//        int d;cin>>d;
//      insertatTail(head,d);    
//       }
      //display(head);
     // node* newhead=reverse(head);
       //              display(newhead);
    //     node* middle=mid(head);
      //node* newhead= reverse(head);
        int k;cin>>k;
        cout<<kthele(head,k+1);
       // display(newhead);
    //cout<<ispalindrome(head);


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



// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	    vector<int>l;
//          int x; 
//     while(x!=-1)
// 	{
//        cin>>x;
// 	   l.push_back(x);
// 	}
// 	int ele;cin>>ele;
    
// 	int s = l.size()-ele;
// 	cout<<l[s-1];
// 	return 0;
// }