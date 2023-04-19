#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,3,5,7};
    int b[]={0,2,6,8,9};
int m=sizeof(a)/sizeof(a[0]);
int n=sizeof(b)/sizeof(b[0]);
//int s=m+n;
int c[m+n]={0};
int i=0;
int j=0;
int k=0;
if(m==0){
    for(int l=0;l<m+n;l++){
    cout<<b[l]<<" ";
}
return 0;
}
if(n==0){
    for(int l=0;l<m+n;l++){
    cout<<a[l]<<" ";
}
return 0;
}
while(i<m && j<n){
    if(a[i]<b[j]){
        c[k++]=a[i++];
        
    }else{
        c[k++]=b[j++];
    }
}

while(i<m){
        c[k++]=a[i++];
}
while(j<n){
        c[k++]=b[j++];
}
for(int l=0;l<m+n;l++){
    cout<<c[l]<<" ";
}

	return 0;
}