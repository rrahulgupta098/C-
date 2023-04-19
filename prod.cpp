#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<1)
	{
	cout<<0;
	}
	else{
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
	int output[n]={0};
    for(int i=0;i<n;i++){
		int prod=1;
		for(int j=0;j<n;j++){
			if(i==j){continue;}
			prod=prod*arr[j];
		}
		//cout<<prod<<" ";
		output[i]=prod;
	}
	for(int i=0;i<n;i++){
		cout<<output[i]<<" ";
	}
}
return 0;
}
