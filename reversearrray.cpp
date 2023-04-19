#include <bits\stdc++.h>
using namespace std;

void reverse1(int a[],int n,int i){
    if(i>=n/2){
        return ;
    }
   //int temp;
   swap(a[i],a[n-i-1]);
    reverse1(a,n,i+1);
  
}
int main() {
    
    int n=5;
    int a[]={1,2,3,4,5};
   reverse1(a,n,0);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
cout<<"Hello World!";


}