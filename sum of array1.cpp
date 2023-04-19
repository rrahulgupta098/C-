#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<<"enter the test cases";
	int t;
	cin>>t;
	
	while(t--)
	{
	cout<<"enter the size";
	int n;
	cin>>n;
	int a[n];
	cout<<"enter the elements";
	int s=0;
	for( int i=0;i<n;i++){
		cin>>a[i];
		 s=s+a[i];
	}
	cout<<s;
	
	}
	
	
	
	
//	int sum=0;
//	for(int i=0;i<n;i++){
//		sum=sum+a[i];
//	}
//	cout<<sum;
	
	return 0;
}
