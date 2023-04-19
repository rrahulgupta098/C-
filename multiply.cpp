#include <bits/stdc++.h>
using namespace std;
int main(){



	int n;cin>>n;
	int A[n]; for(int i=0;i<n;i++)cin>>A[i];

	
	int  x=99;
	int carry=0;
	int B[10]={0};
	int idx=0;
	for(int i=n-1;i>=0;i--){
		int res=A[i]*x+carry;
		B[idx]=res%10;
		carry=res/10;z
		idx++;
		
	}
	if(carry>0){
		B[idx]=carry;
	}

//	while(carry>0)
//	{
//
//		A[idx]=carry%10;
//		carry=carry/10;
//		idx++;
//	}

	
for(int i=idx;i>=0;i--){
cout<<B[i]<<" ";
}
	return 0;
}

