#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=7;
for(int i=1;i<n;i++){
for(int j=i;j<=n;j++){
 cout<<"*";
}
for(int k=1;k<i-1;k++){
	cout<<" ";
}
for(int l=1;l<i;l++){
	cout<<" ";
}
for(int m=i;m<=n;m++){
			if(i==1 && m==n){
			break;
		}

	cout<<"*";
}
cout<<endl;	
}

for(int i=1;i<=n;i++){
	for(int j=1;j<=i;j++){
		cout<<"*";
	}
	for(int k=i;k<n-1;k++){
		cout<<" ";
	}
	for(int l=i;l<n;l++){
		cout<<" ";
	}
	for(int m=1;m<=i;m++){
		if(i==n && m==n){
			break;
		}
		cout<<"*";
	}
	cout<<endl;
}

return 0;
}
