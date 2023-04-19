#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	cin>>n;
	

	
//upper half
	for(int i=1;i<n+1;i++){
		for(int j=2;j<=i;j++){
			cout<<" ";
		} int num=n-i+1;
		for(int k=i;k<n+1;k++){
			cout<<num;
			num--;
		} int num2=0;
		for(int l=i;l<=n+1;l++){
			cout<<num2;
			num2++;
		}
		cout<<endl;
	}


for(int i=1;i<=n+1;i++){
	for(int j=i;j<n+1;j++){
		cout<<" ";
	}
	int sum=i-1;
	for(int k=1;k<=i;k++){
	cout<<sum;
	sum--;	
	}
	int sum2=1;
	for(int l=2;l<=i;l++){
		cout<<sum2;
		sum2++;
	}
	
	cout<<endl;
}

	return 0;
}
