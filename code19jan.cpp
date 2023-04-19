#include<bits/stdc++.h>
using namespace std;
int main(){
	
	//int A[]={0,0,1,1,0,0,0,1,0,0,1,1,1,0};
	int A[]={1,0,0,0,0,1,0,0,0,1};
	int n=sizeof(A)/sizeof(A[0]);
	int count=0;
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
		if(A[i]==1){
			count++;
			mx=max(mx,count);
		}else{
			count=0;
		}
	}
	cout<<mx;
	return 0;
}
