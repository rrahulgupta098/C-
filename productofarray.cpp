#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
if(n>1){

int arr[n];
int output[n];
for(int i=0;i<n;i++)cin>>arr[i];
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
