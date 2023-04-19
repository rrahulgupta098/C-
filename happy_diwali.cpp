#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=5;
for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		if(j==1 || j==n || i==n/2+1){
			cout<<"*";
		}else{ cout<<" ";
		}
}
cout<<" ";
for(int k=1;k<=n;k++){
	if(k==1 || k==n || i==1 || i==n/2+1){
	cout<<"*";
	}else{
		cout<<" ";
	}
	
}
cout<<" ";
for(int k=1;k<=n;k++){
	if(k==1 || k==n || i==1 || i==n/2+1){
	cout<<"*";
	}else{
		cout<<" ";
	}
	
}


cout<<" ";

for(int l=1;l<=n;l++){
	int sum=n;

	if(i>=n/2+1){

	if(l==n/2+1){
		cout<<"*";
	}else{
		cout<<" ";
	}	
	}
	else if(i<=n/2+1){
		if(i+l==n+1 || i==l){
			cout<<"*";
		}else{
			cout<<" ";
		}
	}


	
}


	cout<<endl;
}
return 0;}


