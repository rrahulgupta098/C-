#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int r=n-1;//
	sort(a,a+n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	int k;
	cout<<"find the kth smallest";
	cin>>k;
	cout<<endl;
	cout<<a[k-1];
	
return 0;	
}

