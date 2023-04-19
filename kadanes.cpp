#include <bits/stdc++.h>
using namespace std;
//min subarray
int kadane(int A[],int n){
	int sum=0;
	int maxi=A[0];
	for(int i=0;i<n;i++){
		sum=sum+A[i];
		maxi=min(maxi,sum);
		if(sum>0){
			sum=0;
		}
	}
	return maxi;
}

int main(){
int T;
cin>>T;
while(T--){
	int n;cin>>n;
	int A[n]; for(int i=0;i<n;i++)cin>>A[i];
	int ans=kadane(A,n);
	//cout<<ans;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+A[i];
	}
	int final_ans=sum-ans;
	cout<<final_ans;
}	

//max subarray	
//	int sum=0;
//	int maxi=A[0];
//	for(int i=0;i<n;i++){
//		sum=sum+A[i];
//		maxi=max(maxi,sum);
//		if(sum<0){
//			sum=0;
//		}
//	}
//	cout<<maxi;
	return 0;
}
