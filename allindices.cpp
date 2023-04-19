#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void indices(int A[],int i,int k,int n){
    if(i>=n){
        return ;
    }
if(A[i]==k){
v.push_back(i);
}
indices(A,i+1,k,n);
}
int main(){
int n=5;//cin>>n;

int A[n]={3,2,1,2,3};
//for(int i=0;i<n;i++)cin>>A[i];
int k;//;cin>>k;
int t=3;
while(t--){
cin>>k;
indices(A,0,k,n);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

}
cout<<endl;
v.clear();
}

	
	return 0;
}