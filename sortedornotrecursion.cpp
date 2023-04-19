#include<bits/stdc++.h>
using namespace std;

int sortedornot(int A[],int n){
if(n==0 || n==1){
    return 1;
}

if(A[n-1]<A[n-2]){
return 0;
}
return sortedornot(A,n-1);
}

int main(){
int n;cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}

if(sortedornot(A,n)){
    cout<<"true";
}else{
    cout<<"false";
}
	return 0;
}
