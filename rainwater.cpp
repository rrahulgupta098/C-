#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int A[n];
	for(int i=0;i<n;i++)cin>>A[i];
//    int A[n]={3,1,2,4,0,1,3,2};
	
	int left_max[n];
	left_max[0]=A[0];
	for(int i=1;i<n;i++)
	{
		left_max[i]=max(left_max[i-1],A[i]);
		 }     
		 
	int right_max[n];
	right_max[n-1]=A[n-1];
	for(int i=n-2;i>=0;i--){
		right_max[i]=max(right_max[i+1],A[i]);
	}
	
	int ans=0;
	for(int i=0;i<n;i++){
		
		ans+=min(left_max[i],right_max[i])-A[i];
	}
	cout<<ans;
//	
//	for(int i=0;i<n;i++){
//		cout<<left_max[i]<<" ";
//	}		 
//	cout<<endl;
//	for(int i=0;i<n;i++){
//		cout<<right_max[i]<<" ";
//	}	 
	
	
		 
return 0;
}
