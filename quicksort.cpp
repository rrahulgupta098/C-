#include<bits\stdc++.h>
using namespace std;
 
 void quicksort(int A[],int s,int e){
if(s>=e){
    return;
}

int idx=s;
int pivot=A[e];
for(int j=s;j<=e-1;j++){
    if(A[j]<=pivot){
        swap(A[j],A[idx]);
        idx++;
    }
}
swap(A[idx],A[e]);
quicksort(A,s,idx-1);
quicksort(A,idx+1,e);

}
 
 int main(){
    int n;cin>>n;
    int A[n];
    for(int i=0;i<n;i++){cin>>A[i];}
    // int A[]={2,1,3,5,4};
    
    // int n=sizeof(A)/sizeof(A[0]);
    quicksort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    return 0;
 }
