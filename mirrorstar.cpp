#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;



//upper hald	
for(int i=1;i<=n/2+1;i++){
	for(int j=i;j<=n/2;j++){
		cout<<"\t";
	}
	for(int k=1;k<=i;k++){
		cout<<"*\t";
	}
	for(int l=1;l<i;l++){
		cout<<"*\t";
	}
	cout<<endl;
}

//lower part
for(int i=1;i<=n/2;i++){
	for(int k=1;k<=i;k++){
		cout<<"\t";
	}
	for(int j=i;j<=n/2;j++){
		cout<<"*\t";
	}
	for(int l=i;l<n/2;l++){
		cout<<"*\t";
	}
	cout<<endl;
}
return 0;
}
