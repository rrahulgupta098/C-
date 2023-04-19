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

node*  intersaction(node* head1,node* head2,int l1,int l2){
    int l=l1-l2;
int cnt=0;
node* h1=head1;
    while(cnt<l){
        h1=h1->next;
    cnt++;
    }
    node* h2=head2;
    
    while(h1->next!=h2->next){
        h1=h1->next;
        h2=h2->next;
        if(h1->next==h2->next){
            cout<<"Hi";
            return h1;
            
        }
        
    }
    return NULL;

}

// void intersect(node* &head1,node* &head2,int pos){
//     node* temp1=head1;
//     pos--;
//     while(pos--){
//         temp1=temp1->next;
//     }
//     node* temp2=head2;
//     while(temp2->next!=NULL){
//         temp2=temp2->next;
//     }
// temp2->next=temp1;
// }

int intersactionupdated(node* head1,node* head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node* h1;
    node* h2;
    if(l1>l2){
    h1=head1;
    h2=head2;
    d=l1-l2;
    }else{
        h1=head2;
        h2=head1;
        d=l2-l1;
    }
    while(d--){
       h1=h1->next;
      
       if(h1==NULL){
        return -1;
       }
    }
    while(h1!=NULL && h2!=NULL){
        if(h1->data==h2->data){
            return h1->data;
        }
        h1=h1->next;
        h2=h2->next;
    }
    return -1;


}

int main(){
    node* head1=NULL;
    node* head2=NULL;


    //cout<<endl;
 
       cout<<"size of F LL";
        int s1;cin>>s1;//cout<<endl;
        for (int i = 0; i < s1; i++)
        {
            int d1; cin>>d1;
           insertatTail(head1, d1);
        }
        cout<<"size of LL2";
        int s2;cin>>s2;//cout<<endl;
        for(int i=0;i<s2;i++){
            int d2;cin>>d2;
           insertatTail(head2,d2);
        }
    int l1=length(head1);//l1
    int l2=length(head2);//l2
         // intersect(head1,head2,3);
            cout<<intersactionupdated(head1,head2);
     //node* res=intersaction(head1,head2,l1,l2);
//cout<<res->data;


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