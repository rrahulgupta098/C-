#include<iostream>
using namespace std;
int main(){
    
    int a[]={1,3,5,7};
    int b[]={0,2,6,8,9};
    int n=sizeof(a) / sizeof(a[0]);int m=sizeof(b) / sizeof(b[0]);
    int c[m+n]={0};

    int i=0;
    int j=0;
    int k=0;
    int cnt=0;

    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
//            i++;k++;
        }
        else
        {
            c[k++]=b[j++];
//            j++;k++;
        }
//cnt++;
  //      cout<<"w1"<<" "<<cnt<<" c[k]="<<c[k-1] <<endl;
    }
    while(i<n){
        c[k++]=a[i++];
           // cout<<"w2"<<" ";
    }
    while(j<m){
        c[k++]=b[j++];
          // cout<<"w3";
    }
         for(int l=0;l<m+n;l++){
        //cout<<c[l]<<" ";
    }
   return 0;

}